#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction permettant d'interchanger deux variables
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int entier[100];
    // initiation de la seed du random
    srand( time( NULL ) );

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    // boucle de tri
    int tried = 0;

    // s'effectue tant que le tableau n'est pas perçu comme trié
    while (tried == 0)
    {
        int changed = 0;
        for (int i = 0; i < 100; i++)
        {
            if (entier[i+1] < entier[i])
            {
                swap(&entier[i+1], &entier[i]);
                changed = 1;
            }            
        }
        if (changed == 0)
        {
            tried = 1;
        }
    }

    // affichage
    for (int i = 0; i < 100; i++)
    {
        printf("%d\t", entier[i]);
    }

    printf("\n");

    return 0;
}