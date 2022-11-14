#include <stdio.h>

int main() {

    printf("%li\n", sizeof (int));
    printf("%li\n", sizeof (int *));
    printf("%li\n", sizeof (int **));
    printf("%li\n", sizeof (char *));
    printf("%li\n", sizeof (char **));
    printf("%li\n", sizeof (char ***));
    printf("%li\n", sizeof (float *));
    printf("%li\n", sizeof (float **));
    printf("%li\n", sizeof (float ***));

    return 0;
}