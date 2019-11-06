#define Green 9
#define Yellow 10
#define Red 11

void setup(){
  pinMode(Green,OUTPUT); 
  pinMode(Yellow,OUTPUT);
  pinMode(Red,OUTPUT);
  digitalWrite(Green,LOW);
  digitalWrite(Yellow,LOW);
  digitalWrite(Red,LOW);
  Serial.begin(9600);
  Serial.println("Start");
}

void loop(){
  digitalWrite(Green,HIGH);
  delay(3000);
  digitalWrite(Green,LOW);
  digitalWrite(Yellow,HIGH);
  delay(1000);
  digitalWrite(Yellow,LOW);
  digitalWrite(Red,HIGH);
  delay(3000);
  digitalWrite(Red,LOW);
}
