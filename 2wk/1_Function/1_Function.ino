void setup()
{
  Serial.begin(9600);
  Serial.println("Start");
}

int a = 0;
int b = 0;

void loop()
{
  if(Serial.available())
  {
    a = Serial.parseInt();
    b = Serial.parseInt();
    int c = Sum(a,b);
    Serial.println(c);    
  }
}

int Sum(int x1, int x2)
{
  return x1+x2;
}
