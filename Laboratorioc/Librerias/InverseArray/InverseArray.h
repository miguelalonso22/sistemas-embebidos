#ifndef INVERSEARRAY_H
#define INVERSEARRAY_H
#include <stdio.h>
// Lea los valores en un array y los muestre en pantalla en orden inverso.
void print_reverse_array(void *array, size_t data_type, size_t array_size); //data_type recibe el tamaño de la variable en bytes. Ej char = 1, int ? 4, etc...
//array_size: la cantidad de elementos del array
#include "InverseArray.c"
#endif
