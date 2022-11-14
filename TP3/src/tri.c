#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int entier[100];
    srand( time( NULL ) );

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    int tried = 0;

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

    for (int i = 0; i < 100; i++)
    {
        printf("%d\t", entier[i]);
    }

    printf("\n");

    return 0;
}