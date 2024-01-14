#include<stdio.h>
#include<stdlib.h>
int main(){
    int nombre , premier = 0;
    printf("Entrez un nombre :");
    scanf("%d",&nombre);

    if(nombre<=1){
        premier = 1 ;
    }

    for(int i = 1  ; i<= nombre ; i++){
        if(nombre % i == 0)
                premier++;
    }

    if(premier==2){
            printf("LE nombre est un premier");
    }else {
        printf("LE nombre n'est pas un premier");
    }



    return 0 ;

}