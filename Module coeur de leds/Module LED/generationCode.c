#include <stdio.h>
#include "menu.h"

int nb;

int codeur(int choixparam)
{
printf("%d" ,choixparam);
FILE* fichier = NULL;
fichier = fopen("C:/Users/lucas/Desktop/Projet Code Module/coeur.c/param.h", "w");
if (fichier != NULL)
{
switch(choixparam)
{
    case 1:
        fputs("#define choix 1", fichier);
        break;
    case 2:
        fputs("#define choix 2", fichier);
        break;
    case 3:
        fputs("#define choix 3", fichier);
        break;
    case 4:
        fputs("#define choix 4", fichier);
        break;
    case 5:
        fputs("#define choix 5", fichier);
        break;
    case 6:
        fputs("#define choix 6\n", fichier);
        fprintf(fichier, "#define nb %d", nb);
        break;
}
fclose(fichier);
}
return 0;
}
