#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nb_elem;
    int *tab;
} TypeTableau;

TypeTableau CreerTableau(int n) {
    TypeTableau T;
    T.nb_elem = n;
    T.tab = (int *)malloc(n * sizeof(int)); 

    if (T.tab == NULL) { 
        exit(0);
    }

    return T;
}

void DetruireTableau(TypeTableau T) {
    free(T.tab);
}

void SaisieTableau(TypeTableau T) {
    printf("Saisie des elements du tableau :\n");
    for (int i = 0; i < T.nb_elem; ++i) {
        printf("Element %d : ", i + 1);
        scanf("%d", &T.tab[i]);
    }
}

void AfficherTableau(TypeTableau T) {
    printf("Contenu du tableau :\n");
    for (int i = 0; i < T.nb_elem; ++i) {
        printf("%d ", T.tab[i]);
    }
    printf("\n");
}

TypeTableau DoublerTableau(TypeTableau T) {
    TypeTableau nouveauTableau;
    nouveauTableau.nb_elem = T.nb_elem;
    nouveauTableau.tab = (int *)malloc(T.nb_elem * sizeof(int)); 

    if (nouveauTableau.tab == NULL) { 
        exit(0);
    }

    for (int i = 0; i < T.nb_elem; ++i) {
        nouveauTableau.tab[i] = 2 * T.tab[i];
    }

    return nouveauTableau;
}

int main() {
    int n;

    printf("Entrez la nb_elem du tableau : ");
    scanf("%d", &n);

    TypeTableau T = CreerTableau(n);

    SaisieTableau(T);

    printf("\nTableau initial :\n");
    AfficherTableau(T);

    TypeTableau T_double = DoublerTableau(T);

    printf("\nTableau avec les elements doubles :\n");
    AfficherTableau(T_double);

    DetruireTableau(T);
    DetruireTableau(T_double);

    return 0;
}
