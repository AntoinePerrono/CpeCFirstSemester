#include <stdio.h>
#include <stdlib.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : tableauptr.c - Gestion et calcul à partir des indices d'un tableau
 * 
*/

int main() {

    // Création des tableaux
    int tabInt[15];
    float tabFloat[15];

    // On regarde si l'indice est divisible par 2. Si cela l'est, la valeur à cette position sera multipliée par 3
	int i=0;
	for (i=0;i<15;i++)
	{
        // Pour accéder aux données du tableau sans passer par les indices, on utilise *(tab+i), qui est équivalent à tab[i]
		*(tabInt+i) = rand();
		*(tabFloat+i) = (float)rand()/((float)RAND_MAX/5);

        // Verification de si l'indice est divisible par 2
		if (i%2 == 0)
		{
            // Multiplication par 3 des valeurs random
			*(tabInt+i*sizeof(int)) = *(tabInt+i*sizeof(int))*3;
			*(tabFloat+i*sizeof(float)) = *(tabFloat+i*sizeof(float))*3;
		}

    }


    // Affichage du tableau d'entier
    printf("Int : ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d\t", *(tabInt+i));
    }
    printf("\nFloat : ");
    // Affichage du tableau de float
    for (int i = 0; i < 15; i++)
    {
        printf("%f\t", *(tabFloat+i));
    }
    printf("\n");

    return 0;
}