#ifndef FINDMAXMIN_H
#define FINDMAXMIN_H
#include <stdio.h>
// Encuentre los elementos máximo y mínimo en un array.
void max_index(void *array, size_t data_type, size_t array_size); 
//data_type recibe el tamaño de la variable en bytes. Ej char = 1, int ? 4, etc... 
//array_size: la cantidad de elementos del array
void min_index(void *array, size_t data_type, size_t array_size);

#include "FindMaxMin.c"
#endif