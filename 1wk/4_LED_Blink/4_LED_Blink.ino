#define LED 9

void setup(){
  pinMode(LED,OUTPUT); 
  Serial.begin(9600);
  Serial.println("Start");
}

void loop(){
  digitalWrite(LED,HIGH);
  Serial.println("LED ON");
  delay(2000);
  digitalWrite(LED,LOW);
  Serial.println("LED OFF");
  delay(2000);
}
