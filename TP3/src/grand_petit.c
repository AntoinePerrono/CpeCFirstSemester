#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int entier[100];
    srand( time( NULL ) );

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    int min = entier[0];
    int max = entier[0];

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