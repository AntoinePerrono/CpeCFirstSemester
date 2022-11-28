#include <stdio.h>
#include "operator.h"

float somme(float a, float b) {
    return a + b;
}

float diff(float a, float b) {
    return a - b;
}

float produit(float a, float b) {
    return a * b;
}

float quotient(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

float andOperation(float a, float b) {
    return a && b;
}

float orOperation(float a, float b) {
    return a || b;
}

int negation(int a) {
    return ~a;
}
int main() {
    // initialisation de nos variables avec une valeur par défaut.
    int num1 = 0, num2 = 0;
    char op = '+';

    // reccueil des valeurs entrées par l'user
    printf("Entrer votre opérateur (+, -, *, /, %%, &, |, ~): ");
    scanf("%c", &op);

    printf("Entrer votre premier nombre: ");
    scanf("%d", &num1);

    printf("Entrer votre deuxieme nombre: ");
    scanf("%d", &num2);


    printf("\n");

    float result = 0;

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
        result = num1 + num2;
        break;
    }

    printf("Le résultat de cette opération est: %.2f.\n", result);
    
    return 0;
}