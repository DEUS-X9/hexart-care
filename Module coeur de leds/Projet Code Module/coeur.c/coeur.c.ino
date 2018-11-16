#include "coeur.h"
#include "param.h"



void setup()
{
for (int n =4; n <=13; n++)
{
  pinMode(n, OUTPUT);
}

}

void loop()
{
switch(choix)
{
case 1:
  chenillepleine();
  break;
case 2:
  chenille();
  break;
case 3:
  clignotte();
  break;
case 4:
  UneLedSurDeux();
  break;
case 5:
  UneLedSurTrois();
  break;
case 6:
  UneLED(nb);
  break; 
}  
}

void chenillepleine()
{
for (int n =4; n <=13; n = n+1)
{
  digitalWrite(n, HIGH);
  delay(500);
  if (n == 13)
    for (int n =4; n <=13; n++)
    {
      digitalWrite(n, LOW);
    
    } 
  delay(500);   
}

}
void chenille() 
{
for (int n =4; n <=13; n = n+1)
{
    if (n == 4)
    {digitalWrite(13, LOW);}
  digitalWrite(n, HIGH);
  digitalWrite(n-1, LOW);
  delay(500);

}

}
void clignotte()
{
for (int n =4; n <=13; n++)
{
  digitalWrite(n, HIGH);
}
delay(500);
for (int n =4; n <=13; n++)
{
  digitalWrite(n, LOW);
}
delay(500);

}
void UneLedSurDeux()
{
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
}
delay(500);
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
}
delay(500);

}
void UneLedSurTrois()
{
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, LOW);
}
delay(500);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
  digitalWrite(n+2, LOW);
}
delay(500);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, HIGH);
}
delay(500);

}
void UneLED(int nb)
{
digitalWrite(nb, HIGH);
delay(500);
digitalWrite(nb, LOW);
delay(500);

}
