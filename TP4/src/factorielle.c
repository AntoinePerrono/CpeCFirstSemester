#include <stdio.h>

int factorielle (int num) {
if (num == 0) {
    return 1;
}
else {
    return (num * factorielle (num-1));
}
}

int main(){

    printf("Le factorielle de 5 est : %d\n", factorielle(5));
    return 0;
}