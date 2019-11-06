#define Blue 9
#define Green 10
#define Red 11
#define D_sensor 2
#define A_sensor A0
 
void setup() {
  pinMode(Blue,OUTPUT); 
  pinMode(Green,OUTPUT); 
  pinMode(Red,OUTPUT); 
  pinMode(D_sensor,INPUT);
  pinMode(A_sensor,INPUT);
  
  digitalWrite(Blue,LOW);
  digitalWrite(Green,LOW);
  digitalWrite(Red,LOW);
  
  Serial.begin(9600);
  Serial.println("Start");
}

int light_digital=0;
int light_analog=0;

void loop() {
  light_digital = digitalRead(D_sensor);
  light_analog = analogRead(A_sensor);
  Serial.print("Digital : \t");
  Serial.print(light_digital);
  Serial.print("\tAnalog : \t");
  Serial.println(light_analog);

  LED_Digital(Blue);
  LED_Digital(Green);
  LED_Digital(Red);
  /*LED_Analog(Blue);
  LED_Analog(Green);
  LED_Analog(Red);*/
}

void LED_Digital(int LED){
  digitalWrite(LED,light_digital);
}

void LED_Analog(int LED){  
  analogWrite(LED,map(light_analog,0,1023,0,255));
}
