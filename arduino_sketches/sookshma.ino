#include <micro_ros_arduino.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <geometry_msgs/msg/twist.h>
#include <Servo.h>
#include <IBusBM.h>

// Pin definitions
const int LEFT_THRUSTER_PIN = 9;
const int RIGHT_THRUSTER_PIN = 10;

// RF channel assignments
const int THROTTLE_CH = 2;  // Channel 2 for throttle
const int STEERING_CH = 4;  // Channel 4 for steering
const int MODE_CH = 6;      // Channel 6 for mode selection

// Thruster signal limits
const int NEUTRAL_SIGNAL = 1500;    // PWM value for no movement
const int MAX_FORWARD = 1900;       // Maximum forward signal
const int MAX_REVERSE = 1100;       // Maximum reverse signal
const int SIGNAL_DEADBAND = 25;     // Deadband around neutral position

// Mode switching threshold
const int MODE_THRESHOLD = 1500;    // Above this = AUTO mode, Below = RF mode
bool autoMode = false;              // Start in RF mode

// Create objects
Servo leftThruster;
Servo rightThruster;
IBusBM ibusRc;

// micro-ROS entities
rclc_support_t support;
rcl_node_t node;
rcl_subscription_t subscriber;
geometry_msgs__msg__Twist msg;
rclc_executor_t executor;
rcl_allocator_t allocator;

// Status LED
const int LED_PIN = LED_BUILTIN;
unsigned long lastBlink = 0;
bool ledState = false;

// Function prototypes
void error_loop();
float mapFloat(float x, float in_min, float in_max, float out_min, float out_max);
int constrainThrust(int value);
void calculateThrust(float throttle, float turn, float &leftPower, float &rightPower);
int applyDeadband(int value);

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

// Error handler
void error_loop() {
  while(1) {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

// Map float values
float mapFloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Constrain thrust values
int constrainThrust(int value) {
  return constrain(value, MAX_REVERSE, MAX_FORWARD);
}

// Calculate differential thrust
void calculateThrust(float throttle, float turn, float &leftPower, float &rightPower) {
  // Constrain inputs to [-1, 1]
  throttle = constrain(throttle, -1.0f, 1.0f);
  turn = constrain(turn, -1.0f, 1.0f);
  
  // Base thrust
  leftPower = throttle;
  rightPower = throttle;
  
  // Add turning effect (scaled by 0.5 to prevent exceeding limits)
  leftPower += turn * 0.5f;
  rightPower -= turn * 0.5f;
  
  // Constrain final values
  leftPower = constrain(leftPower, -1.0f, 1.0f);
  rightPower = constrain(rightPower, -1.0f, 1.0f);
}

// Apply deadband to prevent minor unwanted movements
int applyDeadband(int value) {
  if (abs(value - NEUTRAL_SIGNAL) < SIGNAL_DEADBAND) {
    return NEUTRAL_SIGNAL;
  }
  return value;
}

// ROS message callback
void subscription_callback(const void * msgin) {
  if (!autoMode) return;  // Ignore ROS messages if not in auto mode
  
  const geometry_msgs__msg__Twist * msg = (const geometry_msgs__msg__Twist *)msgin;
  
  float throttle = msg->linear.x;   // Forward/backward movement
  float turn = msg->angular.z;      // Turning movement
  
  float leftPower, rightPower;
  calculateThrust(throttle, turn, leftPower, rightPower);
  
  // Convert to PWM signals
  int leftSignal = map(leftPower * 1000, -1000, 1000, MAX_REVERSE, MAX_FORWARD);
  int rightSignal = map(rightPower * 1000, -1000, 1000, MAX_REVERSE, MAX_FORWARD);
  
  // Apply constraints and deadband
  leftSignal = applyDeadband(constrainThrust(leftSignal));
  rightSignal = applyDeadband(constrainThrust(rightSignal));
  
  // Send signals to thrusters
  leftThruster.writeMicroseconds(leftSignal);
  rightThruster.writeMicroseconds(rightSignal);
}

void setup() {
  // Initialize LED
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  
  // Initialize thrusters
  leftThruster.attach(LEFT_THRUSTER_PIN);
  rightThruster.attach(RIGHT_THRUSTER_PIN);
  
  // Set thrusters to neutral
  leftThruster.writeMicroseconds(NEUTRAL_SIGNAL);
  rightThruster.writeMicroseconds(NEUTRAL_SIGNAL);
  
  // Initialize iBus on Serial1
  Serial1.begin(115200);
  ibusRc.begin(Serial1);
  
  // Initialize micro-ROS
  Serial.begin(115200);
  set_microros_serial_transports(Serial);
  delay(2000);
  
  allocator = rcl_get_default_allocator();
  
  // Create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
  
  // Create node
  RCCHECK(rclc_node_init_default(&node, "asv_control_node", "", &support));
  
  // Create subscriber
  RCCHECK(rclc_subscription_init_default(
    &subscriber,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
    "cmd_vel"));
    
  // Create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &msg, 
    &subscription_callback, ON_NEW_DATA));
    
  delay(2000); // Wait for ESCs to initialize
}

void loop() {
  // Read iBus data
  ibusRc.loop();
  
  // Check mode switch (Channel 6)
  int modeValue = ibusRc.readChannel(MODE_CH);
  autoMode = (modeValue > MODE_THRESHOLD);
  
  // Update LED based on mode
  unsigned long currentMillis = millis();
  if (currentMillis - lastBlink > (autoMode ? 1000 : 200)) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    lastBlink = currentMillis;
  }
  
  if (!autoMode) {
    // RF Control Mode
    float throttle = mapFloat(ibusRc.readChannel(THROTTLE_CH), 1000, 2000, -1.0f, 1.0f);
    float turn = mapFloat(ibusRc.readChannel(STEERING_CH), 1000, 2000, -1.0f, 1.0f);
    
    float leftPower, rightPower;
    calculateThrust(throttle, turn, leftPower, rightPower);
    
    // Convert to PWM signals
    int leftSignal = map(leftPower * 1000, -1000, 1000, MAX_REVERSE, MAX_FORWARD);
    int rightSignal = map(rightPower * 1000, -1000, 1000, MAX_REVERSE, MAX_FORWARD);
    
    // Apply constraints and deadband
    leftSignal = applyDeadband(constrainThrust(leftSignal));
    rightSignal = applyDeadband(constrainThrust(rightSignal));
    
    // Send signals to thrusters
    leftThruster.writeMicroseconds(leftSignal);
    rightThruster.writeMicroseconds(rightSignal);
  } else {
    // Auto Mode - process ROS messages
    RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
  }
  
  delay(10);  // Small delay to prevent overwhelming the system
}