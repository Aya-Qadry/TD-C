#include<stdio.h>
#include<stdlib.h>

struct date{
    int jour ;
    char mois[10] ;
    int annee ;
};
struct employe{
    char nom[15] , prenom[15] ;
    struct date date_naissance , date_embauche ;
};
int main(){
    struct employe employe[2];
    for(int i=0 ; i<2 ; i++){
        printf("\nEmploye N%d ",i+1);
        printf("Entrez le nom \n");
        scanf("%s",employe[i].nom);
        printf("Entrez le prenom \n");
        scanf("%s",employe[i].prenom);
        printf("Entrez la date de naissane (jour mois annee') \n");
        scanf("%d",&employe[i].date_naissance.jour);
        scanf("%s",employe[i].date_naissance.mois );
        scanf("%d",&employe[i].date_naissance.annee);
        printf("Entrez la date dembauche (jour mois annee') \n");
        scanf("%d",&employe[i].date_embauche.jour);
        scanf("%s",employe[i].date_embauche.mois );
        scanf("%d",&employe[i].date_embauche.annee);    
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Nom : %s \n",employe[i].nom);
        printf("Prenom : %s \n",employe[i].prenom);
        printf("Date de naissance : %d %s %d \n", employe[i].date_naissance.jour ,employe[i].date_naissance.mois ,employe[i].date_naissance.annee);
        printf("Date dembauche : %d %s %d \n\n ", employe[i].date_embauche.jour ,employe[i].date_embauche.mois ,employe[i].date_embauche.annee);
    }

}
