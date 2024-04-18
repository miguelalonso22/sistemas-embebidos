#include "InverseArray.h"
void print_reverse_array(void *array, size_t data_type, size_t array_size){
    
    for (int i = array_size-1; i >= 0; i--){
        if (data_type == 1){
            printf("%d\n", ((char*)array)[i]);
        } else if (data_type == 2){
            printf("%d\n", ((short*)array)[i]);
        } else if (data_type == 4){
            printf("%ld\n", ((int*)array)[i]);
        } else if (data_type == 8){
            printf("%ld\n", ((long*)array)[i]);
        }
       
    }

}