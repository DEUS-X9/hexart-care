#include "coeur.h"

void pulse(){
int pouls= 0;
int temps =30000;
int t1 = millis();
int t2 = 0;


while (t2 -t1 < temps) {
  
int sensorValue = analogRead(A0);
  if (sensorValue > 250){
    pouls = pouls + 1;
    menu();
  }
  t2 = millis();
  delay(200);
}
  Serial.print(t1);
  Serial.print(";");
  Serial.println(pouls);
}
