#include<stdio.h>
#include<stdlib.h>

float somme_usuel(float t[3][4]){
    int i , j ;
    float somme = 0.0 ;
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 4; j++)
       {
            somme = somme + t[i][j] ;
       }

    }
    return somme ;
}

float somme_pointeur(float t[3][4]){
    int i , j ;
    float somme = 0.0 ;
    // automatiquement pointe sur &t[0][0]
    float *p = t;
    for (int i = 0; i < 3 * 4; i++) {
        // la valeur dans l'adrrsse de p+i
        somme += *(p + i);
    }
    return somme ;
}

int main(){
    float t[3][4] = {{1.1,2.1,3.1,4.1},
                    {5.2,6.2,7.2,8.2},
                    {9.3,10.3,11.3,12.3}};
    printf("La somme avec la premiere methode est %.2f \n", somme_usuel(t));
    printf("La somme avec la deuxieme methode est %.2f \n", somme_pointeur(t));

}
