#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sequentielle(int* array, int search) {
    int i = 0;
    int find = 0;
    //Recherche sur l'ensemble du tableau, ou jusqu'il soit trouvé
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
    // initiation du seed du random
    srand( time( NULL ) );

    // Input de l'utilisateur
    int search;
    printf("Nombre rechercher: ");
    scanf("%d", &search);

    // Génération du tableau
    for (int i = 0; i < 100; i++)
    {
        entier[i] = rand() % 101;
    }

    sequentielle(entier, search);

    // Exercice 3.8

    char phrase[10][256] = {"salut oui", "enchanter", "aurevoir", "ok dac", "cpe", "irc", "tres bien", "ahh mince", "a demain", "on est content"};

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", phrase[i]);
    }
    
    return 0;
}