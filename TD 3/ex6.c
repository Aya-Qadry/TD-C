#include <stdio.h>

void traitementPhrase(char *phrase) {

    char *dest = phrase;
    char dernierCaractere = ' ';

    while (*phrase != '\0') {
        if (*phrase == ' ' || *phrase == '\t') {
            if (dernierCaractere != ' ') {
                *dest++ = ' ';
            }
            dernierCaractere = ' ';
        } else {
            *dest++ = *phrase;
            dernierCaractere = *phrase;
        }
        ++phrase;
    }

    *dest = '\0';
}

int main() {
    char maPhrase[] = "   C'est     un    exemple     de     phrase    avec     des espaces   ";

    printf("Phrase originale :\n%s\n", maPhrase);

    traitementPhrase(maPhrase);

    printf("Phrase traitee :\n%s\n", maPhrase);

    return 0;
}
