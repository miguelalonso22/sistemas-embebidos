#ifndef SUMADENUMEROSCOMPLEJOS_H
#define SUMADENUMEROSCOMPLEJOS_H
#include <stdio.h>
// Definición de un número complejo:
typedef struct {
    float real;
    float imag;
} complex_t;
// Sume dos números complejos:
complex_t sum(complex_t a, complex_t b);
#include "SumaDeNumerosComplejos.c"
#endif

