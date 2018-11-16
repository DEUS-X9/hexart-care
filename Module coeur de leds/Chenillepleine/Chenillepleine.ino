
int b = 100;

void setup() //fonction d'initialisation de la carte
{
for (int n =4; n <=13; n++)
{
  pinMode(n, OUTPUT);
}

}
void loop() //fonction principale, elle se répète (s’exécute) à l'infini
{
//contenu du programme
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
