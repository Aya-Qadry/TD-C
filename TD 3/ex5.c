#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int frequence_mot(const char *phrase ,const char *mot){
    int i = 0 , occ=0;
    int len_phrase = strlen(phrase) ;
    int len_mot = strlen(mot);
    for(i=0 ; i <= len_phrase - len_mot ; i++ ){
        if((strncmp(phrase+i,mot,len_mot))==0){
            occ=occ+1;
        }
    }
    return occ ;
}

int main(){
    char *phrase = "Cette phrase contient un mot et autre mot , et plein de mot" ;
    char *mot = "mot";
    printf("Le mot %s se repete %d fois dans : \n %s" , mot , frequence_mot(phrase , mot) , phrase);
}
