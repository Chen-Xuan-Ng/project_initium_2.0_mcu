#include <Arduino.h>
#include <Servo.h>

#define Servo_PIN 0

Servo myServo;

void setup() {
  myServo.attach(Servo_PIN);
  myServo.write(70);
  // myServo.write(170);
}

void loop() {
  
}
