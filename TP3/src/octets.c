#include <stdio.h>

int main() {
    short my_short_var = -12;
    int my_int_var = 12;
    long int my_longi_var = -1234553;
    float my_float_var = 3.14;
    double my_double_var = 3.14E-12;
    long double my_long_double_var = 3.14E-22;

    char *my_short_varp = &my_short_var;
    for (int i =0; i < (int) sizeof(my_short_var); i++) {
        printf("%hi, %p\n",*(my_short_varp + i),my_short_varp+i);
    }

    printf("\n");

    char *my_int_varp = &my_int_var;
    for (int i =0; i < (int) sizeof(my_int_var); i++) {
        printf("%hi, %p\n",*(my_int_varp + i),my_int_varp+i);
    }
    printf("\n");

    char *my_longi_varp = &my_longi_var;
    for (int i =0; i < (int) sizeof(my_longi_var); i++) {
        printf("%hi, %p\n",*(my_longi_varp + i),my_longi_varp+i);
    }
    printf("\n");

    char *my_float_varp = &my_float_var;
    for (int i =0; i < (int) sizeof(my_float_var); i++) {
        printf("%hi, %p\n",*(my_float_varp + i),my_float_varp+i);
    }
    printf("\n");

    char *my_double_varp = &my_double_var;
    for (int i =0; i < (int) sizeof(my_double_var); i++) {
        printf("%hi, %p\n",*(my_double_varp + i),my_double_varp+i);
    }
    printf("\n");

    char *my_long_double_varp = &my_long_double_var;
    for (int i =0; i < (int) sizeof(my_long_double_varp); i++) {
        printf("%hi, %p\n",*(my_long_double_varp + i),my_long_double_varp+i);
    }


    return 0;
}