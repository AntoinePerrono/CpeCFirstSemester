#include <stdio.h>

int main() {
    
    //Déclaration de la structure color 
    struct color
    {
        //en unsigned char on veut des valeurs de 0 à 255
        unsigned char red;
        unsigned char green;
        unsigned char blue;
        unsigned char alpha;
    };

    struct color colors[10];
    
    colors[0].red = 0x12;
    colors[0].green = 0x13;
    colors[0].blue = 0x25;
    colors[0].alpha = 0x12;
    
    colors[1].red = 0x12;
    colors[1].green = 0x13;
    colors[1].blue = 0x25;
    colors[1].alpha = 0x12;
    
    colors[2].red = 0x12;
    colors[2].green = 0x13;
    colors[2].blue = 0x25;
    colors[2].alpha = 0x12;
    
    colors[3].red = 0x12;
    colors[3].green = 0x13;
    colors[3].blue = 0x25;
    colors[3].alpha = 0x12;
    
    colors[4].red = 0x12;
    colors[4].green = 0x13;
    colors[4].blue = 0x25;
    colors[4].alpha = 0x12;
    
    colors[5].red = 0x12;
    colors[5].green = 0x13;
    colors[5].blue = 0x25;
    colors[5].alpha = 0x12;
    
    colors[6].red = 0x12;
    colors[6].green = 0x13;
    colors[6].blue = 0x25;
    colors[6].alpha = 0x12;
    
    colors[7].red = 0x12;
    colors[7].green = 0x13;
    colors[7].blue = 0x25;
    colors[7].alpha = 0x12;
    
    colors[8].red = 0x12;
    colors[8].green = 0x13;
    colors[8].blue = 0x25;
    colors[8].alpha = 0x12;
    
    colors[9].red = 0x12;
    colors[9].green = 0x13;
    colors[9].blue = 0x25;
    colors[9].alpha = 0x12;
    
    // Boucle qui affiche les couleurs
	for (int i = 0; i < 10; i++)
	{
	    printf("- Cette couleur est composée de : \nR: %d\tG: %d\tB: %d\tA: %d\n",colors[i].red,colors[i].green,colors[i].blue,colors[i].alpha);
	}

	return 0;

}