#include<stdio.h>


// retrun un int = position de la valeur cherché sinn -1
int search(float tab[] , int taille , float val){
    int pos = -1 , i ;
    for ( i = 0; i < taille; i++)
    {
        if(val == tab[i])
            pos = i ;
    }

    return pos ;

}

// faut faire la saisie
int main(){
    int i  , taille ;
    printf("Entrez la taille du tableau : \n");
    scanf("%d",&taille) ;

    float tab[taille] , valeur ;

    for ( i = 0; i < taille; i++)
    {
        printf("Element %d " , i+1) ;
        scanf("%f",&tab[i]);
    }
    printf("Entrez la valeur que vous cherchez : \n ");
    scanf("%f",&valeur) ;

    int pos = search(tab,taille,valeur) ;
    if(pos==-1){
        printf("Cette valeur n'existe pas dans le tableau") ;
    }else{
        printf("La position de %f est %d " , valeur , pos+1) ;
    }
}
