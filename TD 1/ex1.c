#include<stdio.h>
#include<stdlib.h>
int main(){
    int a , b ;
    char op ;
    printf("Entrez une valeur ");
    scanf("%d",&a);
    printf("Entrez une deuxieme valeur ");
    scanf("%d",&b);
    printf("Entrez un operateur ");
    scanf(" %c",&op);

    switch(op){
        case '+' : printf("l'addition des deux nombres est %d",a+b);
        break ;
        case '-' : printf("la soustraction entre les deux chiffres est %d ",a-b);
        break ;
        case '*' : printf("la multiplication des deux chiffres est %d" , a*b);
        break ;
        case '/' :
        if(b==0){
            printf("erreur");
        }else
            printf("la division est de %d",a/b);
        break ;
        default : printf("re entrez les valeurs ");

    }
    return 0 ;
}