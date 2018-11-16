#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"

char *append(char *str1, char stri){
    char * new_str ;
    char str2[] = {stri, '\0'};
    if((new_str = malloc(strlen(str1)+strlen(str2)+1)) != NULL){
        new_str[0] = '\0';   // ensures the memory is an empty string
        strcat(new_str,str1);
        strcat(new_str,str2);
        return new_str;
    } else {
        printf("malloc failed!\n");
        return "";
    }
}


char** split(char* str, char split){
    int count = 1;
    int i = 0;

    while(str[i] != '\0'){ // Compte le nombre de blocs
        if(str[i] == split)
            count++;
        i++;
    }

    int *sizes = (int*)malloc(count * sizeof(int)); // Tableau des tailles des différents blocs

    for(i = 0; i < count; i++){ // Initialisation du tableau
        sizes[i] = 0;
    }

    i = 0;
    int j = 0;

    while(str[i] != '\0'){ // Calcul des différentes tailles des blocs
        if(str[i] != split)
            sizes[j]++;
        else
            j++;
        i++;
    }

    int totalSize = strlen(str) - count; // Taille du texte sans les délimiteurs

    char** strings = (char**)malloc(totalSize * sizeof(char)); // On alloue la mémoire requise pour le tableau qui contiendra les chaines de caractères

    i = 0;
    j = 0;

    for(i = 0; i < count; i++){ // Initialise le tableau avec des textes vides
        strings[i] = "";
    }

    j = 0;

    for(i = 0; i < totalSize + count; i++){ // Ajout des différents blocs dans le tableau des textes
        if(str[i] != split){
            strings[j] = append(strings[j], str[i]);
        }
        else
        {
            j++;
        }
    }

    return strings; // Retourne le tableau des blocs
}

void menu(){
    lirefichier(); // Lit le fichier et stocke les différents pouls dans un tableau
    printf("Choisissez une commande parmi :\n- liste\n- croissant [temps/pouls]\n- decroissant [temps/pouls]\n- recherche_temps [temps]\n- moyenne_pouls [borne superieure, borne inferieure]\n- nombre_lignes\n- recherche_max\n- recherche_min\n- exit\n\n");
    char commande[50];
    while(strcmp(commande, "exit") != 0){
        printf("> ");
        gets(commande);
        char **com = split(commande, ' '); // Sépare la commande en plusieurs mots
        // Appel de la bonne fonction en regard du premier mot écrit
        if(strcmp(com[0], "liste") == 0){
            lirefichier();
        }
        else if(strcmp(com[0], "croissant") == 0){
            if(strcmp(com[1], "temps") == 0)
                croissant(0);
            else if(strcmp(com[1], "pouls") == 0)
                croissant(1);
        }
        else if(strcmp(com[0], "decroissant") == 0){
            if(strcmp(com[1], "temps") == 0)
                decroissant(0);
            else if(strcmp(com[1], "pouls") == 0)
                decroissant(1);
        }
        else if(strcmp(com[0], "recherche_temps") == 0){
            printf("%d\n", recherche(atoi(com[1])));
        }
        else if(strcmp(com[0], "moyenne_pouls") == 0){
            printf("%d\n", moyenne(atoi(com[1]), atoi(com[2])));
        }
        else if(strcmp(com[0], "nombre_lignes") == 0){
            printf("%d\n", lignes());
        }
        else if(strcmp(com[0], "recherche_max") == 0){
            printf("%d\n", maximum());
        }
        else if(strcmp(com[0], "recherche_min") == 0){
            printf("%d\n", minimum());
        }

    }
}
