// Motor Code Adopted From: http://www.instructables.com/id/Control-your-motors-with-L293D-and-Arduino/?ALLSTEPS
// Ping Code Adopted From: https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home#!single-pin-sketch

#include <NewPing.h>

#define PING_PIN  12  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define PING_MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(PING_PIN, PING_PIN, PING_MAX_DISTANCE); // NewPing setup of pin and maximum distance.

#define MAX_DISTANCE_FROM_OBSTACLE_IN_CMS 20 // Change this if needed, depending on position of the ultrasonic sensor in the robot chasis

int motor_left[] = {2, 3};
int motor_right[] = {7, 8};

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 2; i++){
    pinMode(motor_left[i], OUTPUT);
    pinMode(motor_right[i], OUTPUT);
  }
}

void loop() { 
  delay(50);  // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int distanceInCms = sonar.ping() / US_ROUNDTRIP_CM; // Send ping, get ping time in microseconds (uS) and convert it to centimeters (cm)
  Serial.println("Distance: " + String(distanceInCms) + "cm");

  if(distanceInCms != NO_ECHO && distanceInCms < MAX_DISTANCE_FROM_OBSTACLE_IN_CMS) {
    rotate_right(90);
  } else  {
    drive_forward();
  }
}

void rotate_right(int angleInDegrees) {
  for(int i=0; i< angleInDegrees; i++) {
    turn_right();
    delay(25); // Test this out and change it approriately based on your motor speed
  }
}

void drive_forward() {
  digitalWrite(motor_left[0], HIGH); 
  digitalWrite(motor_left[1], LOW); 
  
  digitalWrite(motor_right[0], HIGH); 
  digitalWrite(motor_right[1], LOW); 
}

void turn_right() {
  digitalWrite(motor_left[0], HIGH); 
  digitalWrite(motor_left[1], LOW); 
  
  digitalWrite(motor_right[0], LOW); 
  digitalWrite(motor_right[1], HIGH); 
}
