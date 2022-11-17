#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : grand_petit.c - Génération aléatoire de nombre et affichage du plus grand et du plus petit.
 * 
*/

int main() {

    int entier[100];

    //initiation de la seed
    srand( time( NULL ) );

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    int min = entier[0];
    int max = entier[0];

    // recherche sur l'ensemble du tableau
    for (int i = 0; i < 100; i++)
    {
        if (entier[i] < min)
        {
            min = entier[i];
        } else if (entier[i] > max)
        {
            max = entier[i];
        }
    }

    printf("Le plus petit nombre est %d.\n", min);
    printf("Le plus grand nombre est %d.\n", max);

    return 0;
}