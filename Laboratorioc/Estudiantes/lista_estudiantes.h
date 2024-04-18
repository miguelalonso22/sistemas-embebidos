// #include "estudiante.h"

#ifndef LISTA_ESTUDIANTES_H
#define LISTA_ESTUDIANTES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Estudiante {
    char nombre[50];
    char apellido[50];
    char ci[20]; // CI como string para manejar ceros a la izquierda si necesario
    int grado;
    float promedio;
    struct Estudiante* siguiente;
} Estudiante;

void agregarEstudiante(Estudiante** cabeza, char* nombre, char* apellido, char* ci, int grado, float promedio);
void eliminarEstudiante(Estudiante** cabeza, char* ci);
void mostrarLista(Estudiante* cabeza);
void mostrarEstudiante(Estudiante* cabeza, char* ci);
void ordenarPorCI(Estudiante** cabeza);
// void ordenarPorNombre(Estudiante** cabeza);
char* calificacionLetra(float promedio);
void intercambiar(Estudiante* a, Estudiante* b);


#include "lista_estudiantes.c"
#endif
