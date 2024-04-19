#include "FindMaxMin.h"

void max_index(void *array, size_t data_type, size_t array_size) {
    size_t index = 0; // Inicializa el índice del máximo

    // Compara elementos según el tipo de dato
    for (size_t i = 1; i < array_size; i++) {
        if (data_type == 1) { // char
            if (((char *)array)[i] > ((char *)array)[index]) {
                index = i;
            }
        } else if (data_type == 2) { // short
            if (((short *)array)[i] > ((short *)array)[index]) {
                index = i;
            }
        } else if (data_type == 4) { // int
            if (((int *)array)[i] > ((int *)array)[index]) {
                index = i;
            }
        } else if (data_type == 8) { // long
            if (((long *)array)[i] > ((long *)array)[index]) {
                index = i;
            }
        }
    }

    printf("El índice del elemento máximo es: %zu\n", index);
}

void min_index(void *array, size_t data_type, size_t array_size){
    size_t index = 0; // Inicializa el índice del mínimo

    // Compara elementos según el tipo de dato
    for (size_t i = 1; i < array_size; i++) {
        if (data_type == 1) { // char
            if (((char *)array)[i] < ((char *)array)[index]) {
                index = i;
            }
        } else if (data_type == 2) { // short
            if (((short *)array)[i] < ((short *)array)[index]) {
                index = i;
            }
        } else if (data_type == 4) { // int
            if (((int *)array)[i] < ((int *)array)[index]) {
                index = i;
            }
        } else if (data_type == 8) { // long
            if (((long *)array)[i] < ((long *)array)[index]) {
                index = i;
            }
        }
    }

    printf("El índice del elemento mínimo es: %zu\n", index);
}