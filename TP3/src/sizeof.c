#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : sizeof.c - Affichage de la taille des types et avec pointeur
 * 
*/

int main() {

    printf("%li\n", sizeof (int));
    printf("%li\n", sizeof (int *));
    printf("%li\n", sizeof (int **));
    printf("%li\n", sizeof (char *));
    printf("%li\n", sizeof (char **));
    printf("%li\n", sizeof (char ***));
    printf("%li\n", sizeof (float *));
    printf("%li\n", sizeof (float **));
    printf("%li\n", sizeof (float ***));

    return 0;
}