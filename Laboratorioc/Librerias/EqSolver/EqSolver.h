#ifndef EQSOLVER_H
#define EQSOLVER_H
#include <stdint.h>
#include <math.h>
#include <stdio.h>

typedef float root_t;
typedef float coeff_t;

root_t eq_solver(coeff_t *coeficientes);

#include "EqSolver.c"
#endif