int d=5,c=4,b=3,a=2;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}

void loop()
{
  // My Roll No: 102203167
  // Last digit: '7' = 0111
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  
}