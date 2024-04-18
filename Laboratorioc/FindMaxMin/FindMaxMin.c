#include "FindMaxMin.h"

void max_index(void *array, size_t data_type, size_t array_size){
int array_length, maxIndex;

array_length = array_size / data_type;
maxIndex = 0;
// char * array1 = (char*) array;

switch (data_type)
{
case 1:{
    char * array1 = (char*) array;
    printf("holamundo");
    for (int i = 0; i <= array_length-1; i++){
        if (array1[i] > array1[maxIndex]){maxIndex = i;}
    }
    break;
}
    
case 2:{
    short * array1 = (short*) array;
    for (int i = 0; i <= array_length-1; i++){
        if (array1[i] > array1[maxIndex]){maxIndex = i;}
    }
    break;
}
    
case 4:{
    int * array1 = (int*) array;
    for (int i = 0; i <= array_length-1; i++){
        if (array1[i] > array1[maxIndex]){maxIndex = i;}
    }
    break;
}
    
case 8:{
    long * array1 = (long*) array;
    for (int i = 0; i <= array_length-1; i++){
        if (array1[i] > array1[maxIndex]){maxIndex = i;}
    }
    break;
}
default:
    printf("Error: data_type no valido\n");
    return;
}

printf("Indice maximo: %d\n", maxIndex);

}

