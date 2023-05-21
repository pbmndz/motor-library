#include "MotorControl.h"
//sample
// Motor A
const int motorPin1 = 8;
const int motorPin2 = 9;
// Motor B
const int motorPin3 = 10;
const int motorPin4 = 11;

MotorControl motor(motorPin1, motorPin2, motorPin3, motorPin4);

void setup() {
  // Setup code
  Serial.begin(9600);
}

void loop() {
  // Call motor control functions based on your logic
  int speed_attack = 244;  
  motor.attack(speed_attack);
  delay(1000);

}
