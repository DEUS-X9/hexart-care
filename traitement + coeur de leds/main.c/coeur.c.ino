#include "coeur.h"
#include "param.h"

void menu()
{
//Ce switch permet de mettre en place un menu qui contient toutes les fonction des différents types d'affichages du coeur de LED.
//Le menu appelle donc une seule fonction qui correspond au choix de l'utilisateur.
//Le choix de l'affichage du coeur de LED est définit par le param.h
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

void chenillepleine()//Cette fonction permet d'afficher une a une les LEDS à la suite dans l'ordre des aiguilles d'une montre afinn d'obtenir a la fin un coeur plein allumé dans sa totalité
{
for (int n =4; n <=13; n = n+1)
{
  digitalWrite(n, HIGH);
  delay(30);
  if (n == 13)
    for (int n =4; n <=13; n++)//cette deuxième boucle for permet d'éteindre la totalité du coeur lorsque toutes les LEDS sont allumée
    {
      digitalWrite(n, LOW);
    
    } 
  delay(30);   
}

}
void chenille()//Cette fonction permet d'afficher une a une les LEDS à la suite dans l'ordre des aiguilles d'une montre tout en ayant une seule LED allulée à la fois 
{
for (int n =4; n <=13; n = n+1)
{
    if (n == 4){//Ce if permet d'éteindre la dernière LED lorqu'on allume la première et qu'on recommence le cercle car elle ne correspond pas au n-1
    digitalWrite(13, LOW);}
  digitalWrite(n, HIGH);
  digitalWrite(n-1, LOW);//Lorsque qu'on allume une LED, on éteint en même temps la précédente
  delay(30);//Le delay est contenu dans la boucle for car le temps d'attente est utilisé entre l'affichage de chacune des LEDS

}

}
void clignotte()//Cet fonction permet tout simplement d'allumer la totalité des leds du coeur 
//L'affichage de cette fonction consiste donc à faire clignotter le coeur
{
//C'est la fonction la plus simple, je vais donc plus détailler le commentaire sur certains aspects, pour éviter de les expliquer dans chaque fonction de ce fichier
for (int n =4; n <=13; n++) //La boucle for permet d'écrire 1 fois la ligne (au lieu de 10) qui nous permet de réaliser une action sur les LEDS
{
  digitalWrite(n, HIGH);//La fonction digitalWrite permet de gérer l'affichage d'une LED en indiquant son port ainsi que si elle doit être allumée ou éteinte (HIGH ou LOW)
  //Le port correspond donc aux valeurs 4,5,6,7,8,9,10,11,12,13, mais en utilisant le for, elle sont rassemblées dans la variable n
}
delay(150);//Le delay correspond au temps de réalisation de la fonction, on choisis donc ici le temps que les LEDS restent allumée et en dessous le temps lorsuq'elles sont éteintes.
for (int n =4; n <=13; n++)
{
  digitalWrite(n, LOW);//On réalise donc deux fois cet fonction d'affichage, une fois pour allumer les LEDS et une autre fois pour les éteindre.
}
delay(250);

}
void UneLedSurDeux()//Cette fonction permet d'afficher sur le coeur la moitié des leds (Sous la forme d'une led sur deux).
// Cet affichage change à un intervalle régulier
{
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);//L'utilisation d'un n et d'un n+1 permet de définir que lorsqu'une led est allumée, alors la suivante sera forcément éteinte
}
delay(150);
for (int n =4; n <=13; n = n+2)
{
  digitalWrite(n, LOW);
  digitalWrite(n+1, HIGH);
}
delay(250);
//On réalise cet affichage 2 fois d'affilé en changeant les LEDS pour le rendre plus visuel
}
void UneLedSurTrois()//Cette fonction permet d'afficher sur le coeur 3 leds qui changent à un intervalle régulier
{
for (int n =4; n <=13; n = n+3)
{
  digitalWrite(n, HIGH);
  digitalWrite(n+1, LOW);//En utilisant n, n+1 et n+2, on peut gérer l'affichage de chacune des Leds et donc d'en allumer qu'une sur trois
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
//On réalise cet affichage 3 fois d'affilé en changeant les LEDS pour le rendre plus visuel
}
void UneLED(int nb)//La fonciton UneLED est la seule qui contient une variable car il faut choisir l'unique LED du coeur qui doit s'allumer
{
digitalWrite(nb+3, HIGH);//on augmente la valeur de nb car l'utilisateur choisis les entre LED 1 à 10 mais elles sont en réalité branchées sur les ports 4 à 13 de la carte Arduino Uno
delay(150);
digitalWrite(nb+3, LOW);
delay(250);

}
