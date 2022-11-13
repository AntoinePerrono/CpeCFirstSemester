#include <stdio.h>

int main() {
    int taille = 0;
    printf("Quelle taille à votre triangle ? ");
    scanf("%i", &taille);

    if (taille < 4)
    {
        printf("Valeur non acceptée\n");
        return 0;
    }
    
    
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < i +1; j++)
        {
            if (j == 0 || j == i || i == taille-1)
            {
                printf("*");
            } else {
                printf("#");
            }
        }
        printf("\n");    
    }

    int i = 0;
    while (i < taille)
    {
        int j = 0;
        while (j < i+1)
        {
            if (j == 0 || j == i || i == taille-1)
            {
                printf("*");
            } else {
                printf("#");
            }
            j++;
        }
        
        printf("\n");
        i++;
    }
    
    

    return 0;
}