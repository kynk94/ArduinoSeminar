#define Blue 9
#define Green 10
#define Red 11
int R = 0, G = 0, B = 0;

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
  if(Serial.available()>0){
    R = Serial.parseInt();
    G = Serial.parseInt();
    B = Serial.parseInt();
    Serial.println((String)"R:"+R+"\tG:"+G+"\tB:"+B);
    
    analogWrite(Blue, B);
    analogWrite(Green, G);
    analogWrite(Red, R);
    delay(10);
  }
}
