#define trig 12
#define echo 13

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
}

void loop() {
  // 초음파 발생
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // echo에서 HIGH를 유지하며 초음파 수신.
  unsigned long duration = pulseIn(echo, HIGH); 
  digitalWrite(echo, LOW);
  // HIGH 동안의 시간(초음파가 되돌아온 시간)을 이용하여 거리를 계산한다.
  float distance = (float) 340 * duration / 20000;  
  
  Serial.print(distance);
  Serial.println("cm");
  delay(20);
}
