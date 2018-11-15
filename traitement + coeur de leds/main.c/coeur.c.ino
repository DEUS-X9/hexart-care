#include "coeur.h"
#include "param.h"

void menu()
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
  delay(30);
  if (n == 13)
    for (int n =4; n <=13; n++)
    {
      digitalWrite(n, LOW);
    
    } 
  delay(30);   
}

}
void chenille() 
{
for (int n =4; n <=13; n = n+1)
{
    if (n == 4){
    digitalWrite(13, LOW);}
  digitalWrite(n, HIGH);
  digitalWrite(n-1, LOW);
  delay(30);

}

}
void clignotte()
{
for (int n =4; n <=13; n++)
{
  digitalWrite(n, HIGH);
}
delay(150);
for (int n =4; n <=13; n++)
{
  digitalWrite(n, LOW);
}
delay(250);

}
void UneLedSurDeux()
{
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
}
delay(150);
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
}
delay(250);

}
void UneLedSurTrois()
{
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, LOW);
}
delay(120);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
  digitalWrite(n+2, LOW);
}
delay(120);
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, LOW);
  digitalWrite(n+2, HIGH);
}
delay(120);

}
void UneLED(int nb)
{
digitalWrite(nb+3, HIGH);
delay(150);
digitalWrite(nb+3, LOW);
delay(250);

}
