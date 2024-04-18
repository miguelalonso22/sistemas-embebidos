#include "MatrixSub.h"

matriz_t matrix_sub(matriz_t A, matriz_t B){
    matriz_t result;
    result.rows = A.rows;
    result.cols = A.cols;
    result.data = (int **)malloc(result.rows * sizeof(int *));
    for(int i = 0; i < result.rows; i++){
        result.data[i] = (int *)malloc(result.cols * sizeof(int));
        for(int j = 0; j < result.cols; j++){
            result.data[i][j] = A.data[i][j] - B.data[i][j];
        }
    }
    return result;
}

// Function to create a new matrix
matriz_t *create_matrix(int rows, int cols) {
    matriz_t *m = malloc(sizeof(matriz_t));
    if (m == NULL) return NULL;

    m->rows = rows;
    m->cols = cols;
    m->data = malloc(rows * sizeof(int*));
    if (m->data == NULL) {
        free(m);
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        m->data[i] = malloc(cols * sizeof(int));
        if (m->data[i] == NULL) {
            for (int j = 0; j < i; j++) free(m->data[j]);
            free(m->data);
            free(m);
            return NULL;
        }
    }

    return m;
}

// Function to initialize the matrix with data
void initialize_matrix(matriz_t *m, int init_data[][3]) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            m->data[i][j] = init_data[i][j];
        }
    }
}

// Function to print the matrix
void print_matrix(matriz_t *m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%d ", m->data[i][j]);
        }
        printf("\n");
    }
}

// Function to free the memory allocated for the matrix
void free_matrix(matriz_t *m) {
    for (int i = 0; i < m->rows; i++) {
        free(m->data[i]);
    }
    free(m->data);
    free(m);
}