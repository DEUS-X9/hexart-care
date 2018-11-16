#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct{
    int pulsations;
    int temps;
}information_pouls; // Structure permettant de stocker chaque ligne d'information (le pouls et le temps)
void lirefichier(); // Lit le fichier et stocke les différents pouls dans un tableau
//int ajouter_pouls( information_pouls *pls); // Ajoute une pulsation au tableau des pouls
information_pouls *tab_pouls; // Fonction qui retourne le tableau des pouls
int tab_pouls_size(); // Affiche la taille du tableau des pouls
information_pouls *Pouls; // Tableau contenant la liste des pouls
//Taille du tableau
#endif // DONNEES_H_INCLUDED

