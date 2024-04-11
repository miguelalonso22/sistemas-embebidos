#include "global.h"

int main() {
    init_lab();
    coeff_t coeficientes[3] = {1, -3, 2}; // Aquí puedes cambiar los valores de los coeficientes
    eq_solver(coeficientes);
    return 0;
}