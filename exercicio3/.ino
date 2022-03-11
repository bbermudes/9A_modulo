void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
 
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(300); 
  digitalWrite(1, LOW);
  delay(300); 
  digitalWrite(2, HIGH);
  delay(600); 
  digitalWrite(2, LOW);
  delay(600); 
}
