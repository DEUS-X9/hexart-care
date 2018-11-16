//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;                              //importation de la bibliothèque processing.serial
import java.lang.System;
//declare
PrintWriter output;                                      //initialisation du port serie
Serial udSerial;                                         //initialisation pour ecrire dans un fichier externe 

void setup() {
   udSerial = new Serial(this, Serial.list()[0], 115200);     //recherche du port connecté a la Arduino
   output = createWriter("Battements.csv");                //creation du fichiers "battements.csv"
   output.flush(); 
}

 void draw() {
   if (udSerial.available() > 0) {                          //si la carte arduino envoie des données
     String SenVal = udSerial.readString();                 //le port série lit les données
     delay(500);                                            //delai de 200 millisecondes
       if (SenVal != null) {                                  // si la Arduino envoi des valeurs
         println("Enregistrement");
          //ecriture des données dans le fichiers "Battements.csv"
          output.print(SenVal);
         output.flush();
         delay(200);                                          //delai de 200 millisecondes
        }
    }
 }
 
 void keyPressed(){
 
   switch(key)
   {
     case 'e':                                             //definition de la touche 'e'
     output.close();                                       //fermeture du programme
     exit();
     break;
   }
 }
