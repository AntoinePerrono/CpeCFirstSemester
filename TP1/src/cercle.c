#include <stdio.h>
#define PI 3.14159

// Exercice 1.2

void cercle() {
    float aire = 0;
    float perimetre = 0;
    float rayon = 0 ;
    printf("Entrer le rayon : ");
    scanf("%f", &rayon);
    aire = PI*rayon*rayon;
    perimetre = 2*PI*rayon;
    printf("L'aire de ce cercle est %f.\n", aire);
    printf("Le perimetre de ce cercle est %f.\n", perimetre);
}

int main() {
    cercle();
    return 0;
}