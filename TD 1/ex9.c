#include<stdio.h>
#include<stdlib.h>

int main(){
    suite();
    return 0 ;
}

void suite(){
    int n, somme=0 , sommePos=0 , minPos ,  min , cpt=0 ;

    do{
        printf("Entrez une valeur");
        scanf("%d",&n);
        if(n!=999){
            cpt++ ;
            somme+=n ;
        }
        if(n>0 && n!= 999){
            sommePos+=n ;
        }

        if(min>n){
            min = n ;
        }
        if(minPos==0 && n>0 && n!=999)
            minPos=n ;

        if(n>0 && minPos>n){
            minPos = n;
        }

    }while(n!=999);
    printf("le total des nombres entrees est : %d \n",cpt);
    printf("la somme des valeurs entrees est : %d \n",somme);
    printf("la min entrees est : %d \n",min);
    printf("la somme des valeurs positives entrees est : %d \n",sommePos);
    printf("la min des valeur positives entrees est : %d \n",minPos);

}