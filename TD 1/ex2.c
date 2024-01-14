#include<stdio.h>
#include<stdlib.h>
int main(){
    int age ;
    char sexe ;
    printf("Veuillez entrer votre age : ");
    scanf("%d",&age);
    printf("Veuillez entrer votre sexe ; f si femme , h si homme ");
    scanf(" %c",&sexe);

    if( (sexe=='h' && age>=20) || ((sexe=='f') && (age>=18 && age<=35))){
            printf("Vous devrez payer les impots");
    }else{
            printf("Vous necessitez pas de payer les impots");
    }
    return 0 ;

}