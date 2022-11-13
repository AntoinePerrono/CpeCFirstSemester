#include <stdio.h>

int main(){

    int input = 0;
    int input_save = 0;
    int i;
    char binaire[32];

    printf("Entrer un nombre: ");
    scanf("%d", &input);

    input_save = input;

    for (i = 0; input > 0; i++)
    {
        binaire[i] += input%2;
        input = input/2;
    }


    printf("%i en binaire correspond : ", input_save);

    for (i = i-1; i >=0; i--)
    {
        printf("%d", binaire[i]);
    }

    printf("\n");

    return 0;
}