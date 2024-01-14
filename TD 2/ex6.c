#include <stdio.h>

int main() {
    char ch;
    int chiffres = 0, espacements = 0, autres = 0;

    printf("Entrez une chaine (& pour finir la saisie) :\n");

    while ((ch = getchar()) != '&') {
        if (ch >= '0' && ch <= '9') {
            chiffres++;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            espacements++;
        } else {
            autres++;
        }
    }

    printf("Chiffres: %d\tEspacements: %d\tAutres: %d\n", chiffres, espacements, autres);

    return 0;
}
