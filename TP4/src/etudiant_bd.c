#include <stdio.h>
#include <string.h>

const int NUMBER_STUDENTS = 5;

/*
 *  Auteur : Antoine Perrono
 *
 *  Fichier : etudiant_bd.c - Gestion de données avec une structure 
 * 
*/

void ecrire_dans_fichier(char *nom_de_fichier, char *message) {

    FILE* file = fopen(nom_de_fichier, "a+");

    fputs(message, file);

    fclose(file);

}

int main() {

    // Initialization de la structure étudiant, contenant les différentes données voulu
    struct etudiant
    {
        char firstname[32];
        char lastname[32];
        // utilisation d'une autre structure pour décrire l'adresse d'un étudiant.
        struct adresse 
        {
            char rue[255];
            char ville[255];
            char postalCode[32];
        } adresse;
        int NoteProgrammationC;
        int NoteOS;
    };
    
    // Création d'une structure étudient pour 5 etudiant cpe
    struct etudiant etudiant_cpe[NUMBER_STUDENTS];  

    for (int i = 0; i < NUMBER_STUDENTS; i++)
    {
        printf("Prenom : ");
        scanf("%s", &etudiant_cpe[i].firstname);
        printf("Nom : ");
        scanf("%s", &etudiant_cpe[i].lastname);
        printf("Rue : ");
        scanf(" %[^\n]", &etudiant_cpe[i].adresse.rue);
        printf("Ville : ");
        scanf(" %[^\n]", &etudiant_cpe[i].adresse.ville);
        printf("Code postale : ");
        scanf("%s", &etudiant_cpe[i].adresse.postalCode);
        printf("Note OS : ");
        scanf("%i", &etudiant_cpe[i].NoteOS);
        printf("Note C : ");
        scanf("%i", &etudiant_cpe[i].NoteProgrammationC);
        
        char student[1000];

        sprintf(student, "%s, %s, %s, %s, %s, %i, %i\n",    etudiant_cpe[i].firstname,
                                                            etudiant_cpe[i].lastname,
                                                            etudiant_cpe[i].adresse.rue,
                                                            etudiant_cpe[i].adresse.ville,
                                                            etudiant_cpe[i].adresse.postalCode,
                                                            etudiant_cpe[i].NoteOS,
                                                            etudiant_cpe[i].NoteProgrammationC);
        
        ecrire_dans_fichier("etudiant.txt", student);
        
        printf("|---------------|\n");

    }




}