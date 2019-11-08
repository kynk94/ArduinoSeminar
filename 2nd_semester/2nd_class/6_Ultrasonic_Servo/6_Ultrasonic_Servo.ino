#include <Servo.h>
#define servopin 11
#define trig 12
#define echo 13

float distance = 0;
Servo servomotor;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  
  servomotor.attach(servopin);
  Serial.println("Start");
}

void loop() {
  for(int i=0;i<=180;i++){
    servomotor.write(i);
    distance = ultrasonic();
    Serial.print(i);
    Serial.print("\t");
    Serial.println(distance);
    delay(10);
  }
  for(int i=180;i>=0;i--){
    servomotor.write(i);
    distance = ultrasonic();
    Serial.print(i);
    Serial.print("\t");
    Serial.println(distance);
    delay(10);
  }
}

float ultrasonic(){
  // 초음파 발생
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // echoPin 이 HIGH를 유지하며 초음파를 수신한다.
  unsigned long duration = pulseIn(echo, HIGH);
  digitalWrite(echo, LOW);
  // HIGH 동안의 시간(초음파가 되돌아온 시간)을 이용하여 거리를 계산한다.
  float distance = (float) 340 * duration / 20000;
    
  delay(20);
  return distance;
}
