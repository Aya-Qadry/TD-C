#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void lecture(char *nom){

    printf("Entrez un nom \n");
    scanf("%s" , nom);

}
int comp(char *nom){
    int len = strlen(nom);
    if(len>10){
        return 1 ;
    }else{
        return 0 ;
    }
}
int main(){
    char nom[20] ;
    int nbre = 0 ;
    do{
        lecture(nom);
        nbre = nbre + comp(nom) ;
    }while(strcmp(nom,"fin")!=0);

    printf("Le nombre de noms comportants plus de 10 caracteres est %d" , nbre ) ;
}
