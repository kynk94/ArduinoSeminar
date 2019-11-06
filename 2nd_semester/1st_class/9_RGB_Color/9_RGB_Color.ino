#define Blue 9
#define Green 10
#define Red 11
 
void setup() {
  pinMode(Blue,OUTPUT); 
  pinMode(Green,OUTPUT); 
  pinMode(Red,OUTPUT); 
  
  digitalWrite(Blue,LOW);
  digitalWrite(Green,LOW);
  digitalWrite(Red,LOW);
  
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  for(int i=0; i<=255;i++){
    analogWrite(Blue, i);
    analogWrite(Green, i);
    analogWrite(Red, i);
    delay(10);
  }
}
