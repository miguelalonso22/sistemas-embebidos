#include "global.h"

int main() {
    // init_lab();
    // coeff_t coeficientes[3] = {1, 2, 1};
    // eq_solver(coeficientes);
    
    char array1 [4] = {5, 2, 7, 4};
    int array2 [4] = {5, 2, 7, 4};
    long array3 [4] = {5, 2, 7, 4};
    max_index(array1, 1, 4);
    print_reverse_array(array1, 1, 4);

    
    char string[5] = "hola";
    printf("%s\n", reverse_string(string));

    printf("Elem1: %d\n", array2[0]);
    printf("Elem2: %d\n", array2[1]);
    swap(&array2[0], &array2[1], 1);

    
    printf("%d\n" ,find_in_string("hola", "la"));
    printf("%d\n", string_length("hola"));
    printf("%d\n", bin2dec(1111011, 0));
    printf("%d\n", string_words("    d hello    "));

    return 0;
}