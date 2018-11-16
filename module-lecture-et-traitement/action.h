#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

void croissant(int choix); //Afiche les données dans l'ordre croissant du temps ou du pouls
void decroissant(int choix); //Affiche les données dans l'ordre décroissant du temps ou du pouls
//void recherche(int temps);   //Recherche et affiche une donnée demandé par l'utilisiteur
void ordre();       //Affiche les données dans l'ordre du fichier
int moyenne(int borne_inferieure, int borne_superieure);     //Affiche la moyenne des pouls donné dans une plage de données
int lignes();      //Affiche le nombre de lignes dans le tableau des pouls
int maximum();     // Affiche le maximum d'une plage de données
int minimum();     // Affiche le minimum d'une plage de donnée
int recherche (int temps);
#endif // ACTIONS_H_INCLUDED

