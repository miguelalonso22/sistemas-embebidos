#include "FindMaxMin.h"

void max_index(void *array, size_t data_type, size_t array_size){
int array_length, max_index;

array_length = array_size / data_type;
max_index = 0;
// char * array1 = (char*) array;

switch (data_type)
{
case 1:
    char * array1 = (char*) array;
    printf("holamundo");
    break;
case 2:
    short * array1 = (short*) array;
    break;
case 4:
    int * array1 = (int*) array;
    break;
case 8:
    long * array1 = (long*) array;
    break;
default:
    char * array1 = (char*) array;
}


// for (int i = 0; i <= array_length-1; i++){
//     if (array1[i] > array1[max_index]){max_index = i;}
// }

printf("Indice maximo: %d\n", max_index);

}

