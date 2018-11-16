void pouls(){
int pouls= 0;
int temps =30000;
int t1 = millis();
int t2 = 0;
Serial.begin(9600);

while (t2 -t1 < temps) {
  
int sensorValue = analogRead(A0);
  if (sensorValue > 250){
    pouls = pouls + 1;
  }
  t2 = millis();
  delay(170);
}
  Serial.print(temps);
  Serial.print(";");
  Serial.println(pouls);
}
