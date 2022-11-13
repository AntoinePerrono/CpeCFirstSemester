#include <stdio.h>

// Exercice 1.5

int main() {
    int a = 16;
    int b = 3;

    printf("Opérateurs logiques\n");
    printf("Avec l'opérateur +, %i + %i = %i \n", a, b, a+b);
    printf("Avec l'opérateur -, %i - %i = %i \n", a, b, a-b);
    printf("Avec l'opérateur *, %i * %i = %i \n", a, b, a*b);
    printf("Avec l'opérateur /, %i / %i = %i \n", a, b, a/b);
    printf("Avec l'opérateur %%, %i %% %i = %i \n", a, b, a%b);

    printf("\nOpérateurs logiques\n");
    printf("Avec l'opérateur !, !%i = %i \n", a, !a);
    printf("Avec l'opérateur &&, %i && %i = %i \n", a, b, a&&b);
    printf("Avec l'opérateur ||, %i || %i = %i \n", a, b, a||b);

    return 0;
}