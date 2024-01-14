#include<stdio.h>
#include<stdlib.h>


void initialisation(int iNb_jours[]){
    int i  ;
    for (i = 1; i <= 12; i++){

        if(i == 2){
            iNb_jours[i] = 28 ;
        }
        else if ( ((i%2)==0 && i<=7) || ((i%2)!=0 && i>7))
        {
            iNb_jours[i] = 30 ;
        }
        else{
            iNb_jours[i] = 31 ;
        }
    }
}

void affichage(int iNb_jours[]){
    int i ;
    for ( i = 1; i <= 12; i++)
    {
        printf("Il y a %d jours dans le mois %d \n" , iNb_jours[i] , i);
    }
}
void affichage_par_mois(int iNb_jours[],int mois){
   printf("\nIl y a %d jours dans le mois %d \n" , iNb_jours[mois] , mois);
}

int main(){
    int iNb_jours[12] , mois ;
    initialisation(iNb_jours);
    affichage(iNb_jours);

    printf("\nSaisir un mois de votre choix ");
    scanf("%d",&mois);

    affichage_par_mois(iNb_jours,mois);

}
