#include <stdio.h>

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : chaine.c - Création de fonction concaténation, copie, et de calcul de longueur de string.
 * 
*/


// function qui permet de calculer la taille d'une chaine de caractere
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

// function permettant de copier une chaine de caractere dans une autre.
void string_copy(char* string, char* string_copied) {
    for (int i = 0; i < 32; i++)
    {
        string_copied[i] = string[i];
    }
    
}

// function permettant d'afficher facilement une chaine de caractere
void print_string(char* string) {
    for (int i = 0; i < 32; i++)
    {
        printf("%c", string[i]);
    }
}

// function permettant de concatener deux chaine de caractere.
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

    // copie de la chaine de caractere et affichage de la chaine obtenue
    string_copy(string, string_copied);
    print_string(string_copied);

    char string2[33] = "tete";
    //concatenation de notre chaine de caractere avec le more "tete" et affichage du résultat
    concatenate(string, string2);
    print_string(string);

    return 0;
}