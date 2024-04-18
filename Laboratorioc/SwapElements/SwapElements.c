#include "SwapElements.h"
int swap(void *elem_1, void *elem_2, size_t data_type){
    if (data_type == sizeof(char)){
        char temp = *(char*)elem_1;
        *(char*)elem_1 = *(char*)elem_2;
        *(char*)elem_2 = temp;
        printf("Elem1: %d\n", *(char*)elem_1);
        printf("Elem2: %d\n", *(char*)elem_2);
        return 0;
    }
    if (data_type == sizeof(int)){
        int temp = *(int*)elem_1;
        *(int*)elem_1 = *(int*)elem_2;
        *(int*)elem_2 = temp;
        printf("Elem1: %d\n", *(int*)elem_1);
        printf("Elem2: %d\n", *(int*)elem_2);
        return 0;
    }
    if (data_type == sizeof(long)){
        long temp = *(long*)elem_1;
        *(long*)elem_1 = *(long*)elem_2;
        *(long*)elem_2 = temp;
        printf("Elem1: %d\n", *(long*)elem_1);
        printf("Elem2: %d\n", *(long*)elem_2);
        return 0;
    }
    return -1;
}
