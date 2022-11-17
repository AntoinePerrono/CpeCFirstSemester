#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : puissance.c - Calcul de la puissance d'un nombre
 * 
*/

int main() {
    int a, b, c;

    printf("Nombre 1: ");
    scanf("%d", &c);
    printf("Nombre 2: ");
    scanf("%d", &b);

    a = c;

    //Calcul de la puissance
    for (int i = 1; i < b; i++)
    {
        c *= a;
    }

    printf("\n%d ^ %d = %d\n", a,b,c);

    return 0;    
}