
void chenillepleine(int b)
{
for (int n =4; n <=13; n = n+1)
{
  digitalWrite(n, HIGH);
  delay(b);
  if (n == 13)
    for (int n =4; n <=13; n++)
    {
      digitalWrite(n, LOW);
    
    } 
  delay(b);   
}

}
void chenille(int b) 
{
for (int n =4; n <=13; n = n+1)
{
  
  digitalWrite(n, HIGH);
  digitalWrite(n-1, LOW);
  delay(b);
  if (n == 4)
    digitalWrite(13, LOW);
}

}
void clignotte(int b)
{
for (int n =4; n <=13; n++)
{
  digitalWrite(n, HIGH);
}
delay(b);
for (int n =4; n <=13; n++)
{
  digitalWrite(n, LOW);
}
delay(b);

}
void UneLedSurDeux(int b)
{
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
}
delay(b);
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
}
delay(b);

}
void UneLedSurTrois(int b)
{
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, LOW);
}
delay(b);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
  digitalWrite(n+2, LOW);
}
delay(b);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, HIGH);
}
delay(b);

}
