#include <stdio.h>
#include <string.h>

int main() {

    // Initialization de la structure type
    struct etudiant
    {
        char firstname[32];
        char lastname[32];
        struct adresse 
        {
            char rue[32];
            char ville[32];
            char postalCode[32];
        } adresse;
        short NoteProgrammationC;
        short NoteOS;
    };
    
    // Création d'une structure étudient pour 5 etudiant cpe
    struct etudiant etudiant_cpe[5];  

    // Remplissage données
    strcpy(etudiant_cpe[0].firstname, "Antoine");
    strcpy(etudiant_cpe[0].lastname, "Perrono");
    strcpy(etudiant_cpe[0].adresse.rue, "50 rue des charmettes");
    strcpy(etudiant_cpe[0].adresse.ville, "Villeurbanne");
    strcpy(etudiant_cpe[0].adresse.postalCode, "69100");
    etudiant_cpe[0].NoteOS = 15;
    etudiant_cpe[0].NoteProgrammationC = 6;
    
    strcpy(etudiant_cpe[1].firstname, "Rémy");
    strcpy(etudiant_cpe[1].lastname, "Dupuis");
    strcpy(etudiant_cpe[1].adresse.rue, "51 rue des charmettes");
    strcpy(etudiant_cpe[1].adresse.ville, "Villeurbanne");
    strcpy(etudiant_cpe[1].adresse.postalCode, "69100");
    etudiant_cpe[1].NoteOS = 14;
    etudiant_cpe[1].NoteProgrammationC = 15;

    strcpy(etudiant_cpe[2].firstname, "chartreuse");
    strcpy(etudiant_cpe[2].lastname, "Martin");
    strcpy(etudiant_cpe[2].adresse.rue, "52 rue des charmettes");
    strcpy(etudiant_cpe[2].adresse.ville, "Villeurbanne");
    strcpy(etudiant_cpe[2].adresse.postalCode, "69100");
    etudiant_cpe[2].NoteOS = 5;
    etudiant_cpe[2].NoteProgrammationC = 6;

    strcpy(etudiant_cpe[3].firstname, "lilou");
    strcpy(etudiant_cpe[3].lastname, "Pierre");
    strcpy(etudiant_cpe[3].adresse.rue, "53 rue des charmettes");
    strcpy(etudiant_cpe[3].adresse.ville, "Villeurbanne");
    strcpy(etudiant_cpe[3].adresse.postalCode, "69100");
    etudiant_cpe[3].NoteOS = 8;
    etudiant_cpe[3].NoteProgrammationC = 13;

    strcpy(etudiant_cpe[4].firstname, "suze");
    strcpy(etudiant_cpe[4].lastname, "Actimel");
    strcpy(etudiant_cpe[4].adresse.rue, "54 rue des charmettes");
    strcpy(etudiant_cpe[4].adresse.ville, "Villeurbanne");
    strcpy(etudiant_cpe[4].adresse.postalCode, "69100");
    etudiant_cpe[4].NoteOS = 17;
    etudiant_cpe[4].NoteProgrammationC = 15;


    for (int i = 0; i < 5; i++)
    {
        printf("Un élève est : \n");
        printf("- %s\n", etudiant_cpe[i].firstname);
        printf("- %s\n", etudiant_cpe[i].lastname);
        printf("- Il habite au %s %s\n", etudiant_cpe[i].adresse.rue, etudiant_cpe[i].adresse.ville);
        printf("- Sa note en OS est de %hd\n", etudiant_cpe[i].NoteOS);
        printf("- Sa note en C est de %hd\n", etudiant_cpe[i].NoteProgrammationC);

    }


   return 0;

}