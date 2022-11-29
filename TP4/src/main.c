#include <stdio.h>
#include <string.h>
#include "operator.h"
#include "fichier.h"

int main() {
    /*

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
       result = somme(num1, num2);
       result = somme(num1, num2);
        break;
    }

    printf("Le résultat de cette opération est: %.2f.\n", result);
    
    */

   // Exercice 2


    // Lecture du fichier: 

    printf("\n|--- Lecture fichier ---|\n");

    char filename[255];
    printf("Entrez le nom du fichier à lire (fichier devant être contenu dans le dossier ressource) : ");
    scanf("%s", &filename);

    // création du nom du fichier complet
    char readingPathFile[] = "ressource/";
    strcat(readingPathFile, filename);

    // lecture du fichier
    lire_fichier(readingPathFile);

    printf("\n|--- Ecriture fichier ---|\n");

    printf("Entrez le nom du fichier dans le quel écrire ou à créer (fichier devant être contenu dans le dossier ressource) : ");
    scanf("%s", &filename);

    // création du nom du fichier complet
    char writingPathFile[] = "ressource/";
    strcat(writingPathFile, filename);

    // Récupération du message de l'utilisateur
    char message[255];
    printf("Entrez votre message: ");
    scanf("%s", &message);
 
    ecrire_dans_fichier(writingPathFile, message);

    return 0;
}