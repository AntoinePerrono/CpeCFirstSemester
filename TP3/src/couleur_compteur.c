#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

    srand( time( NULL ) );
    
    //Déclaration de la structure color 
    struct color
    {
        //en unsigned char on veut des valeurs de 0 à 255
        int red;
        int green;
        int blue;
        int alpha;
        int occurence;
    };

    struct color colors[100];

    // Génération des couleurs

    for (int i = 0; i < 100; i++)
    {
        colors[i].red = rand() % 256;
        colors[i].green = rand() % 256;
        colors[i].blue = rand() % 256;
        colors[i].alpha = rand() % 256;
        colors[i].occurence = 0;
    }

    // Recherche et compte des éléments similaires
    // for (int i = 0; i < 100; i++)
    // {
    //     for (int j = 0; j < 100; j++)
    //     {
    //         if (colors[i].red == colors[j].red && colors[i].green == colors[j].green && colors[i].blue == colors[j].blue && colors[i].alpha == colors[j].alpha )
    //         {             
    //             colors[i].occurence += 1;
    //         }
            
    //     }
        
    // }

    // Création d'un tableau dynamique pour stocker les couleurs distinctes.

    typedef struct colorDistincte
    {
        //en unsigned char on veut des valeurs de 0 à 255
        int red;
        int green;
        int blue;
        int alpha;
        int occurence;
    } distinctColor;

    distinctColor* colorsD = (distinctColor*) malloc(sizeof(colorsD) * 100 );
    int nbColorD = 0;

    for (int i = 0; i < 100; i++)
    {
        int isHere = 0;
        for (int j = 0; j < colorsD; j++)
        {
            if (colors[i].red == colorsD[j].red && colors[i].green == colorsD[j].green && colors[i].blue == colorsD[j].blue && colors[i].alpha == colorsD[j].alpha )
            {             
                isHere = 1;
            }
            
        }
        if (isHere == 0)
        {
            colorsD[nbColorD-1].red = colors[i].red;
            colorsD[nbColorD-1].green = colors[i].green;
            colorsD[nbColorD-1].blue = colors[i].blue;
            colorsD[nbColorD-1].alpha = colors[i].alpha;
            colorsD[nbColorD-1].occurence = colors[i].occurence;

            nbColorD++;
        }
        
        
    }


    free(colorsD);
    
    
    // Boucle qui affiche les couleurs
	for (int i = 0; i < nbColorD; i++)
	{
	    printf("0x%hhx\t 0x%hhx\t 0x%hhx\t 0x%hhx\t %d\n",colorsD[i].red,colorsD[i].green,colorsD[i].blue,colorsD[i].alpha, colorsD[i].occurence);
	}

	return 0;

}