
#include <AFMotor.h> //Adafruit Motor Shield Library. First you must download and install AFMotor library
#include <Servo.h>   //Servo library. This is standard library. (Sketch -> Include Library -> Servo)
String voice;

AF_DCMotor motor1 (1, MOTOR12_1KHZ); //create motor #1 using M1 output on Motor Drive Shield, set to 1kHz PWM frequency
AF_DCMotor motor2 (2, MOTOR12_1KHZ); //create motor #2 using M2 output on Motor Drive Shield, set to 1kHz PWM frequency
AF_DCMotor motor3 (3, MOTOR34_1KHZ);
AF_DCMotor motor4 (4, MOTOR34_1KHZ);
Servo myservo; //define servo name

void setup()
{
  Serial.begin(9600); //start serial communication
 
  myservo.attach(10); //define our servo pin (the motor shield servo1 input = digital pin 10)
  myservo.write(90);  //servo position is 90 degrees
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
      if(voice == "*Jarvis come forward"){
      forward_car();
      }
      if(voice == "*jarvis come forward"){
      forward_car();
      }
       if(voice == "*come forward"){
      forward_car();
      }
      if(voice == "*move forward"){
      forward_car();
      }
    
      
    
     if(voice == "*Jarvis turn around"){
      around_car();
      }
      if(voice == "*jarvis turn around"){
      around_car();
      }
      if(voice == "*turn around"){
      around_car();
      }
       if(voice == "*jarvis what is your name"){
      name_car();
      }
      if(voice == "*Jarvis what is your name"){
      name_car();
      }
      if(voice == "*what is your name"){
      name_car();
      }
       if(voice == "*Jarvis se hai"){
      sayhi_car();
      }
      if(voice == "*jarvis se hai"){
      sayhi_car();
      }
      if(voice == "*say hi"){
      sayhi_car();
      }
     
      if(voice == "*Jarvis hi"){
      hi_car();
      }
      if(voice == "*jarvis hai"){
      hi_car();
      }
      if(voice == "*hi"){
      hi_car();
      }
      if(voice == "*jarvis hai"){
      hi_car();
      }
       if(voice == "*Jarvis walk forward"){
      walk_car();
      }
       if(voice == "*jarvis walk forward"){
      walk_car();
      }
       if(voice == "*walk forward"){
      walk_car();
      }
          else if(voice == "*Jarvis go back"){
      back_car();
      }
       else if(voice == "*jarvis go back"){
      back_car();
      }
      else if(voice == "*go back"){
      back_car();
      }
      else if(voice == "*move back"){
      back_car();
      }     
       else if(voice == "*Jarvis look right"){
      look_right();
      }     
      else if(voice == "*jarvis look right"){
      look_right();
      }  
      else if(voice == "*Jarvis look left"){
      look_left();
      }  
       else if(voice == "*jarvis look left"){
      look_left();
      }  
       else if(voice == "*look left"){
      look_left();
      }  
        else if(voice == "*look right"){
      look_right();
      }   
    else if(voice == "*Jarvis turn right") {
      right_car();
    }
    else if(voice == "*jarvis turn right") {
      right_car();
    }
      else if(voice == "*turn right") {
      right_car();
    }
    else if(voice == "*Jarvis rotate your hand") {
      hand_car();
    }
    else if(voice == "*jarvis rotate your hand") {
      hand_car();
    }
    else if(voice == "*rotate your hand") {
      hand_car();
    }  
     else if(voice == "*Jarvis can you eat") {
      eat_car();
    }
     else if(voice == "*jarvis can you eat") {
      eat_car();
    }
     else if(voice == "*can you eat") {
      eat_car();
    }
    else if(voice == "*Jarvis who made you"){
      made_car();
    }
    else if(voice == "*jarvis who made you"){
      made_car();
    }
    else if(voice == "*who made you"){
      made_car();
    }
    else if(voice == "*Jarvis turn left") {
      left_car();
    }
     else if(voice == "*jarvis turn left") {
      left_car();
    }
    else if(voice == "*turn left") {
      left_car();
    }
    else if(voice == "*jarvis stop") {
      stop_car();
    }
     else if(voice == "*jarvis stop") {
      stop_car();
    }
    else if(voice == "*jarvis how are you"){
      how_are_you();
    }
    else if(voice == "*Jarvis how are you"){
      how_are_you();
    }
    else if(voice == "*how are you"){
      how_are_you();
    }    
    else if(voice == "*Jarvis can you dance please"){
      dance();
    }
    else if(voice == "*jarvis can you dance please"){
      dance();
    }
  voice=""; //Reset the variable after initiating
  }
}

void forward_car()
{
  motor1.run(FORWARD);
  motor1.setSpeed(700);
  motor2.run(FORWARD);
  motor2.setSpeed(700);
  delay(5000);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
  
void back_car()
{
  motor1.run(BACKWARD);
  motor1.setSpeed(700);
  motor2.run(BACKWARD);
  motor2.setSpeed(700);
  delay(5000);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
  
void right_car()
{
  motor1.run(BACKWARD);
  motor1.setSpeed(700);
  motor2.run(FORWARD);
  motor2.setSpeed(700);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}


void left_car()
{
  motor1.run(FORWARD);
  motor1.setSpeed(700);
  motor2.run(BACKWARD);
  motor2.setSpeed(700);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void look_right()
{
  myservo.write(150);
}

void look_left()
{
  myservo.write(90);
}

void hand_car()
{
  motor4.run(FORWARD);
}

void eat_car()
{
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(300);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}
void around_car()
{
 motor1.run(FORWARD);
 motor2.run(BACKWARD);
 delay(1000);
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 }

void sayhi_car()
{
  motor4.run(FORWARD);
  motor4.setSpeed(700);
  delay(500);
  motor4.run(RELEASE);
  motor3.run(RELEASE);
}

void walk_car()
{
motor1.run(FORWARD);
motor2.run(FORWARD);
delay(3000);
motor3.run(FORWARD);
motor3.setSpeed(500);
motor4.run(FORWARD);
motor4.setSpeed(500);
delay(500);
motor3.run(FORWARD);
motor4.run(FORWARD);
delay(500);
motor3.run(FORWARD);
motor4.run(FORWARD);
delay(500);
motor3.run(FORWARD);
motor4.run(FORWARD);
delay(500);
motor3.run(FORWARD);
motor4.run(FORWARD);
delay(500);
motor1.run(RELEASE);
motor2.run(RELEASE);
motor3.run(RELEASE);
motor4.run(RELEASE);
}


void name_car()
{
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(100);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void made_car()
{
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(100);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(200);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(200);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void hi_car()
{
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
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
  delay(500);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(500);
   motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(500);
   motor1.run(FORWARD);
   motor2.run(BACKWARD);
  delay(500);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
void dance()
{
   motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
   motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
  
   motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
   motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
  motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
   motor1.run(FORWARD);
  delay(500);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
   motor1.run(RELEASE);
  motor2.run(RELEASE);
}
