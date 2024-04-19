#include "StringLen.h"
// Encuentre la longitud de un string (sin usar funciones de biblioteca) retorna -1 en caso de error:
int32_t string_length(char *string){
    // Chequeamos si el puntero es NULL
    if (string == NULL) {
        return -1; // Retorna -1 en caso de error
    }
    // Recorremos cada carácter hasta encontrar el carácter nulo
    int32_t i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i;
}

