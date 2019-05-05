#define LED 9
#define D_sensor 2
#define A_sensor A0
 
void setup() {
  pinMode(LED,OUTPUT); 
  pinMode(D_sensor,INPUT);
  pinMode(A_sensor,INPUT);
  
  digitalWrite(LED,LOW);
  
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

  //LED_Digital();
  //LED_Analog();
}

void LED_Digital(){
  digitalWrite(LED,light_digital);
}

void LED_Analog(){  
  analogWrite(LED,map(light_analog,0,1023,0,255));
}
