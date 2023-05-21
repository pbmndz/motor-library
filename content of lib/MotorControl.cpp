#include "MotorControl.h"

MotorControl::MotorControl(int pin1, int pin2, int pin3, int pin4)
{
  motorPin1 = pin1;
  motorPin2 = pin2;
  motorPin3 = pin3;
  motorPin4 = pin4;
}

void MotorControl::attack(int speed_attack)
{
  Serial.println(speed_attack);
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, speed_attack);
  analogWrite(motorPin3, speed_attack);
  analogWrite(motorPin4, 0);
}

void MotorControl::forward(int speed_half)
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, speed_half);
  analogWrite(motorPin3, speed_half);
  analogWrite(motorPin4, 0);
}

void MotorControl::backward(int speed_half)
{
  analogWrite(motorPin1, speed_half);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, speed_half);
}

void MotorControl::turnLeft(int speed_half)
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, speed_half);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, speed_half);
}

void MotorControl::turnRight(int speed_half)
{
  analogWrite(motorPin1, speed_half);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, speed_half);
  analogWrite(motorPin4, 0);
}

void MotorControl::forward_AG(int speed_full)
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, speed_full);
  analogWrite(motorPin3, speed_full);
  analogWrite(motorPin4, 0);
}

void MotorControl::turnLeft_AG(int speed_full)
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, speed_full);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, speed_full);
}

void MotorControl::turnRight_AG(int speed_full)
{
  analogWrite(motorPin1, speed_full);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, speed_full);
  analogWrite(motorPin4, 0);
}


