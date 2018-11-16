#include <stdio.h>
#include <stdlib.h>


#include "donnees.h"
#define TRUE 1
#define FALSE 0


void ordre(){
    int i=0;
    for (i=0; i < tab_pouls_size(); i++){
        printf("%d ms -> %d\n",tab_pouls[i].temps, tab_pouls[i].pulsations);
    }
}
int recherche(int temps){ // Recherche puis affiche un pouls en fonction d'un temps particulier
    int i = 0;
    for(; i<tab_pouls_size(); i++){
        if(temps == tab_pouls[i].temps) // Recherche le temps correspondant à celui demandé et affiche le pouls associé
            printf("%d",tab_pouls[i].pulsations);
    }
    printf("%d ms = %d",tab_pouls[i].temps, tab_pouls[i].pulsations);
}

void croissant(int choix){
    if (choix==0){ // Affiche les données dans l'ordre croissant en fonction du temps
        ordre();
    }
    else { // Affiche les valeurs des pouls dans l'ordre croissant en faisaint un tri à bulle
        int i =0;
        information_pouls *temp;
        int verif=1;
        while(verif){
            verif=FALSE;
            for (i=0;i<tab_pouls_size();i++){
                if(tab_pouls[i].pulsations > tab_pouls[i+1].pulsations){
                    temp=&tab_pouls[i+1];
                    tab_pouls[i+1]=tab_pouls[i];
                    tab_pouls[i]=*temp;
                    verif=TRUE;
                }
                printf("%d\n", tab_pouls[i].pulsations);
            }
        }
    }
}



void decroissant(int choix){ //Affiche les valeurs des pouls dans l'ordre decroissant
    if (choix == 0){
        int i = tab_pouls_size() -1;
        for (i=0;i>-1;i--){
            printf("%d ms -> %d\n", tab_pouls[i].temps, tab_pouls[i].pulsations);
        }
    }
    else { //  Affiche les valeurs des pouls en faisaint un tri à bulle "inverse"
        int i =0;
        information_pouls *temp;
        int verif=1;
        while(verif){
            verif=FALSE;
            for (i=0;i<tab_pouls_size();i++){
                if(tab_pouls[i].pulsations < tab_pouls[i+1].pulsations){
                    temp=&tab_pouls[i+1];
                    tab_pouls[i+1]=tab_pouls[i];
                    tab_pouls[i]=*temp;
                    verif=TRUE;
                }
                printf("%d\n", tab_pouls[i].pulsations);
            }
        }
    }
}



//Faire la moyenne
int moyenne(int borne_inferieure, int borne_superieure){
    int inf=0;
    while (borne_inferieure > tab_pouls[inf].temps){
        inf++;
    }
    int sup = 0;
    while (borne_superieure >= tab_pouls[sup].temps){
        sup++;
    }
    int somme = 0;
    int i = borne_inferieure;
    for (;i<tab_pouls_size();i++){
        somme += tab_pouls[i].pulsations;
    }
    return somme / (borne_superieure - borne_inferieure +1 );
}

int maximum(){ // Affiche le maximum d'une plage de données
    int max = tab_pouls[0].pulsations;
    int i = 1;
    for (;i<tab_pouls_size();i++){
        if(max<tab_pouls[i].pulsations)
            max=tab_pouls[i].pulsations;
        printf("%d ; %d\n", tab_pouls[i].pulsations, tab_pouls[i].temps);
    }
    return max;
}

int minimum(){ // Affiche le minimum d'une plage de données
    int min = tab_pouls[0].pulsations;
    int i = 1;
    for (;i<tab_pouls_size();i++){
        if(min>tab_pouls[i].pulsations)
            min=tab_pouls[i].pulsations;
        printf("%d ; %d\n", tab_pouls[i].pulsations, tab_pouls[i].temps);
    }
    return min;
}


int lignes(){ //Affiche le nombre de lignes de notre csv.
    return tab_pouls_size();
}
