#include "CambioDeMayusculasYMinusculas.h"
void string_to_caps(char *string) {
    while (*string) {  // Mientras no se llegue al final de la cadena (caracter nulo '\0')
        if (*string >= 'a' && *string <= 'z') {
            *string = *string - ('a' - 'A');  // Convertir a mayúscula
        }
        string++;  // Moverse al siguiente caracter
    }
}

void string_to_min(char *string) {
    while (*string) {  // Mismo principio que la función anterior
        if (*string >= 'A' && *string <= 'Z') {
            *string = *string + ('a' - 'A');  // Convertir a minúscula
        }
        string++;
    }
}

