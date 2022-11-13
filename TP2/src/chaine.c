#include <stdio.h>

int string_length(char string[32]) {
    int length = 0;
    int i = 0;
    while (i < 32)
    {
        if (string[i] != NULL)
            length++;        
        i++;
    }

    // fgets place en dernier caractere un "\0", il faut donc l'enlever
    length--;

    return length;
}


void string_copy(char* string, char* string_copied) {
    for (int i = 0; i < 32; i++)
    {
        string_copied[i] = string[i];
    }
    
}

void print_string(char* string) {
    for (int i = 0; i < 32; i++)
    {
        printf("%c", string[i]);
    }
}

void concatenate(char* string1, char* string2) {
    int length = string_length(string1);
    
    for (int i = length; i <= length + string_length(string2); i++)
    {
        string1[i] = string2[i-length];
    }
    
}

int main() {

    char string[32], string_copied[32];

    printf("Votre mot: ");
    /* 
    fgets agit comme un scanf mais permet de mettre dans un buffer les données et ainsi lire tout les caracteres.
    fgets va lire à n-1 caractere, ainsi en précisant n = 32, en réalité, il ne lira que les 31 premiers caracteres.
    */

    fgets(string, 32, stdin);
    
    // taille de la chaine de caractère
    int length = string_length(string);
    printf("taille: %d\n", length);

    string_copy(string, string_copied);
    print_string(string_copied);

    char string2[33] = "tete";
    
    concatenate(string, string2);
    print_string(string);

    return 0;
}