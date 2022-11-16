#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Méthode permettant le recherche dichotomique en récursif
void binarySearch(int array[100], int begin, int ending, int key) {  
    int mid;  
    mid = (begin + ending)/2;
    // Si l'entier de fin est plus grand que celui du début de recherche, cela indique que la clé n'a pas été trouvée.
    if (begin < ending)
    {    
        if(array[mid] == key)  
        {  
            printf("entier présent\n");
        }  
        else if(array[mid] < key) {  
            binarySearch(array,begin+1,ending,key);  
        }  
        else {  
            binarySearch(array,begin,mid-1,key);  
        } 
    }
}

// Fonction permettant d'interchanger deux variables
void swap(int* a, int* b)
{
    // variable temporaire
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tri(int array[100]) {
    int tried = 0;

    // execution tant que le tableau n'est pas trié
    while (tried == 0)
    {
        int changed = 0;

        // parcours du tableau
        for (int i = 0; i < 100; i++)
        {
            // vérifie si c'est trié, si ce ne l'est pas, le tri est effectué.
            if (array[i+1] < array[i])
            {
                swap(&array[i+1], &array[i]);

                // indique qu'une manipulation a eu lieu
                changed = 1;
            }            
        }

        // si aucune manipulation a eu lieu durant la précédente éxecution, le tableau est donc trié.
        if (changed == 0)
        {
            tried = 1;
        }
    }
}

int main() {

    int entier[100];

    // initiation de la seed du random
    srand( time( NULL ) );

    int search;
    printf("Nombre recherché: ");
    scanf("%d", &search);

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    tri(entier);
    binarySearch(entier,0,100,search);

    return 0;
}