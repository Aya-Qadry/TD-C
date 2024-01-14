#include <stdio.h>

struct Contact {
    char nom[30];
    char prenom[30];
    char telephone[15];
};


void saisie(struct Contact *contact) {
    printf("Nom : ");
    scanf("%s", contact->nom);
    printf("Prenom : ");
    scanf("%s", contact->prenom);
    printf("Telephone : ");
    scanf("%s", contact->telephone);
}


void afficher(struct Contact repertoire[], int taille) {
    printf("\n Contacts ");
    for (int i = 0; i < taille; i++) {
        printf("Contact %d :\n", i + 1);
        printf("Nom : %s\n", repertoire[i].nom);
        printf("Prénom : %s\n", repertoire[i].prenom);
        printf("Téléphone : %s\n", repertoire[i].telephone);
        printf("\n");
    }
}

int main() {
    struct Contact repertoire[50];
    int nbre;

    printf("Nombre de contacts a saisir : ");
    scanf("%d", &nbre);

    for (int i = 0; i < nbre; i++) {
        printf("\n \tContact %d  \n ", i + 1);
        saisie(&repertoire[i]);
    }

    afficher(repertoire, nbre);


}
