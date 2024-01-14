#include<stdio.h>
#include<stdlib.h>
int main(){

    float prix , remise , prixFinal;
    printf("Entrez le prix du produit :");
    scanf("%f",&prix);
    if(prix<=100){
        remise = prix*0.3 ;
        prixFinal = prix - remise ;
        printf("Prix intial : %.2f , Remise : %.2f , Prix final : %.2f", prix , remise , prixFinal);
    }else if(prix<=200){
        remise = prix*0.4 ;
        prixFinal = prix - remise ;
        printf("Prix intial : %.2f , Remise : %.2f , Prix final : %.2f", prix , remise , prixFinal);
    }else if(prix>200){
        remise = prix*0.5 ;
        prixFinal = prix - remise ;
        printf("Prix intial : %.2f , Remise : %.2f , Prix final : %.2f", prix , remise , prixFinal);
    }
    return 0 ;
}