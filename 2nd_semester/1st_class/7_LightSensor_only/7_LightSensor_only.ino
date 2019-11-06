#define D_sensor 2
#define A_sensor A0
 
void setup(){
  pinMode(D_sensor,INPUT);
  pinMode(A_sensor,INPUT);
    
  Serial.begin(9600);
  Serial.println("Start");
}

int light_digital=0;
int light_analog=0;

void loop(){
  light_digital = digitalRead(D_sensor);
  light_analog = analogRead(A_sensor);
  Serial.print("Digital : \t");
  Serial.print(light_digital);
  Serial.print("\tAnalog : \t");
  Serial.println(light_analog);
}
