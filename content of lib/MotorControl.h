#ifndef MotorControl_h
#define MotorControl_h

#include "Arduino.h"

class MotorControl {
public:
  MotorControl(int pin1, int pin2, int pin3, int pin4);
  void attack(int 	);
  void forward(int speed_half);
  void backward(int speed_half);
  void turnLeft(int speed_half);
  void turnRight(int speed_half);
  void forward_AG(int speed_full);
  void turnLeft_AG(int speed_full);
  void turnRight_AG(int speed_full);
private:
  int motorPin1;
  int motorPin2;
  int motorPin3;
  int motorPin4;
};

#endif
