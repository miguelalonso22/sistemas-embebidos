#ifndef FINDMAXMIN_H
#define FINDMAXMIN_H
#include <stdio.h>
//#include <stdlib.h>

void max_index(void *array, size_t data_type, size_t array_size); //data_type debe contener el tamaño de los datos en bytes y array_size el tamaño del array en bytes
void min_index(void *array, size_t data_type, size_t array_size);

#include "FindMaxMin.c"
#endif