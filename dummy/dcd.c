void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(8, INPUT); 
}

void loop()
{
  int inputValue = analogRead(A0);
  int convertedValue = map(inputValue,0,1023,0,255);
  int inputSwitch = digitalRead(8);
  if (inputSwitch == LOW)
  {
  	analogWrite(9, convertedValue);
    analogWrite(10, 0);
  }
  else
  {
  	analogWrite(10, convertedValue);
    analogWrite(9, 0);
  }
}
