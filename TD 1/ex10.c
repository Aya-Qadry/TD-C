
#include <stdio.h>

int main() {
    int N;
    printf("Entrez le nombre de lignes du triangle : ");
    scanf("%d", &N);

     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N * 2 - 1; j++) {
            if (i == N - 1 || j == N - 1 - i || j == N - 1 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
         printf("\n");
    }

    return 0;
}
