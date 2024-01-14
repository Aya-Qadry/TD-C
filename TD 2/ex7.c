#include<stdio.h>
#include<stdlib.h>


int addition(int a , int b){
    return a+b ;
}
int multiplication(int a , int b){
    return a*b ;
}
int division(int a , int b){
    if(b!=0){
        return a/b ;
    }else{
        printf("Valeur invalide ");
        return 0 ;
    }
}
int soustraction(int a , int b){
    return a-b;
}
int modulo(int a , int b){
    return a%b;
}

int main(){
    char choix = 'O';

    do{
        char operation[30], op, operateurs[5] = {'+', '-', '*', '/', '%'}, a[10], b[10];
        int i , j , k  , m  , posOp=-1;

        printf("Entrez une operation ") ;
        scanf("%s" , operation);

        for(i=0 , k=0  , m=0; operation[i]!='\0' ; i++){
            if(operation[i]>='0' && operation[i]<='9'){
                if(posOp == -1 ){
                    a[k] = operation[i] ;
                    k=k+1 ;
                }
                else{
                    b[m] = operation[i] ;
                    m=m+1;
                }
            }
            else{
                for(j=0 ; j<5 ; j++){
                    if(operation[i] == operateurs[j]){
                        posOp = i ;
                        op = operation[i] ;
                    }
                }
            }

        }

        a[k] = '\0';
        b[m] = '\0';

        // sert a savoir si un caractere ne peut pas etre converti (pointe)
        char *output;

        int val_a = strtol(a, &output , 10);
        int val_b = strtol(b, &output , 10 );

        int resultat ;

        switch (op)
        {
        case '+' :
            resultat =  addition(val_a,val_b);
            printf("%d %c %d = %d " , val_a , op , val_b , resultat);
            break;
        case '-' :
            resultat = soustraction(val_a,val_b);
            printf("%d %c %d = %d " , val_a , op , val_b , resultat);
            break;
        case '*' :
            resultat = multiplication(val_a,val_b);
            printf("%d %c %d = %d " , val_a , op , val_b , resultat);
            break;
        case '/' :
            resultat = division(val_a,val_b);
            printf("%d %c %d = %d " , val_a , op , val_b , resultat);
            break;
        case '%' :
            resultat = modulo(val_a,val_b);
            printf("%d %c %d = %d " , val_a , op , val_b , resultat);
            break;
        default:
            break;
        }
        printf("\nVoulez vous continuer ? O pour oui , N pour non  ");
        scanf(" %c" , &choix) ;
    }while(choix == 'O' || choix == 'o');

    if(choix == 'N' || choix == 'n'){
        exit(0);
    }
    return 0 ;
}
