#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void lirefichier()
{
        FILE *fichier;
        char tampon[BUFSIZ];
        int actuel = 0;
        int c;


        fichier = fopen ("C:\\Users\\maxen\\testsCB\\test.csv", "r");
        if (!fichier) {
                return EXIT_FAILURE;
        }

        while ((c = fgetc (fichier)) != EOF) {
                if (c == ';' || c == '\n') {
                        printf ("%ld\n", strtol (tampon, NULL, 10));
                        actuel = 0;
                        memset (tampon, 0, sizeof tampon);
                } else {
                        tampon[actuel++] = c;
                }
        }

        fclose (fichier);
    return EXIT_SUCCESS;
}
