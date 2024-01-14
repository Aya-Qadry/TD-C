#include<stdio.h>
#include<stdlib.h>
int main(){
    int nombre , nbPair;

    printf("Entrez un nombre :");
    scanf("%d",&nombre);

    if(nombre%2 == 0 && nombre>0){
        for(int i=2 ; i < nombre ; i+=2){
            //if(i!=0){
            printf(" %d \n",i);
            //}
        }
    }else{
        printf("Le nombre que vous avez entrez nest pas pair");
    }
    return 0 ;
}