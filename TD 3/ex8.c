#include <stdio.h>

void compressRLE(int tableau[], int taille) {
    int i = 0;

    while (i < taille) {
        int compteur = 1;
        while (i < taille - 1 && tableau[i] == tableau[i + 1]) {
            ++compteur;
            ++i;
        }
        printf("\t %d%d", compteur, tableau[i]);

        ++i;
    }
}

int main() {
    // Exemple d'utilisation avec un tableau d'entiers
    int tableau[] = {4,4,4,4,4,3,3,3,2,2,1,1,1};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau original : ");
    for (int i = 0; i < taille; ++i) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Codage RLE : ");
    compressRLE(tableau, taille);
    printf("\n");

}
