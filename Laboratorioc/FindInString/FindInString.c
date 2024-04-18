#include "FindInString.h"
int find_in_string(char *haystack, char *needle){
    int i = 0;
    int j = 0;
    while (haystack[i] != '\0'){
        if (haystack[i] == needle[j]){
            j++;
            if (needle[j] == '\0'){
                return i - j + 1;
            }
        } else {
            j = 0;
        }
        i++;
    }
    return -1;
}

