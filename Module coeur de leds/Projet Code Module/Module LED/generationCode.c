#include <stdio.h>
#include "menu.h"

int nb;

int codeur(int choixparam)
{
printf("%d" ,choixparam);
FILE* fichier = NULL;
fichier = fopen("../coeur.c/param.h", "w");
if (fichier != NULL)
{
switch(choixparam)
{
    case 1:
        fputs("#define choix 1", fichier);
        fprintf(fichier, "int nb = 6;");
        break;
    case 2:
        fputs("#define choix 2", fichier);
        fprintf(fichier, "int nb = 6;");
        break;
    case 3:
        fputs("#define choix 3", fichier);
        fprintf(fichier, "int nb = 6;");
        break;
    case 4:
        fputs("#define choix 4", fichier);
        fprintf(fichier, "int nb = 6;");
        break;
    case 5:
        fputs("#define choix 5", fichier);
        fprintf(fichier, "int nb = 6;");
        break;
    case 6:
        fputs("#define choix 6\n", fichier);
        fprintf(fichier, "int nb = %d;", nb);
        break;
}
fclose(fichier);
}
return 0;
}
