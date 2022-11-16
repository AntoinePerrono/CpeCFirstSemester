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

    // ********************************************************
    // Partie non fonctionnel sur la création d'un nouveau tableau avec seulement une occurence de chaque couleur

    // redéfinition de la structure couleur

    // typedef struct colorDistincte
    // {
    //     //en unsigned char on veut des valeurs de 0 à 255
    //     int red;
    //     int green;
    //     int blue;
    //     int alpha;
    //     int occurence;
    // } distinctColor;

    // Création d'un tableau dynamique sur un maximum de 100 éléments pour stocker les couleurs distinctes.

    // distinctColor* colorsD = (distinctColor*) malloc(sizeof(colorsD) * 100 );
    // int nbColorD = 0;

    // recherche des couleurs distincte et stockage

    // for (int i = 0; i < 100; i++)
    // {
    //     int isHere = 0;
    //     for (int j = 0; j < colorsD; j++)
    //     {
    //         if (colors[i].red == colorsD[j].red && colors[i].green == colorsD[j].green && colors[i].blue == colorsD[j].blue && colors[i].alpha == colorsD[j].alpha )
    //         {             
    //             isHere = 1;
    //         }
            
    //     }
    //     if (isHere == 0)
    //     {
    //         colorsD[nbColorD-1].red = colors[i].red;
    //         colorsD[nbColorD-1].green = colors[i].green;
    //         colorsD[nbColorD-1].blue = colors[i].blue;
    //         colorsD[nbColorD-1].alpha = colors[i].alpha;
    //         colorsD[nbColorD-1].occurence = colors[i].occurence;

    //         nbColorD++;
    //     }
    // }

    // free(colorsD);
    // ********************************************************    
    
    // Boucle qui affiche les couleurs
	for (int i = 0; i < 100; i++)
	{
	    printf("0x%hhx\t 0x%hhx\t 0x%hhx\t 0x%hhx\t %d\n",colors[i].red,colors[i].green,colors[i].blue,colors[i].alpha, colors[i].occurence);
	}

	return 0;

}