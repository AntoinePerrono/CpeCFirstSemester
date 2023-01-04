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
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (colors[i].red == colors[j].red && colors[i].green == colors[j].green && colors[i].blue == colors[j].blue && colors[i].alpha == colors[j].alpha )
            {             
                colors[i].occurence += 1;
            }
            
        }
        
    }

    // Boucle qui affiche les couleurs
	for (int i = 0; i < 100; i++)
	{
	    printf("0x%hhx\t 0x%hhx\t 0x%hhx\t 0x%hhx\t %d\n",colors[i].red,colors[i].green,colors[i].blue,colors[i].alpha, colors[i].occurence);
	}

    printf("--------\n");

    // ********************************************************
    // Partie non fonctionnel sur la création d'un nouveau tableau avec seulement une occurrence pour chaque couleur

    // redéfinition de la structure couleur

    // typedef struct colorDistincte
    // {
    //     int red;
    //     int green;
    //     int blue;
    //     int alpha;
    //     int occurence;
    // } distinctColor;

    // Création d'un tableau dynamique sur un maximum de 100 éléments pour stocker les couleurs distinctes.

    // distinctColor* colorsD = (distinctColor*) malloc(sizeof(colorsD) * 100 );
    // int nbColorD = 1;

    // recherche des couleurs distincte dans colors et stockage de chaque occurence colorsDistinct

    // for (int i = 0; i < 100; i++)
    // {
    //     int isHere = 0;
    //     int j = 0;

        // while (isHere == 0 && j < 100)
        // {
        //     if (colors[i].red == colorsD[j].red && colors[i].green == colorsD[j].green && colors[i].blue == colorsD[j].blue && colors[i].alpha == colorsD[j].alpha )
        //     {             
        //         isHere = 1;
        //     }
            
        //     if (isHere == 0)
        //     {
        //         // *colorsD[nbColorD-1].red = &colors[i].red;
        //         // colorsD[nbColorD-1].red = colors[i].red;
        //         // colorsD[nbColorD-1].green = colors[i].green;
        //         // colorsD[nbColorD-1].blue = colors[i].blue;
        //         // colorsD[nbColorD-1].alpha = colors[i].alpha;
        //         // colorsD[nbColorD-1].occurence = colors[i].occurence;

        //         nbColorD++;
        //         // printf("%d\n", nbColorD);
        //     }
        //         printf("%d\n", isHere);

        //     j++;
        // }


        // TEST 
            // *colorsD[i].red = &colors[i].red;
            // colorsD[nbColorD-1].red = colors[i].red;
            // colorsD[nbColorD-1].green = colors[i].green;
            // colorsD[nbColorD-1].blue = colors[i].blue;
            // colorsD[nbColorD-1].alpha = colors[i].alpha;
            // colorsD[nbColorD-1].occurence = colors[i].occurence;

        
            // distinctColor *newColor;
            // newColor->red = colors[i].red;

            // *(colorsD+i*sizeof(distinctColor)) = &newColor;
    // }

    // free(colorsD);
    // ********************************************************    
    
    
	// for (int i = 0; i < 100; i++)
	// {
	//     printf("0x%hhx\t 0x%hhx\t 0x%hhx\t 0x%hhx\t %d\n",colorsD[i].red,colorsD[i].green,colorsD[i].blue,colorsD[i].alpha, colorsD[i].occurence);
	// }

	return 0;

}