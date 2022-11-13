#include <stdio.h>

int main() {
    char my_char_var = 'a';
    unsigned char my_uchar_var = 234;
    short my_short_var = -12;
    unsigned short my_ushort_var = 65535;
    int my_int_var = 12;
    unsigned int my_uint_var = 3456;
    long my_long_var = -1234553L;
    unsigned long my_ulong_var = 234556UL;
    long long my_llong_var = 1123345LL;
    unsigned long long my_ullong_var = 1234567ULL;
    float my_float_var = 3.14;
    double my_double_var = 3.14E-12;
    long double my_long_double_var = 3.14E-22;
    
    printf("Une variable Signed Char est %hd.\n", my_char_var);
    printf("Une variable Unsigned Char est %hd.\n", my_uchar_var);
    printf("Une variable Signed short est %hd.\n", my_short_var);
    printf("Une variable Unsigned short est %hd.\n", my_ushort_var);
    printf("Une variable Signed int est %i.\n",my_int_var);
    printf("Une variable Unsigned int est %i.\n", my_uint_var);
    printf("Une variable Signed long int est  %li .\n", my_long_var );
    printf("Une variable Unsigned long int est  %li .\n", my_ulong_var);
    printf("Une variable Signed long long int est  %lli .\n", my_llong_var);
    printf("Une variable Unsigned long long int est  %lli .\n", my_ullong_var);
    printf("Une variable float est  %f.\n", my_float_var);
    printf("Une variable long double est  %f .\n", my_double_var);
    printf("Une variable long double est %Lf .\n", my_long_double_var);

    return 0;
}