#include<stdio.h>
#include<stdlib.h>
int main(){
    int nombrePhotocopies ;
    float prix ;
    printf("Entrez le nombre de photocopies ");
    scanf("%d",&nombrePhotocopies);
    if(nombrePhotocopies<=10){
        prix = 1 ;
    }else if (nombrePhotocopies<=30){
        prix = 10*1 + (nombrePhotocopies-10)*0.6 ;
    }else{
        prix = 10*1 + 20*0.6 + (nombrePhotocopies-30)*0.4;
    }
    printf("Votre facture de %d photocopies est de %.2f DH", nombrePhotocopies , prix);

    return 0 ;
}