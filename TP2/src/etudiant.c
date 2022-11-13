#include <stdio.h>

int main() {
    char student[5][5][100] = {
        {"Perrono","Antoine","50 rue des charmettes, 69100, Villeurbanne","15","6"},
        {"Dupuis","Rémy","51 rue des charmettes, 69100, Villeurbanne","14","15"},
        {"Martin","chartreuse","52 rue des charmettes, 69100, Villeurbanne","5","6"},
        {"Pierre","lilou","53 rue des charmettes, 69100, Villeurbanne","8","13"},
        {"Actimel","suze","54 rue des charmettes, 69100, Villeurbanne","17","15"}
    };

    for (int i = 0; i < 5; i++)
    {
        printf("Un élève est : \n");
        for (int j = 0; j < 5; j++)
        {
            printf("- %s \n", student[i][j]);
        }
        printf("\n");
    }
    

   return 0;

}