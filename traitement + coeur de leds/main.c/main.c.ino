#include "cardio.h"
//On appelle à travers cardio.h le fichier cardio.c.ino qui contient le capteur ainsi que le calcul de pouls



void setup()
{ 
Serial.begin(115200);
for (int n =4; n <=13; n++)
{
  pinMode(n, OUTPUT);//Inititialisation de tous les ports de l'arduino (qui correspond dans notre montage à la totalité des LEDS du coeur)
}

}

void loop()
{
pulse();//Execution de la fonction principale du cardio.c.ino
}
