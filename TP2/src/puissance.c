#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nombre 1: ");
    scanf("%d", &c);
    printf("Nombre 2: ");
    scanf("%d", &b);

    a = c;

    for (int i = 1; i < b; i++)
    {
        c *= a;
    }

    printf("\n%d ^ %d = %d\n", a,b,c);

    return 0;    
}