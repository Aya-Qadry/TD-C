#include <stdio.h>
#include<string.h>

struct Panneau {
    float largeur , longueur , epaisseur ;
    char bois[30];
};


void saisir(struct Panneau *panneau) {
    int choix ;

    printf("Entrez la largeur  : ");
    scanf("%f", &panneau->largeur);

    printf("Entrez la longueur : ");
    scanf("%f", &panneau->longueur);

    printf("Entrez l'epaisseur : ");
    scanf("%f", &panneau->epaisseur);

    printf("Entrez le type de bois (0 pour Pin, 1 pour chene, 2 pour hetre) : ");
    scanf("%d",&choix) ;

    switch(choix){
        case 0 : strcpy(panneau->bois,"pin");
                break;
        case 1 : strcpy(panneau->bois,"chene");
                break;
        case 2 : strcpy(panneau->bois,"hetre");
                break;
        default : printf("choix invalide") ;
                break;
    }
}


void affichage(struct Panneau panneau) {
    printf("Panneau de bois :\n");
    printf("Largeur : %.2f mm\n", panneau.largeur);
    printf("Longueur : %.2f mm\n", panneau.longueur);
    printf("Epaisseur : %.2f mm\n", panneau.epaisseur);
    printf("Type de bois : %s \n", panneau.bois);

}

double Volume(struct Panneau panneau){
    double volume = (panneau.largeur)/1000 * (panneau.longueur)/1000 * (panneau.epaisseur)/1000;
    return volume;
}

main() {

    struct Panneau panneau;

    saisir(&panneau);

    affichage(panneau);
    double volume = Volume(panneau);
    printf("Le volume du panneau est : %.3f \n", volume);


}
