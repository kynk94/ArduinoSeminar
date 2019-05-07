#define led 9

void setup()
{
  pinMode(led,OUTPUT);
  analogWrite(led,255);

  Serial.begin(9600);
  Serial.println("Start");
}

int pwm = 0;

void loop()
{
  if(Serial.available())
  {
    pwm = Serial.parseInt();
    Serial.println(pwm);
  }
  analogWrite(led,pwm);
}
