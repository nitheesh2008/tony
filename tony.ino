 

#include <AFMotor.h> //Adafruit Motor Shield Library. First you must download and install AFMotor library
#include <Servo.h>   //Servo library. This is standard library. (Sketch -> Include Library -> Servo)
String voice;

AF_DCMotor motor1 (1, MOTOR12_1KHZ); //create motor #1 using M1 output on Motor Drive Shield, set to 1kHz PWM frequency
AF_DCMotor motor2 (2, MOTOR12_1KHZ); //create motor #2 using M2 output on Motor Drive Shield, set to 1kHz PWM frequency
Servo myServo; //define servo name

void setup()
{
  Serial.begin(9600); //start serial communication
  myServo.attach(10); //define our servo pin (the motor shield servo1 input = digital pin 10)
  myServo.write(90);  //servo position is 90 degrees

}

void loop() 
{
  while (Serial.available()){ //Check if there is an available byte to read
     delay(10); //Delay added to make thing stable 
    char c = Serial.read(); //Conduct a serial read
    if (c == '#') {break;} //Exit the loop when the # is detected after the word
    voice += c; //Shorthand for voice = voice + c
  }
  if (voice.length() > 0){
      if(voice == "*Tony come forward"){
      forward_car();
      }
      if(voice == "*tony come forward"){
      forward_car();
      }
       if(voice == "*come forward"){
      forward_car();
      }
      if(voice == "*move forward"){
      forward_car();
      }
      if(voice == "*Tony turn around"){
      around_car();
      }
      if(voice == "*tony turn around"){
      around_car();
      }
      if(voice == "*turn around"){
      around_car();
      }
      if(voice == "*Tony hi"){
      hi_car();
      }
      if(voice == "*tony hai"){
      hi_car();
      }
      if(voice == "*hi"){
      hi_car();
      }
      if(voice == "*Tony hai"){
      hi_car();
      }
          else if(voice == "*Tony go back"){
      back_car();
      }
       else if(voice == "*tony go back"){
      back_car();
      }
      else if(voice == "*go back"){
      back_car();
      }
      else if(voice == "*move back"){
      back_car();
      }     
    else if(voice == "*Tony turn right") {
      right_car();
    }
    else if(voice == "*tony turn right") {
      right_car();
    }
      else if(voice == "*turn right") {
      right_car();
    }
    else if(voice == "*Tony turn left") {
      left_car();
    }
     else if(voice == "*tony turn left") {
      left_car();
    }
    else if(voice == "*turn left") {
      left_car();
    }
    else if(voice == "*Tony stop") {
      stop_car();
    }
     else if(voice == "*tony stop") {
      stop_car();
    }
    else if(voice == "*Tony how are you"){
      how_are_you();
    }
    else if(voice == "*tony how are you"){
      how_are_you();
    }
    else if(voice == "*Tony can you dance please"){
      dance();
    }
    else if(voice == "*tony can you dance please"){
      dance();
    }
  voice=""; //Reset the variable after initiating
  }
}

void forward_car()
{
  motor1.run(FORWARD);
  motor1.setSpeed(1000);
  motor2.run(FORWARD);
  motor2.setSpeed(1000);
  delay(5000);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
  
void back_car()
{
  motor1.run(BACKWARD);
  motor1.setSpeed(1000);
  motor2.run(BACKWARD);
  motor2.setSpeed(1000);
  delay(5000);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
  
void right_car()
{
  motor1.run(BACKWARD);
  motor1.setSpeed(1000);
  motor2.run(FORWARD);
  motor2.setSpeed(1000);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
  
void left_car()
{
  motor1.run(FORWARD);
  motor1.setSpeed(1000);
  motor2.run(BACKWARD);
  motor2.setSpeed(1000);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void around_car()
{
 motor1.run(FORWARD);
 motor2.run(BACKWARD);
 delay(1000);
 }

void hi_car()
{
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(200);
}
 
void stop_car ()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
void how_are_you()
{
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
   motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
   motor1.run(FORWARD);
   motor2.run(BACKWARD);
  delay(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
void dance()
{
   motor1.run(FORWARD);
  delay(200);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  delay(200);
  motor2.run(BACKWARD);
  delay(200);
   motor1.run(FORWARD);
  delay(200);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  delay(200);
  motor2.run(BACKWARD);
  delay(200);
  
   motor1.run(FORWARD);
  delay(200);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  delay(200);
  motor2.run(BACKWARD);
  delay(200);
   motor1.run(FORWARD);
  delay(200);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  delay(200);
  motor2.run(BACKWARD);
  delay(200);
   motor1.run(RELEASE);
  motor2.run(RELEASE);
}
