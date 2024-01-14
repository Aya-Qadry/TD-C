#include<stdio.h>
#include<stdlib.h>

void affiche_matrice(int Mat[5][5]){
    printf("\nLes elements de la matrice sont : \n\n");
    for(int i=0 ; i<5 ; i++){
        if(i==0) {
            for(int c = 1 ; c<6 ; c++ )
                printf("[%d] \t",c);
            printf("\n");
        }
        for(int j=0 ; j<5 ; j++){
            printf("%d \t",Mat[i][j]);
            if(j==4){
                printf("\n");
            }
        }
    }
}

int main(){

    int Mat[5][5] = {
        {1,2,3,4,5} ,
        {6,7,8,9,10} ,
        {11,12,13,14,15} ,
        {16,17,18,19,20} ,
        {20,21,22,23,24}
    };

    affiche_matrice(Mat) ;

   /* for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            printf("Element %d  " , j+1);
            scanf("%d",&Mat[i][j]);
        }
    } */

}
