#include <Arduino.h>

#include <Servo.h>

Servo servo1;
int servoPin = 9;

void setup(){
  servo1.attach(servoPin);
}

void loop(){
  servo1.write(0);
  delay(5000);
  servo1.write(90);
  delay(5000);
  servo1.write(180);
  delay(5000);
}