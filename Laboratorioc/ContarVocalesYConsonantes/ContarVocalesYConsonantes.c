#include "ContarVocalesYConsonantes.h"

int vocales(char *string) {
    int count = 0; // Contador de vocales
    char c; // Caracter actual

    while ((c = *string++) != '\0') {
        // Convertimos a minúscula para simplificar las comparaciones
        c = tolower(c);
        // Verificar si el caracter es una vocal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int consonantes(char *string) {
    int count = 0; // Contador de consonantes
    char c; // Caracter actual

    while ((c = *string++) != '\0') {
        // Convertimos a minúscula para simplificar las comparaciones
        c = tolower(c);
        // Verificar si el caracter es una letra y no una vocal
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }
    return count;
}
