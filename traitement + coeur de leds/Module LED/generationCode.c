#include <stdio.h>
#include "menu.h"

int nb;

int codeur(int choixparam)//Cette fonction permet d'écrire à l'interieur d'un fichier défini
{
//printf("%d" ,choixparam);
FILE* fichier = NULL;
fichier = fopen("../main.c/param.h", "w");//Chemin pour modifier le fichier param.h
if (fichier != NULL)
{
switch(choixparam)//Ce switch permet d'écrire le bon code à l'intérieur du param.h en fonction du choix fait par l'utilisateur à travers le menu.c
{
    case 1:
        fprintf(fichier, "#define choix 1\n");//Permet de choisir la valeur du case dans le switch du fichier arduino et donc choisir l'affichage du coeur de LED
        fprintf(fichier, "int nb = 6;");//Il faut donner une valeur de défaut de nb (pour l'affichage d'une seule LED définit) qui ne sera pas utiliser lors des 5 premiers case
        break;
    case 2:
        fprintf(fichier, "#define choix 2\n");
        fprintf(fichier, "int nb = 6;");
        break;
    case 3:
        fprintf(fichier, "#define choix 3\n");
        fprintf(fichier, "int nb = 6;");
        break;
    case 4:
        fprintf(fichier, "#define choix 4\n");
        fprintf(fichier, "int nb = 6;");
        break;
    case 5:
        fprintf(fichier, "#define choix 5\n");
        fprintf(fichier, "int nb = 6;");
        break;
    case 6:
        fprintf(fichier, "#define choix 6\n");
        fprintf(fichier, "int nb = %d;", nb);//La valeur de nb et cette fois-ci variable en fonction de ce que l'utilisateur a choisis
        break;
}
fclose(fichier);
}
return 0;
}
