//tri � bulle
#define TRUE 1
#define FALSE 0
void tri_a_bulle(){
    int *a=0;
    int n=0;
    int i=0;
    int x=0;//variable qui va nous servir de m�moire pour stocker une valeur.
    int verif=1;
    while(verif){
        verif=FALSE;
        for (i=0;i<n-1;i++){
            if(a[i]>a[i+1]){ //on compare les 2 �l�ments qui se suit.
                x=a[i+1]; //On incr�mente une valeur � notre variable qui nous sert de m�moire.
                a[i+1]=a[i];// La valeur prend la valeur qui la pr�c�de.
                a[i]=x;// La valeur prend la valeur qui est stocker en m�moire pour �changer les 2 �l�ments.
                verif=TRUE;
            }
        }
    }
}
void tri_a_bulle_inverse(){
    int *a=0;
    int n=0;
    int i=0;
    int x=0; //variable qui va nous servir de m�moire pour stocker une valeur.
    int verif=1;
    while(verif){
        verif=FALSE;
        for (i=0;i<n-1;i++){
            if(a[i]>a[i+1]){ //on compare les 2 �l�ments qui se suit.
                x=a[i]; //On incr�mente une valeur � notre variable qui nous sert de m�moire.
                a[i]=a[i+1];// La valeur prend la valeur qui la suit.
                a[i+1]=x;// La valeur prend la valeur qui est stocker en m�moire pour �changer les 2 �l�ments.
                verif=TRUE;
            }
        }
    }

}

//Recherche s�quentielle
void recherche_sequentielle(){
    int ValRech=0;
    int *a=0;
    int n=0;
    int i=0;
    for (i=0;i<n;i++){
        if (a[i]=ValRech){
            return i;
        }
    }
    return -1;
}

//Faire la moyenne
void moyenne(){

}

