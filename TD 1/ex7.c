#include<stdio.h>
#include<stdlib.h>
int main(){
    int nombre , carre ;
    int Tab[20] , i ;

    for(i=0 ; i<20 ; i++){
        printf("Entrez un nombre :");
        scanf("%d",&Tab[i]);
    }
    for(i=0 ; i<20 ; i++){
        if(Tab[i]%2 == 0){
            carre = Tab[i]*Tab[i];
            printf("Le carre de %d est %d" , Tab[i] , carre);
            printf("\n");
        }
    }
}