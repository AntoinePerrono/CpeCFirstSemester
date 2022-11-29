#include <stdio.h>
#include <stdlib.h>  
#include "operator.h"

int main(int argc, char ** argv){

    float result = 0;

    char op = argv[1];
    int num1 = strtol(argv[2], NULL, 10);
    int num2 = strtol(argv[3], NULL, 10);
    // int num1 = argv[2];
    // int num2 = argv[3];

    switch (op)
    {
    case '+':
       result = somme(num1, num2);
        break;
    case '-':
       result = diff(num1, num2);
        break;
    case '*':
       result = produit(num1, num2);
        break;
    case '/':
       result = quotient(num1, num2);
        break;
    case '%':
       result = modulo(num1, num2);
        break;
    case '&':
       result = andOperation(num1, num2);
        break;
    case '|':
       result = orOperation(num1, num2);
        break;
    case '~':
       result = negation(num1);
        break;
    default:
       result = somme(num1, num2);
       result = somme(num1, num2);
        break;
    }

    printf("Le resultat est %.2f.\n", result);

    return 0;

}