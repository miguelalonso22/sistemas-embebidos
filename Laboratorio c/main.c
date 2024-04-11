#include "global.h"

int main() {
    init_lab();
    coeff_t coeficientes[3] = {1, 2, 1};
    eq_solver(coeficientes);
    return 0;
}