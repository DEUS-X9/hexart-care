#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.h"
//int pouls_size = 0;

int tab_pouls_size(){
    return 9;
}

void lirefichier(){  // Lit un fichier csv et stocke les donn�es dans un tableau de caract�res
    FILE *fichier = NULL;
    tab_pouls = (information_pouls*)calloc(1000, sizeof(information_pouls));
    char tableau[100]="";
    fichier = fopen ("test.csv", "r"); //Ouvre le fichier demand�
    int i = 0;
    if (fichier!=NULL){
        while(fgets(tableau,100,fichier)!=NULL){  // Parcours toutes les lignes du fichier et stocke les donn�es dans le tableau
            information_pouls *pls = NULL; // Initialise un pointeur vers une structure
            pls = (information_pouls *)malloc(sizeof(information_pouls));
            char* s = strtok(tableau, ";");
            //pls->temps = atoi(strtok(tableau,";"));  // Transforme la cha�ne de caract�res situ�e avant le ";" en entiers et stocke la valeur dans le champs time
            //pls->pulsations = atoi(strtok(NULL,";"));
            //ajouter_pouls(pls);
                //fscanf(fichier,"%s",tableau);
            tab_pouls[i].pulsations = atoi(s);

            printf("%s\n",s);
            s = strtok(NULL, ";");

            tab_pouls[i++].temps = atoi(s);
        //printf("  %d ; %d\n", pls->pulsations, pls->temps);
        }
    }
    else{
        printf("Impossible d'ouvrir le fichier csv\n");
        exit(1);
    }

    fclose (fichier);
}

/*int ajouter_pouls( information_pouls *pls,int *size){ //Ajoute une pulsation au tableau des pouls
    size++; //Augmente la taille du tableau de 1
    Pouls = ( information_pouls ) realloc(Pouls, size * sizeof); // R�alloue la m�moire au tableau des pouls pour avoir un espace de stockage en plus et pouvoir stocker la nouvelle pulsation
    Pouls[size -1] = *pls; // Stocke le pointeur pls � la fin du tableau des pouls

}*/

