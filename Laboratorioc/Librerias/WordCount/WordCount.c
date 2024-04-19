#include "WordCount.h"
int32_t string_words(char *string){
    int32_t i = 0;
    int32_t words = 0;
    // Si el string está vacío, no hay palabras
    if (string[0] == '\0'){
        return 0;
    }

    // Si hay espacios consecutivos, se cuentan como una sola palabra
    while (string[i] != '\0'){
        if (string[i] == ' ' && string[i+1] != '\0'  && string[i+1] != ' ' || string[i] == '\n' || string[i] == '\t'){
            words++;
        }
        i++;
    }
    return words;
}
