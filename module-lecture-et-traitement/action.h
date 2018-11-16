#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

void croissant(int choix); //Afiche les donn�es dans l'ordre croissant du temps ou du pouls
void decroissant(int choix); //Affiche les donn�es dans l'ordre d�croissant du temps ou du pouls
//void recherche(int temps);   //Recherche et affiche une donn�e demand� par l'utilisiteur
void ordre();       //Affiche les donn�es dans l'ordre du fichier
int moyenne(int borne_inferieure, int borne_superieure);     //Affiche la moyenne des pouls donn� dans une plage de donn�es
int lignes();      //Affiche le nombre de lignes dans le tableau des pouls
int maximum();     // Affiche le maximum d'une plage de donn�es
int minimum();     // Affiche le minimum d'une plage de donn�e
int recherche (int temps);
#endif // ACTIONS_H_INCLUDED

