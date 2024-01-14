#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int distanceH(const char *s1, const char *s2) {
    int i, hamming = 0, len = strlen(s1);

    for (i = 0; i < len; i++) {
        if (s1[i] == s2[i])
            hamming = hamming + 1;
    }
    return hamming;
}

int distanceH_langage(const char **langage, int nombreChaines, int longueurChaine) {
    int distance = 1 ;

    for (int i = 0; i < nombreChaines; i++) {
        for (int j = i + 1; j < nombreChaines; j++) {
            if (strcmp(langage[i], langage[j]) == 0) {
                distance = distance + 1;
            }
        }
    }

    return distance;
}

void binaire(int N1 , int N2, char *bin1 , char *bin2) {
    int reste = 0, j = 7;

    do {
        reste = N1 % 2;
        bin1[j] = '0' + reste;
        j = j - 1;
        N1 = N1 / 2;
    } while (N1 > 0);

    while (j >= 0) {
        bin1[j] = '0';
        j = j-1;
    }
    j=7  ;
    reste = 0;
     do {
        reste = N2 % 2;
        bin2[j] = '0' + reste;
        j = j - 1;
        N2 = N2 / 2;
    } while (N2 > 0);

    while (j >= 0) {
        bin2[j] = '0';
        j = j-1;
    }


}

int distanceNombre(char *a, char *b) {
    int hamming = 0;

    for (int i = 0; i < 8; i++) {
        if (a[i] != b[i])
            hamming = hamming + 1;
    }
    return hamming;
}


int main() {
    char ch1[100], ch2[100];
    char bin1[7] , bin2[7];

    int hamming , N1 , N2 ;

    printf("Entrez une chaine de caracteres\n");
    scanf("%s", ch1);
    printf("Entrez une autre chaine de caracteres\n");
    scanf("%s", ch2);

    hamming = distanceH(ch1, ch2);
    printf("La distance entre %s et %s est de : %d\n", ch1, ch2, hamming);

    const char *langage[] = {"aabbn", "xayy", "tghy", "xgyy"};
    int nombreChaines = sizeof(langage) / sizeof(langage[0]);
    int longueurChaine = strlen(langage[0]);

    int distance = distanceH_langage(langage, nombreChaines, longueurChaine);
    printf("La distance du langage est de : %d\n", distance);

    printf("Entrez une valeur decimale : \n") ;
    scanf("%d",&N1);
    printf("Entrez une deuxieme valeur decimale : \n") ;
    scanf("%d",&N2);
    binaire(N1,N2,bin1,bin2);

    printf("La distance hamming entre %d et %d est : %d \t ", N1, N2, distanceNombre(bin1, bin2));

    return 0;
}
