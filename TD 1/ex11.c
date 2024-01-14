#include<stdio.h>
#include<stdlib.h>
int main(){
    int valeur = 0  , nbMenu;
    printf("Entrez une valeur ");
    scanf("%d",&valeur);
    do{
        printf("\n1.Ajouter 2 \n");
        printf("2.Multiplier par 3 \n");
        printf("3.Soustraire 5 \n");
        printf("4.Quitter \n");
        printf("\nEntrez une valeur entre 1 et 4\n");
        scanf("%d",&nbMenu);
        switch(nbMenu){
            case 1 :valeur+=2;
                    printf("La nouvelle valeur est %d",valeur);
                    break ;
            case 2 :valeur*=3 ;
                    printf("La nouvelle valeur est %d",valeur);
                    break ;
            case 3 :valeur-=5 ;
                    printf("La nouvelle valeur est %d",valeur);
                    break ;
            case 4 :printf("Sortie du programme") ;
                    break ;
            default :printf("Valeur erronee");
                    break ;
        }
    }while(nbMenu!=4);

    return 0 ;
}