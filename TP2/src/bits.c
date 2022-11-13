#include <stdio.h>

int main() {
    int d = 0;
    char d_bin[32];

    printf("Nombre: ");
    scanf("%d", &d);

    //Conversion entier à binaire par décallage de bit
    for (int i = 31; i >= 0; i--)
    {
        int value = 1 << i;

        if (d & value)
        {
            d_bin[31-i] = 1;
        } else {
            d_bin[31-i] = 0;
        }
    }

    // vérification des bits 4 et 20
    if (d_bin[4] == 1 && d_bin[20] == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}