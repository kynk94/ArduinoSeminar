void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    char c = Serial.read();
    if(c=='a'){
      Serial.println("You typed a");
    }
    else{
      Serial.println("You didn't type a");    
    }
  }
}

