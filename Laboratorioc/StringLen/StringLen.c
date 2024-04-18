#include "StringLen.h"
int32_t string_length(char *string){
    int32_t i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i;
}

