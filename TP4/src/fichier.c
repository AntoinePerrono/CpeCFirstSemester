#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier) {
    FILE* file = fopen(nom_de_fichier, "r");
    char data[256];

    if (NULL == file) {
        printf("Le fichier ne peut pas être ouvert.\n");
    } else {
        while (fgets(data, 256, file) != NULL)
            printf("%s", data);
    
        fclose(file);
    }
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message) {

    FILE* file = fopen(nom_de_fichier, "w+");

    fputs(message, file);

    fclose(file);

}
