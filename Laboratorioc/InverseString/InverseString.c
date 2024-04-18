#include "InverseString.h"

char *reverse_string(char *string){
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    char *reversed = malloc(i + 1);
    for (int j = 0; j < i; j++){
        reversed[j] = string[i-j-1];
    }
    reversed[i] = '\0';
    return reversed;}
