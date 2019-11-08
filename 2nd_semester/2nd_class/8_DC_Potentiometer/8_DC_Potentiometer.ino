#define dc 9
#define potentio A0

void setup()
{
  pinMode(dc,OUTPUT);
  pinMode(potentio, INPUT);
  analogWrite(dc,0);

  Serial.begin(9600);
  Serial.println("Start");
}

int dc_speed = 0;

void loop()
{
  dc_speed = map(analogRead(potentio),0,1023,0,255);
  Serial.print("Potentiometer : \t");
  Serial.print(analogRead(potentio));
  Serial.print("\tSpeed : \t");
  Serial.println(dc_speed);
  analogWrite(dc,dc_speed);
}
