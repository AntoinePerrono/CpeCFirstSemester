#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : ptrvariables.c - Utilisation de pointeur et exemple de valeur pour chaque type
 * 
*/

int main() {

    char *my_char_var = 'a';
    unsigned char *my_uchar_var = 234;
    short *my_short_var = -12;
    unsigned short *my_ushort_var = 65535;
    int *my_int_var = 12;
    unsigned int *my_uint_var = 3456;
    long *my_long_var = -1234553;
    unsigned long *my_ulong_var = 234556;
    long long *my_llong_var = 1123345;
    unsigned long long *my_ullong_var = 1234567;
    
    float *my_float_var;
    double *my_double_var;
    long double *my_long_double_var;

    /*
    *my_float_var = 3.14;

    *my_double_var = 3.14;
    *my_long_double_var = 3.14;
    */


    //Affichage des valeurs des variables des différents types
    printf("Type: 'char' valeur: %s / adresse: %p\n",my_char_var,&my_char_var);
    printf("Type: 'unsigned char' valeur: %hhn / adresse: %p\n",my_uchar_var,&my_uchar_var);
    printf("Type: 'unsigned short' valeur: %hn / adresse: %p\n",my_short_var,&my_short_var);
    printf("Type: 'short' valeur: %hn / adresse: %p\n",my_ushort_var,&my_ushort_var);
    printf("Type: 'int' valeur: %ls / adresse: %p\n",my_int_var,&my_int_var);
    printf("Type: 'unsigned int' valeur: %ls / adresse: %p\n",my_uint_var,&my_uint_var);
    printf("Type: 'long int' valeur: %ln / adresse: %p\n",my_long_var,&my_long_var);
    printf("Type: 'unsigned long int' valeur: %ln / adresse: %p\n",my_ulong_var,&my_ulong_var);
    printf("Type: 'long long int' valeur: %lln / adresse: %p\n",my_llong_var,&my_llong_var);
    printf("Type: unsigned long long int' valeur: %lln / adresse: %p\n",my_ullong_var,&my_ullong_var);
    /*
    printf("Type: 'float' valeur: %f / adresse: %p\n",*my_float_var,&my_float_var);
    printf("Type: 'double' valeur: %f / adresse: %p\n",my_double_var,&my_double_var);
    printf("Type: 'long double' valeur: %Lg / adresse: %p\n",my_long_double_var,&my_long_double_var);
    */

    return 0;
}