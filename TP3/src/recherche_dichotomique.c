#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void binarySearch(int array[100], int begin, int ending, int key) {  
    int mid;  
    mid = (begin + ending)/2;
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

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tri(int array[100]) {
    int tried = 0;
    while (tried == 0)
    {
        int changed = 0;
        for (int i = 0; i < 100; i++)
        {
            if (array[i+1] < array[i])
            {
                swap(&array[i+1], &array[i]);
                changed = 1;
            }            
        }
        if (changed == 0)
        {
            tried = 1;
        }
    }
}

int main() {

    int entier[100];
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