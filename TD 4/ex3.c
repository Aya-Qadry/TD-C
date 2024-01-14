#include<stdio.h>
#include<stdlib.h>

struct etudiant{
    char nom[15],prenom[15] ;
    int cne ;
    float notes[4] , moyenne ;
};
int main(){
    struct etudiant etudiant[2] ;

    for(int i=0 ; i<3 ; i++){
        float somme = 0 ;
        printf("\nEtudiant N%d \n",i+1);
        printf("Entrez le nom \n");
        scanf("%s",etudiant[i].nom);
        printf("Entrez le prenom \n");
        scanf("%s",etudiant[i].prenom);
        printf("Entrez le CNE \n");
        scanf("%d",&etudiant[i].cne);
        printf("Entrez les notes \n ");
        for(int j=0 ; j<4 ; j++){
            printf("\nNote %d = ",j+1) ;
            scanf("%f",&etudiant[i].notes[j]);
        }
        for(int j =0 ; j<4 ; j++){
            somme = somme + etudiant[i].notes[j] ;
        }
        etudiant[i].moyenne = somme / 4 ;
    }

    for(int i=0 ; i<3 ; i++){
        int somme = 0 ;
        printf("\nEtudiant N%d ",i+1);
        printf("Nom %s \n ", etudiant[i].nom);
        printf("Prenom %s \n",etudiant[i].prenom);
        printf("CNE %d \n" , etudiant[i].cne);
        printf("Notes \n ");
        for(int j=0 ; j<4 ; j++){
            printf("\nNote %d = %f", j+1 , etudiant[i].notes[j]) ;
        }
        printf("Moyenne %f \n" , etudiant[i].moyenne);
    }


    float max = etudiant[0].moyenne ;
    int pos ;
    struct etudiant temp = etudiant[0];

    for (int i = 1; i < 3; i++) {
        if (etudiant[i].moyenne > temp.moyenne) {
            temp = etudiant[i];
        }
    }

    printf("Letudiant avec la plus haute moyenne est \n") ;
    printf("Nom %s \n ", temp.nom);
    printf("Prenom %s \n",temp.prenom);
    printf("CNE %d \n" , temp.cne);
    printf("Moyenne %f \n" , temp.moyenne);


    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (etudiant[j].moyenne < etudiant[j + 1].moyenne) {
                    struct etudiant temp = etudiant[j];
                etudiant[j] = etudiant[j+1];
                etudiant[j+1] = temp;
            }
        
    }


    printf("Apres le tri \n ");
    for(int i=0 ; i<3 ; i++){
        int somme = 0 ;
        printf("\nEtudiant N%d ",i+1);
        printf("Nom %s \n ", etudiant[i].nom);
        printf("Prenom %s \n",etudiant[i].prenom);
        printf("CNE %d \n" , etudiant[i].cne);
        printf("Moyenne %f \n" , etudiant[i].moyenne);
    }
}
