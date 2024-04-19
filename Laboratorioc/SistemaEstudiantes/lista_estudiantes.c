// lista_estudiantes.c

#include "lista_estudiantes.h"


void agregarEstudiante(Estudiante** cabeza, char* nombre, char* apellido, char* ci, int grado, float promedio) {
    Estudiante* nuevo = (Estudiante*) malloc(sizeof(Estudiante));
    if (nuevo == NULL) {
        printf("Error al asignar memoria\n");
        return;
    }
    strcpy(nuevo->nombre, nombre);
    strcpy(nuevo->apellido, apellido);
    strcpy(nuevo->ci, ci);
    nuevo->grado = grado;
    nuevo->promedio = promedio;
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
//  printf("Agregando: %s %s\n", nuevo->nombre, nuevo->apellido);
//  printf("Cabeza ahora apunta a: %p\n", (void*)*cabeza);

}

void eliminarEstudiante(Estudiante** cabeza, char* ci) {
    Estudiante *temp = *cabeza, *prev;
    if (temp != NULL && strcmp(temp->ci, ci) == 0) {
        *cabeza = temp->siguiente;
        free(temp);
        return;
    }
    while (temp != NULL && strcmp(temp->ci, ci) != 0) {
        prev = temp;
        temp = temp->siguiente;
    }
    if (temp == NULL) return;
    prev->siguiente = temp->siguiente;
    free(temp);

}

void mostrarLista(Estudiante* cabeza) {
    while (cabeza != NULL) {
        printf("%s %s, CI: %s, Grado: %d, Promedio: %.2f, Calificación: %s\n",
               cabeza->nombre, cabeza->apellido, cabeza->ci, cabeza->grado, cabeza->promedio, calificacionLetra(cabeza->promedio));
        cabeza = cabeza->siguiente;
    }
      printf("\n");
}


char* calificacionLetra(float promedio) {
    if (promedio >= 95) return "S";
    if (promedio >= 82) return "MB";
    if (promedio >= 76) return "BMB";
    if (promedio >= 61) return "B";
    if (promedio >= 31) return "R";
    return "D";
}

void ordenarPorCI(Estudiante** cabeza) {
    int intercambiado;
    Estudiante *ptr1;
    Estudiante *lptr = NULL;

    if (*cabeza == NULL) return; // Verifica que la lista no esté vacía

    do {
        intercambiado = 0;
        ptr1 = *cabeza;

        while (ptr1->siguiente != lptr) {
            if (strcmp(ptr1->ci, ptr1->siguiente->ci) > 0) {
                intercambiar(ptr1, ptr1->siguiente);
                intercambiado = 1;
            }
            ptr1 = ptr1->siguiente;
        }
        lptr = ptr1;
    } while (intercambiado);
}


void intercambiar(Estudiante *a, Estudiante *b) {
    Estudiante temp;
    // Copiando los valores de 'b' a 'temp'
    strcpy(temp.nombre, b->nombre);
    strcpy(temp.apellido, b->apellido);
    strcpy(temp.ci, b->ci);
    temp.grado = b->grado;
    temp.promedio = b->promedio;

    // Copiando los valores de 'a' a 'b'
    strcpy(b->nombre, a->nombre);
    strcpy(b->apellido, a->apellido);
    strcpy(b->ci, a->ci);
    b->grado = a->grado;
    b->promedio = a->promedio;

    // Copiando los valores de 'temp' (originalmente 'b') a 'a'
    strcpy(a->nombre, temp.nombre);
    strcpy(a->apellido, temp.apellido);
    strcpy(a->ci, temp.ci);
    a->grado = temp.grado;
    a->promedio = temp.promedio;
}
