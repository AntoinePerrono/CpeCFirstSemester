#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier(char *nom_dossier) {
    DIR *dossier;
    struct dirent *entree;
    dossier = opendir(nom_dossier);
    if (dossier == NULL) {
        printf("Erreur lors de l'ouverture du dossier");
        exit(1);
    }
    while ((entree = readdir(dossier)) != NULL){
        if (strcmp(entree->d_name, "..") && strcmp(entree->d_name, "."))
            printf("%s\n", entree->d_name);
    }
    closedir(dossier);
}

void lire_dossier_recursif(char *nom_dossier) {
    DIR *dossier;
    struct dirent *entree;
    dossier = opendir(nom_dossier);
    if (dossier == NULL) {
        printf("Erreur lors de l'ouverture du dossier");
        exit(1);
    }
    while ((entree = readdir(dossier)) != NULL){
        if (strcmp(entree->d_name, "..") && strcmp(entree->d_name, "."))
            printf("%s\n", entree->d_name);
        if (entree->d_type == DT_DIR) {
            char buffer[1000];
            strcpy(buffer, nom_dossier);
            strcat(buffer, "/");
            strcat(buffer, entree->d_name);
            lire_dossier_recursif(buffer);
        }
    }
    closedir(dossier);
}

void lire_dossier_iteratif(char *nom_dossier) {

}

int main() {
    //lire_dossier("test");
    //lire_dossier_recursif("test");
    lire_dossier_iteratif("test");
    return 0;
}