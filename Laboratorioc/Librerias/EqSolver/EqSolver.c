#include "EqSolver.h"
root_t eq_solver(coeff_t *coeficientes){
    coeff_t a = coeficientes[0];
    coeff_t b = coeficientes[1];
    coeff_t c = coeficientes[2];
    root_t x1, x2;
    root_t determinante = b*b - 4*a*c;
    if(determinante < 0){
        printf("No hay raices reales\n");
        return 0;
    }
    x1 = (-b + sqrt(determinante))/(2*a);
    x2 = (-b - sqrt(determinante))/(2*a);
    printf("Raices: %f, %f\n", x1, x2);
    return 1;

}
