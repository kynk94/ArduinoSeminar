#define Blue 9
#define Green 10
#define Red 11

void setup(){
  pinMode(Blue,OUTPUT); 
  pinMode(Green,OUTPUT);
  pinMode(Red,OUTPUT);
  digitalWrite(Blue,LOW);
  digitalWrite(Green,LOW);
  digitalWrite(Red,LOW);
  Serial.begin(9600);
  Serial.println("Start");
}

void loop(){
  digitalWrite(Blue,HIGH);
  delay(3000);
  digitalWrite(Blue,LOW);
  digitalWrite(Green,HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  digitalWrite(Red,HIGH);
  delay(3000);
  digitalWrite(Red,LOW);
}
