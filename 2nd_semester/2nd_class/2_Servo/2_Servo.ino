#include <Servo.h>
#define servopin 9

Servo servomotor;

void setup() {
  servomotor.attach(servopin);
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  servomotor.write(0);
  delay(1000);
  servomotor.write(90);
  delay(1000);
  servomotor.write(180);
  delay(1000);
}
