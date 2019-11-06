void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    long c = Serial.parseInt();
    long d = Serial.parseInt();
    Serial.println(c*d);
  }
}
