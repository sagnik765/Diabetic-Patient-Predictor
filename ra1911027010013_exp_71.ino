void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  
  digitalWrite(13, HIGH);
  pinMode(7, INPUT);
}

void loop()
{
  if(digitalRead(7)==1){
    digitalWrite(11,HIGH);
    digitalWrite(9,LOW);
  }
  else{
    digitalWrite(11,LOW);
    digitalWrite(9,HIGH);
  }
}