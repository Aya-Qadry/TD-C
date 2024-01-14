#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int nb_occurrence(char t[] , int n , char c){
    int occ = 0 , i  ;
    for ( i = 0; i < n; i++)
    {
        if(c == t[i]){
            occ = occ + 1 ;
        }
    }
    return occ ;
}
void pos_car(char t[] , int n , char c, int *p_occ , int *d_occ){
    for (int i = 0; i < n; i++)
    {
        if(c == t[i]){
            if(*p_occ == 0){
                *p_occ = i+1 ;
            }
            *d_occ = i+1 ;
        }
    }
}

int main(){
    char t[100] , c ;
    printf("Entrez une chaine de caracteres \n");
    scanf("%s",t);
    printf("Entrez un caractere a chercher \n");
    scanf(" %c",&c);
    int nb_occ = nb_occurrence(t,strlen(t),c);
    printf("Le nombre doccurence de %c est %d \n" , c ,nb_occ) ;
    int *p_occ , *d_occ ;
    p_occ = 0 ;
    pos_car(t,strlen(t),c,&p_occ,&d_occ);
    printf("Le premiere occurence de %c est %d  , sa derniere est %d \n" , c ,p_occ , d_occ) ;

}
