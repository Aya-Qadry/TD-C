#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crypt(char *c) {
    int len = 0;
    while (c[len] != '\0') {
        if ('a' <= c[len] && c[len] <= 'z') {
            c[len] = (c[len] - 'a' + 5) % 26 + 'a';
        } else if ('A' <= c[len] && c[len] <= 'Z') {
            c[len] = (c[len] - 'A' + 5) % 26 + 'A';
        }
        len++;
    }
}

int main() {
    char cMsg[] = "www";
    printf("%s\n", cMsg);
    crypt(&cMsg);
    printf("%s\n", cMsg);
    return 0;
}
