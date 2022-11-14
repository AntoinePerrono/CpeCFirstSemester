#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sequentielle(int* array, int search) {
    int i = 0;
    int find = 0;
    while (i < 100 && find != 1)
    {
        if (array[i] == search)
        {
            printf("entier présent\n");
            find = 1;
        }
        i++;
    }
}

int main() {

    int entier[100];
    srand( time( NULL ) );

    int search;
    printf("Nombre rechercher: ");
    scanf("%d", &search);

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    sequentielle(entier, search);

    return 0;
}