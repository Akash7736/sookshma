#include "FlySkyIBus.h"
#include <Servo.h>

#define BUFFER_SIZE 128  // Define the size of the buffer
char buffer[BUFFER_SIZE];  // Buffer to store incoming data
int bufferIndex = 0; 

// Channels
int CH1;
int CH2;
int CH3;
int CH4;
int CH5;
int CH6;
int CH7;
int CH8;

// Pin definitions
int thrustersbPin = 12;  // T200 Thruster control pin (PWM via Servo library)
int thrusterpsPin = 13;  // Servo 2 control pin
int light1Pin = 40;     // Light control pin
int light2Pin = 41;     // Light control pin

// Servo objects for T200 thruster and the servos
Servo thrustersb;
Servo thrusterps;

int rpm;     // Default RPM for thruster
int rudder; 
int thrusterpsvalue;
int thrustersbvalue;
bool first_count;
float start_millis;
float seconds_counter;
float current_millis;
int maxrfvariation = 200;

int readChannel(byte channelInput, int minLimit, int maxLimit, int defaultValue){
  uint16_t ch = IBus.readChannel(channelInput);
  if (ch < 5) return defaultValue;
  return map(ch, 1000, 2000, minLimit, maxLimit);
}

int thrustmapper(int pwm, int actualmin, int actualmax, int minlimit, int maxlimit){
  return map(pwm, actualmin, actualmax, minlimit, maxlimit);
}

void RF_MAN(int CH1, int CH2, int CH4){

  if (CH4 > 1450 && CH4 < 1550){
    thrusterpsvalue = CH2 - CH1 + 1500;
    thrustersbvalue = CH2 + CH1 - 1500;

    // thrustersbvalue = thrustmapper(thrustersbvalue, 500, 2500, 1300, 1850);
    // thrusterpsvalue = thrustmapper(thrusterpsvalue, 500, 2500, 1300, 1850);

    thrusterpsvalue = thrustmapper(thrusterpsvalue, 700, 2300, 1300, 1700);
    thrustersbvalue = thrustmapper(thrustersbvalue, 700, 2300, 1300, 1700);
    
    thrustersb.writeMicroseconds(thrusterpsvalue); 
    thrusterps.writeMicroseconds(thrustersbvalue);
  }
  else {
    thrusterps.writeMicroseconds(CH4);  // inplace for channel 4 left side of rf
    thrustersb.writeMicroseconds(3000 - CH4); 
  }
} // Default position for rudder

void setup() {
  // Initialize Serial communication
  Serial.begin(115200);
  Serial.setTimeout(1);
  IBus.begin(Serial2); // Set timeout for Serial read

  // Set light pins as outputs
  pinMode(light1Pin, OUTPUT);
  pinMode(light2Pin, OUTPUT);

  // Attach the servos and the thruster to their pins
  thrustersb.attach(thrustersbPin);  
  thrusterps.attach(thrusterpsPin); 

  // Set thrusters and rudder to default positions
  thrustersb.writeMicroseconds(1500); 
  thrusterps.writeMicroseconds(1500); 

  delay(2000);  // Wait for system to stabilize
}

void Auto() {
  while (Serial.available()) {
    char incomingChar = Serial.read();  // Read one character at a time

    if (incomingChar == '\n') {  // Check for end of the message
      buffer[bufferIndex] = '\0';  // Null-terminate the string
      processMessage(buffer);     // Process the complete message
      bufferIndex = 0;            // Reset buffer index for next message
    } else {
      if (bufferIndex < BUFFER_SIZE - 1) {
        buffer[bufferIndex++] = incomingChar;  // Add to buffer
      } else {
        // Handle buffer overflow
        bufferIndex = 0;  // Reset buffer
        Serial.println("Buffer overflow, message ignored.");
      }
    }
  }
}

void processMessage(char* message) {
  // Convert the message into a String for easier processing
  String input = String(message);

  // Parse the message
  int commaIndex = input.indexOf(',');
  if (commaIndex != -1) {  // Ensure a valid format
    String rudderStr = input.substring(0, commaIndex);
    String rpmStr = input.substring(commaIndex + 1);

    // Convert strings to integers
    int rudder = rudderStr.toInt();
    int rpm = rpmStr.toInt();

    // thrustersbvalue = 1500 + (rpm/800*200) + (rudder/35*200);
    // thrusterpsvalue = 1500 + (rpm/800*200) - (rudder/35*200);

    rudder = thrustmapper(rudder, -35, 35, 1000, 2000);
    rpm = thrustmapper(rpm, -800, 800, 1000, 2000);
    thrusterpsvalue = rpm - rudder + 1500;
    thrustersbvalue = rpm + rudder - 1500;

    thrustersbvalue = thrustmapper(thrustersbvalue, 500, 2500, 1400, 1650);
    thrusterpsvalue = thrustmapper(thrusterpsvalue, 500, 2500, 1400, 1650);

    thrustersb.writeMicroseconds(thrusterpsvalue); 
    thrusterps.writeMicroseconds(thrustersbvalue);
  } else {
    Serial.println("Invalid format received.");
  }
}

void loop() {
  IBus.loop();  // Update IBus data

  // Read channel values
  CH5 = IBus.readChannel(4);
  CH6 = IBus.readChannel(5);
  CH7 = IBus.readChannel(6);
  CH8 = IBus.readChannel(7);

  if (CH8 == 2000){
    digitalWrite(light1Pin, HIGH);
    digitalWrite(light2Pin, HIGH); 
  }
  else{
    digitalWrite(light1Pin, LOW);
    digitalWrite(light2Pin, LOW);
  }
  /////////////////////////////////
  if(CH6 == 2000){
    if (first_count == true){
      start_millis = millis();
      seconds_counter = 0;
      first_count = false;
    }
    current_millis = millis();
    if (current_millis - start_millis >= 1000) {
      thrustersb.writeMicroseconds(1500);
      thrusterps.writeMicroseconds(1500);  // Thruster to the minimum position (stopped)
    }
  } 
  /////////////////////////////////
  else if (CH5 == 2000){ // Autonomy
    first_count = true;
    Auto();
  }
  /////////////////////////////////
  else if (CH5 == 1000){ // RF
    first_count = true;

    CH1 = readChannel(0, 1100 , 1900, 1500);
    CH2 = readChannel(1, 1100 , 1900 , 1500);
    CH4 = readChannel(3, 1430 , 1570, 1500);

    RF_MAN(CH1, CH2, CH4);      
  }
}
