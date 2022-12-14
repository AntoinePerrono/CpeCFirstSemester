#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : binaire.c - Conversion binaire
 * 
*/

int main(){

    int input = 0;
    int input_save = 0;
    int i;
    char binaire[32];

    printf("Entrer un nombre: ");
    scanf("%d", &input);

    input_save = input;

    // conversion en binaire de l'input
    for (i = 0; input > 0; i++)
    {
        binaire[i] += input%2;
        input = input/2;
    }


    printf("%i en binaire correspond : ", input_save);

    // parcours à l'envers du tableau pour afficher dans le bon ordre le résultat
    for (i = i-1; i >=0; i--)
    {
        printf("%d", binaire[i]);
    }

    printf("\n");

    return 0;
}