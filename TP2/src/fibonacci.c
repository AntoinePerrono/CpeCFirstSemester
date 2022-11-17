#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : fibonacci.c - Calcul de la suite de Fibonacci de façon récursive
 * 
*/

// Calcul de fibonacci en récursive 

int fibonacci_rec(int n){
    int result = 0;
    // si n atteint 1, fin du calcul
    if(n <= 1){
        return 1;
    } else {
        // calcul
        result = fibonacci_rec(n-1) + fibonacci_rec(n-2);
        return result;
    }
}

int main() {
    int n = 0;

    printf("Combien d'itération ? ");
    scanf("%d", &n);

    if(n==0){
        printf("1");
    } else {
        for(int i=0;i<n;i++) {
            printf("%i\n", fibonacci_rec(i));
        }
    }

    return 0;
}