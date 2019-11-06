#define LED 9

void setup() {
  pinMode(LED,OUTPUT); 
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  // 점점 밝아진다.
  for(int i=0; i<=255; i++){
    analogWrite(LED,i);
    Serial.print("LED : \t");
    Serial.println(i);
    delay(10);
  }
  // 점점 어두워진다.
  for(int i=255; i>=0; i--){
    analogWrite(LED,i);
    Serial.print("LED : \t");
    Serial.println(i);
    delay(10);
  }
}
