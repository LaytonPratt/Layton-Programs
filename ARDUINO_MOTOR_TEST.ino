//ARDUINO MOTOR TEST
//created by Layton pratt on 2/29/2020

#include <AFMotor.h>
#include <Servo.h>


// DC motor on M2
AF_DCMotor motor1(1); //set up servos, motors, and sensors
AF_DCMotor motor2(2);
// DC hobby servo

Servo servo1;
Servo servo2;


void drive_forward(int a); //functions start here
void drive_back(int b);
void left_turn(int c);
void right_turn(int d);

void setup() {    // start set up program
  servo1.attach(10);
  //servo2.attach(9);
  
  Serial.begin(9600);           // set up Serial library at 9600 bps
 // turn on motor #1 and 2
  motor1.setSpeed(255);
  motor1.run(RELEASE);
  motor2.setSpeed(255);
  motor2.run(RELEASE);


  //drive_forward(1000);
  //drive_back(1000);
  //left_turn(800); //90 degree turn
  //right_turn(800); //90 degree turn
  //right_turn(2900); //360 degree turn


 servo1.write (180);
 delay(1000);
 
 //servo2.write (180);
 //delay(1000);
 
 servo1.write (1);
 delay(1000);


}

void loop()
{

}

void drive_forward(int a)
{
  motor1.run(FORWARD);//drive forward with both motors
  motor2.run(FORWARD);
  delay(a);

  motor1.run(RELEASE);//stop both motors
  motor2.run(RELEASE);
  delay(1000);
}

void drive_back(int b)
{
  motor1.run(BACKWARD);//drive forward with both motors
  motor2.run(BACKWARD);
  delay(b);

  motor1.run(RELEASE);//stop both motors
  motor2.run(RELEASE);
  delay(300);
}

void left_turn(int c)
{
  motor1.run(BACKWARD);//drive forward with both motors
  motor2.run(FORWARD);
  delay(c);

  motor1.run(RELEASE);//stop both motors
  motor2.run(RELEASE);
  delay(300);
}

void right_turn(int d)
{

  motor1.run(FORWARD);//drive forward with both motors
  motor2.run(BACKWARD);
  delay(d);

  motor1.run(RELEASE);//stop both motors
  motor2.run(RELEASE);
  delay(300);
}
