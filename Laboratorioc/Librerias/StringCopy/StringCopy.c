#include "StringCopy.h"

int string_copy(char *source, char *destination){
    int i = 0;
    while(source[i] != '\0'){
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return i;
}
