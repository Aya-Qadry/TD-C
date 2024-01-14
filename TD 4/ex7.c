#include <stdio.h>


typedef struct  {
    int reference , code;
    float prix;
    int qte;
}Produit;


void saisir(Produit *produit) {
    printf("Entrez la reference du produit : ");
    scanf("%d", &produit->reference);
    printf("Entrez le code du produit : 1- cartes meres \t2- processeurs \t3- barrettes memoire \t4- cartes graphiques \n\t ");
    scanf("%d", &produit->code);
    printf("\nEntrez le prix du produit en DH : ");
    scanf("%f", &produit->prix);
    printf("\nEntrez la quantite disponible du produit : ");
    scanf("%d", &produit->qte);
}

void affichage(Produit produit) {
    printf("Produit avec reference %d :\n", produit.reference);
    printf("Code : %d\n", produit.code);
    printf("Prix : %.2f DH\n", produit.prix);
    printf("Quantite disponible : %d\n", produit.qte);
}


void saisirCommande(Produit *produit) {
    int qte_commande;

    printf("Entrez la quantite commande du produit :\n ");
    scanf("%d", &qte_commande);

    if (qte_commande > 0 && qte_commande <= produit->qte) {
        float prixTotal = qte_commande * produit->prix;

        printf("\nCommande du produit :\n");
        printf("Reference du produit : %d\n", produit->reference);
        printf("Code : %d\n", produit->code);
        printf("Prix unitaire : %.2f DH\n", produit->prix);
        printf("Quantite commande : %d\n", qte_commande);
        printf("Prix total de la commande : %.2f DH\n", prixTotal);
    } else {
        printf("\n Quntite commande invalide ou indisponible.\n");
    }
}

int main() {
    Produit main_product;

    saisir(&main_product);
    affichage(main_product);
    saisirCommande(&main_product);

    return 0;
}
