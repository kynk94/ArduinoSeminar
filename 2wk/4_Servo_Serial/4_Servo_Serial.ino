#include <Servo.h>
#define servopin 9

Servo servomotor;

void setup() {
  servomotor.attach(servopin);
  Serial.begin(9600);
  Serial.println("Start");
}

int angle=0;

void loop() {
  if(Serial.available()){
    angle = Serial.parseInt();
  }
  servomotor.write(angle);
}
