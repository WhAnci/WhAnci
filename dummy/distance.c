void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(9,OUTPUT);
  digitalWrite(9,0);
  delayMicroseconds(2);
  digitalWrite(9,1);
  delayMicroseconds(5);
  digitalWrite(9,0);
  delayMicroseconds(2);
  
  pinMode(9,INPUT);
  double duration = pulseIn(9,HIGH);
  double cm = duration * 340 / 10000 / 2;
    
  Serial.println(cm);
}
