void setup()
{
  pinMode(2, OUTPUT);// the output signal form arduino
}

void loop()
{
  digitalWrite(2, HIGH); //the the motor will move counter clockwise
  delay(2000); 
  digitalWrite(2, LOW);
  delay(2000); //the the motor will move clockwise
}