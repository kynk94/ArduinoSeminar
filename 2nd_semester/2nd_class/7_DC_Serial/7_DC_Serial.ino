#define dc 9

void setup()
{
  pinMode(dc,OUTPUT);
  analogWrite(dc,255);

  Serial.begin(9600);
  Serial.println("Start");
}

int dc_speed = 0;

void loop()
{
  if(Serial.available())
  {
    dc_speed = Serial.parseInt();
    Serial.println(dc_speed);
  }
  analogWrite(dc,dc_speed);
}
