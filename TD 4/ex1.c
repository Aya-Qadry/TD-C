#include <stdio.h>


typedef struct {
    double reel;
    double imag;
} complexe;

// 1
double imag(complexe z) {
    return z.imag;
}
double reel(complexe z) {
    return z.reel;
}
complexe mul(complexe z1, complexe z2) {
    complexe result;

    result.reel = z1.reel*z2.reel - z1.imag*z2.imag;
    result.imag = z1.reel* z2.imag + z1.imag *z2.reel;

    return result;
}

// &
void imag_parpt(complexe *z, double *result) {
    *result = z->imag;
}
void reel_parpt(complexe *z, double *result) {
    *result = z->reel;
}
void mul_parpt(complexe *z1, complexe *z2, complexe *result) {
    result->reel = z1->reel * z2->reel - z1->imag * z2->imag;
    result->imag = z1->reel * z2->imag + z1->imag * z2->reel;
}

main() {
	
	complexe complexe1, complexe2,result;
	
    printf("Entrez le nombre reel de 1er complex : ");
    scanf("%lf", &complexe1.reel);

    printf("Entrez le nombre imaginaire de 1er complex : ");
    scanf("%lf", &complexe1.imag);

    printf("Entrez le nombre reel de 2eme complex : ");
    scanf("%lf", &complexe2.reel);

    printf("Entrez le nombre imaginaire de 2eme complex : ");
    scanf("%lf", &complexe2.imag);+
  
    printf("\n\n");
    printf("nombre reel de x : %.2f\n", reel(complexe1));
    printf("nombre imaginaire y : %.2f\n", imag(complexe1));

    printf("\n");
    result = mul(complexe1, complexe2);
    printf("Mult de x et y : %.2f + %.2fi\n", result.reel, result.imag);

    printf("\n\n");
        double reel_result, imag_result;
        reel_parpt(&complexe1, &reel_result);
        imag_parpt(&complexe1, &imag_result);

        printf("nombre reel de xpt  : %.2f\n", reel_result);
        printf("nombre imaginaire de ypt  : %.2f\n", imag_result);

        mul_parpt(&complexe1, &complexe2, &result);
        printf("Mult de xpt et ypt  : %.2f + %.2fi\n", result.reel, result.imag);

}
