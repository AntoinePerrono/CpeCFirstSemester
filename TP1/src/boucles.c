#include <stdio.h>

int main() {
    int taille = 0;
    printf("Quelle taille à votre triangle ? ");
    scanf("%i", &taille);

    // controle de l'entree utilisateur
    if (taille < 4)
    {
        printf("Valeur non acceptée\n");
        return 0;
    }
    
    // affichage du triangle avec boucle for
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < i +1; j++)
        {
            if (j == 0 || j == i || i == taille-1)
            {
                // Permet d'afficher les contours en *
                printf("*");
            } else {
                // Permet d'afficher les contours en #
                printf("#");
            }
        }
        printf("\n");    
    }

    //affichage du triangle avec boucle while
    int i = 0;
    while (i < taille)
    {
        int j = 0;
        while (j < i+1)
        {
            if (j == 0 || j == i || i == taille-1)
            {
                // Permet d'afficher les contours en *
                printf("*");
            } else {
                // Permet d'afficher les contours en #
                printf("#");
            }
            j++;
        }
        
        printf("\n");
        i++;
    }
    
    return 0;
}