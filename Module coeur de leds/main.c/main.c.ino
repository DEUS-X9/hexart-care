#include "coeur.h"
#include "param.h"
#include "coeur.ino"

int b = 500;

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
  chenillepleine(b);
  break;
case 2:
  chenille(b);
  break;
case 3:
  clignotte(b);
  break;
case 4:
  UneLedSurDeux(b);
  break;
case 5:
  UneLedSurTrois(b);
  break;   
}  
}
