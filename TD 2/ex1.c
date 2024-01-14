#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Nmax 20
#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

int i ;
char menu(){
    char choix ;
    printf("\nA- Saisie et affichage\n");
    printf("B- Moyenne\n");
    printf("C- Suppression du Max et affichage\n");
    printf("D- Suppression du Min et affichage\n");
    printf("E- Ajout d'un entier a une position donnee\n");
    printf("Q- Quitter\n\n");
    printf("\nFaire un choix du menu\n");
    scanf(" %c",&choix);
    return choix;
}
void saisie(int Tab[] , int NE){
        for(i=0 ; i<NE ; i++){
            printf("Element N %d ",i+1);
            scanf("%d",&Tab[i]);
        }
}
void affichage(int Tab[] , int NE){
    printf("Les elements du Tableau : \n");
    for(i =0 ; i<NE ; i++){
        printf("Element N %d = %d\n",i+1,Tab[i]);
    }
}

void moyenne(int Tab[] , int NE){
    int somme = 0 ;
    float moyenne ;

    for(i=0;i<NE;i++){
        somme += Tab[i] ;
    }
    moyenne = somme / NE ;
    printf("\nLa moyenne des elements du tableau est %.2f \n",moyenne);
}

int max_element(int Tab[] , int NE){
    int max = 0 , pos =0 ;
    for (i=0;i<NE;i++){
        if(max<Tab[i]){
            max = Tab[i];
            pos = i ;
        }
    }
    return pos ;
}
int supp_max(int Tab[] , int NE , int pos){
    for(i=pos;i<NE;i++){
        Tab[i]=Tab[i+1];
    }
    NE = NE - 1 ;
    return NE ;
}
int min_element(int Tab[] , int NE){
    int min = Tab[0] , pos =0 ;
    for (i=0;i<NE;i++){
        if(min>Tab[i]){
            min = Tab[i];
            pos = i ;
        }
    }
    return pos ;
}
int supp_min(int Tab[] , int NE , int pos){
    for(i=pos;i<NE;i++){
        Tab[i]=Tab[i+1];
    }
    NE = NE - 1 ;
    return NE ;
}

void ajout(int Tab[] , int NE ){
    int val , pos , temp ;
    printf("Entrez la valeur a inserer ");
    scanf("%d" , &val);
    printf("Entrez la position ou inserer ");
    scanf("%d" , &pos) ;
    pos = pos - 1 ;

    for(i=pos ; i<NE ;i++){
        temp = Tab[i] ;
        Tab[i] = val ;
        val = Tab[i+1];
    }
}

int main(){
    int Tab[Nmax];
    int NE , posMax ,posMin;
    char choix ;

    while(1){
       // system(CLEAR);
        choix = menu();
        switch (choix){

        case 'A' :
          case 'a':

            printf("Saisir le nombre d'elements a inserer : ");
            scanf("%d",&NE);
            if(NE>Nmax){
                printf("Saisir un nombre inferieur a 20");
            }else{
                saisie(Tab,NE) ;
                printf("\n\n");
                affichage(Tab,NE);
            }
            break;
        case 'B' :
          case 'b' :
            moyenne(Tab,NE);
            break ;
        case 'C' :
            case 'c' :
            posMax = max_element(Tab,NE);
            NE = supp_max(Tab,NE,posMax);
            affichage(Tab,NE);
            break ;
        case 'D' :
            case 'd' :
            posMin = min_element(Tab,NE);
            printf("min pos %d",posMin);
            NE = supp_min(Tab,NE,posMin);
            affichage(Tab,NE);
            break ;
        case 'E' :
            case 'e' :
            ajout(Tab , NE) ;
            affichage(Tab,NE);
            break ;
        case 'Q' :
            case 'q' :
            exit(0) ;
            break ;
        default : printf("default");
    }

    }

}
