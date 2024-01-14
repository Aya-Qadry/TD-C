#include <stdio.h>
#include <stdlib.h>



int estPalindrome(char *nom) {

    int len = 0;
    while (nom[len] != '\0') {
        len++;
    }
    char *p_debut = nom;
    char *p_fin = nom + len - 1;


    while (p_debut < p_fin) {
        if (*p_debut != *p_fin) {
            return 0;
        }

        p_debut++;
        p_fin--;
    }

    return 1;
}

int main() {
    char *nom = (char*)malloc(30 * sizeof(char));
    printf("Entrez un nom: ");
    scanf("%s", nom);
    
    if (estPalindrome(nom)) {
        printf("%s est un palindrome.\n", nom);
    } else {
        printf("%s n'est pas un palindrome.\n", nom);
    }

    return 0;
}
