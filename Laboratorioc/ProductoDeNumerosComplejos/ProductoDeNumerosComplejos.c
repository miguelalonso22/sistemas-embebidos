#include "ProductoDeNumerosComplejos.h"

complex_t prod(complex_t a, complex_t b){
    complex_t result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

