#include "coeur.h"
//on appele

void pulse()//Cette fonction permet d'obtenir le nombre de battements toutes les 30sec 
{
int pouls= 0;
int temps =5000;//Temps choisi par intervalle en milliseconde
int t1 = millis();
int t2 = 0;


while (t2 -t1 < temps) {
  
int sensorValue = analogRead(A0);//lecture des données des capteurs
  if (sensorValue > 250)//écarte toutes les fréquences parasites du calcul et de l'affichage
  {
    pouls = pouls + 1; //Augmente le nombre de pouls a chaque battement capté
    menu();//Appel de la fonction menu pour afficher le pouls sur le coeur de LED
  }
  t2 = millis();
  delay(200);
}
  Serial.print(millis());
  Serial.print(";");
  Serial.println(pouls*12);//Affiche dans le montieur le nombre de battements en 30 sec ainsi que le temps depuis le début du programme
}
