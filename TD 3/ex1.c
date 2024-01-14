#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inverse(char *nom){
    char *p_debut = nom ;
    char *p_fin = nom +strlen(nom) -1 ;
    char tmp ;
    while(p_debut<p_fin){
        if(p_debut != "" && p_fin != ""){
            tmp = *p_debut ;
            *p_debut = *p_fin ;
            *p_fin = tmp ;
        }
        p_debut = p_debut + 1 ;
        p_fin = p_fin - 1 ;
    }
}

int main(){
    char *nom = (char*)malloc(30*sizeof(char));

    printf("Entrez un nom ") ;
    scanf("%s",nom);

    inverse(nom) ;
    printf("Nom inverse : %s" , nom) ;
    free(nom);

}
