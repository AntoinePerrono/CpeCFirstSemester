#include <stdio.h>

int main() {
    printf("Avec 2, 5 et boucle for: \n");

    int a = 2;
    int b = 15;

    for (int i = 0; i <=1000; i++)
    {
        // si modulo égale à 0 alors le nombre est divisible
       if (i%a == 0 && i%b == 0)
        {    
           printf("%i, ", i);
        }
       
    }
    printf("\n");

    printf("\nAvec 103, 107 et boucle while : \n");

    a = 103;
    b = 107;

    int i = 0;

    while (i <= 1000)
    {
        // si modulo égale à 0 alors le nombre est divisible
        if (i%a == 0 || i%b == 0)
        {
           printf("%i, ", i);
        }

       i++;
    }
    printf("\n");

    printf("\nAvec 7 ou 5 mais pas 3 et boucle while : \n");

    a = 7;
    b = 5;
    int c = 3;

    i = 0;

    while (i <= 1000)
    {
        // si modulo égale à 0 alors le nombre est divisible
        if ((i%a == 0 || i%b == 0)&& i%c != 0)
        {
           printf("%i, ", i);
        }

       i++;
    }
    printf("\n");
    return 0;
}