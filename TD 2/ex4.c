#include<stdio.h>
#include<stdlib.h>


int longueur(const char *tab){
    int len = 0 ;
    while(tab[len]!='\0'){
        len++;
    }
    return len ;
}

int main(){
    char Tab1[]="Hola" ;
    char Tab2[]="Whats this" ;
    int len ;
    len = longueur(Tab1);
    printf("La longueur de la chaine est %d" , len) ;
    len = longueur(Tab2);
    printf("\nLa longueur de la chaine est %d" , len) ;
}
