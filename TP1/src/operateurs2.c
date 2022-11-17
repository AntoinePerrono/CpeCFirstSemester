#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : operateurs2.c - Calcul en fonction de l'opérateur
 * 
*/

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
    case '-':
       result = num1 - num2;
        break;
    case '*':
      result = num1 * num2;
        break;
    case '/':
       result = num1 / num2;
        break; 
    case '%':
      result = num1 % num2;
        break;
    case '&':
        result = num1 && num2;
        break;
    case '|':
        result = num1 || num2;
        break;
    case '~':
        result = ~(num1 + num2);
        break;
    default:
        result = num1 + num2;
        break;
    }

    printf("Le résultat de cette opération est: %.2f.\n", result);
    
    return 0;
}