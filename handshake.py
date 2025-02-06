#!/usr/bin/env python3
import serial
import time

def ping_arduino():
    try:
        # Configure serial port
        ser = serial.Serial(
            port='/dev/ttyACM0',  # Adjust this to your Arduino's port
            baudrate=115200,
            timeout=1
        )
        
        # Wait for serial to initialize
        time.sleep(2)
        
        while True:
            print("Sending ping request...")
            ser.write(b'P')  # Send ping request
            
            # Wait for response
            response = ser.read()
            
            if response == b'A':
                print("Received ping response from Arduino!")
                print("Arduino is ready for micro-ROS")
                ser.close()  # Explicitly close the serial port before returning
                return True  # Return True on success
            else:
                print("No response or incorrect response")
                time.sleep(1)  # Wait before retry
                
    except serial.SerialException as e:
        print(f"Serial port error: {e}")
        print("Check if the port is correct and Arduino is connected")
        return False
        
    except KeyboardInterrupt:
        print("\nPing script terminated by user")
        if 'ser' in locals():
            ser.close()  # Make sure to close on keyboard interrupt
        return True
        
    except Exception as e:
        print(f"Unexpected error: {e}")
        return False
        
    finally:
        if 'ser' in locals():
            ser.close()  # Ensure serial port is always closed

if __name__ == "__main__":
    print("Starting Arduino ping script...")
    print("Press Ctrl+C to exit")
    success = ping_arduino()
    exit(0 if success else 1)  # Exit with status code