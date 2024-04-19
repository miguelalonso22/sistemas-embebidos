#ifndef MATRIXSUB_H
#define MATRIXSUB_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rows;
    int cols;
    int **data;
} matriz_t;

// Devuelva la resta de dos matrices:
matriz_t matrix_sub(matriz_t A, matriz_t B);
matriz_t *create_matrix(int rows, int cols);
void initialize_matrix(matriz_t *m, int init_data[][3]);
void print_matrix(matriz_t *m);
void free_matrix(matriz_t *m);

#include "MatrixSub.c"
#endif