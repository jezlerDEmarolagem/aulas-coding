void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000); // meio segundo
  digitalWrite(3, LOW);
  delay(1000); // meio segundo
}
