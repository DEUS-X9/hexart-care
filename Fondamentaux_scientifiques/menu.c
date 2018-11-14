#include "actions.h"



void menu(){
    int i=0;
    printf("Entrer 1 si vous voulez trier les donnees dans l'ordre croissant :\n");
    printf("Entrer 2 si vous voulez trier les donnees dans l'ordre décroissant :\n");
    printf("Entrer 3 si vous voulez rechercher une donne :\n");
    printf("Entrer 4 si vous voulez ordonner les donnees comme dans le fichier :\n");
    printf("Entrer 5 si vous voulez une moyenne de pouls dans une plage de donnees :\n");
    printf("Entrer 6 si vous voulez afficher le nombre de lignes de donnes actuellement en memoire :\n");
    printf("Entrer 7 si vous voulez rechercher et afficher les max/min de pouls :\n");
    printf("Entrer 0 si vous voulez quitter l'application :\n");
    scanf("%d",i);

    switch (i)
    {
    case 1:
        tri_a_bulle();
        break;
    case 2:
        tri_a_bulle_inverse();
        break;
    case 3:
        recherche_sequentielle();
        break;
    case 4:
        //ordonner();
        break;
    case 5:
        //moyenne();
        break;
    case  6:
        //lignes();
        break;
    case 7:
        //maximum_minimum();
        break;
    case 0:
        system("exit");
        break;
    }
    }
