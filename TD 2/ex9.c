#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int menu(){
    printf("\n1- Saisir une chaine de caracteres\n");
    printf("\n2- Afficher la chaine de caracteres\n");
    printf("\n3- Afficher l'inverse de la chaine de caracteres\n");
    printf("\n4- Le nombre de mots dans la chaine de caracteres\n");
    printf("\n5- Quitter\n");
    printf("\n");
    printf("\nFaire un choix  ");
    int c ;
    scanf("%d",&c);
    printf("\n");
    return c ;
}

void saisir(char *ch){
    printf("\nSaisir la chaine : ");
    scanf(" %[^\n]", ch);

}
void afficher(const char *ch){
    puts(ch);
}

void inverse(char *ch){
    int len = strlen(ch)  , i , j ;
    char tmp ;
    for ( i=0 , j=len-1 ; i<j ; i++,j--){
        tmp = ch[i] ;
        ch[i] = ch[j];
        ch[j] = tmp ;
    }
}
void nbre_mots(const char *ch){
    int len = strlen(ch) ;
    int i , compteur = 0 ;
    for(i=0;i<len;i++){
        if(ch[i] ==' ')
            compteur = compteur + 1 ;
    }
    compteur = compteur + 1 ;
    printf("Le nombre de mots est %d" , compteur);
}
int main(){
    int choix ;
    char chaine[100]="";

    while(1){
       choix = menu();
        switch (choix)
        {
        case 1 :
            saisir(chaine);
            break;
        case 2 :
            afficher(chaine);
            break ;
        case 3 :
            //strrev(chaine);
            inverse(chaine);
            afficher(chaine);
            break ;
        case 4 :
            nbre_mots(chaine);
            break;
        case 5 :
            exit(0) ;
        default:
            break;
        }
    }

    return 0 ;
}
