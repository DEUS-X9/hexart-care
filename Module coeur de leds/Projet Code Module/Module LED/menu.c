#include <stdio.h>
#include <stdlib.h>

int nb;
int choixparam = 0;
int choix;

int menu()
{
    printf("Choisissez un mode d'affichage:\n\n");
    printf("1 - Affichage Chenille pleine\n");
    printf("2 - Affichage Chenille\n");
    printf("3 - Affichage clignotant\n");
    printf("4 - Affichage 1 sur 2\n");
    printf("5 - Affichage 1 sur 3\n");
    printf("6 - Affichage d'une LED\n");
    scanf("%d", &choix);

    switch(choix)
    {
        case 1:
            printf("Vous avez choisi l'affichage Chenille pleine\n");
            choixparam = 1;
            break;
        case 2:
            printf("Vous avez choisi l'affichage Chenille\n");
            choixparam = 2;
            break;
        case 3:
            printf("Vous avez choisi l'affichage clignotant\n");
            choixparam = 3;
            break;
        case 4:
            printf("Vous avez choisi l'affichage 1 sur 2\n");
            choixparam = 4;
            break;
        case 5:
            printf("Vous avez choisi l'affichage 1 sur 3\n");
            choixparam = 5;
            break;
        case 6:
            printf("Vous avez choisi d'allumer une LED, laquelle voulez-vous allumer ? (Un nombre entre 1 et 10?)\n");
            printf("    10      2   \n");
            printf("9       1       3\n");
            printf("  8           4\n");
            printf("    7       5\n");
            printf("        6\n");
            scanf("%d", &nb);
            nb = nb + 3;
            choixparam = 6;
            break;
    }
printf("%d\n" ,choixparam);
    codeur(choixparam);
}
