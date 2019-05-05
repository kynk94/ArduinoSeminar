#include <Servo.h>
#define servopin 9
#define potentio A0

Servo servomotor;

void setup() {
  servomotor.attach(servopin);
  pinMode(potentio,INPUT);
  
  Serial.begin(9600);
  Serial.println("Start");
}

int degree = 0;

void loop() {
  degree = map(analogRead(potentio),0,1023,0,180);
  Serial.print("Potentiometer : \t");
  Serial.print(analogRead(potentio));
  Serial.print("\tDegree : \t");
  Serial.println(degree);
  servomotor.write(degree);
}
