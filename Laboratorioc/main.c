#include "global.h"

int main() {
    // init_lab();
    // coeff_t coeficientes[3] = {1, 2, 1};
    // eq_solver(coeficientes);
    
    // char array1 [4] = {5, 2, 7, 4};
    // int array2 [4] = {5, 2, 7, 4};
    // long array3 [4] = {5, 2, 7, 4};
    // max_index(array1, 1, 4);
    // print_reverse_array(array1, 1, 4);

    
    // char string[5] = "hola";
    // printf("%s\n", reverse_string(string));

    // printf("Elem1: %d\n", array2[0]);
    // printf("Elem2: %d\n", array2[1]);
    // swap(&array2[0], &array2[1], 1);

    
    // printf("%d\n" ,find_in_string("hola", "la"));
    // printf("%d\n", string_length("hola"));
    // printf("%d\n", bin2dec(1111011, 0));
    // printf("%d\n", string_words("    d hello    "));

    // char source[] = "chau";
    // char dest[] = "pi";
    // string_copy(source, dest);
    // printf("%s\n", dest);

    
    int A[2][3] = { {1, 4, 2}, {3, 6, 8} };
    int B[2][3] = { {5, 2, 1}, {7, 9, 3} };

    // Create and initialize the matrix
     matriz_t *matrix_A = create_matrix(2, 3);
    if (matrix_A == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    matriz_t *matrix_B = create_matrix(2, 3);
    if (matrix_B == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    initialize_matrix(matrix_A, A);
    initialize_matrix(matrix_B, B);

    // Print the matrix
    print_matrix(matrix_A);
    printf("\n");
    print_matrix(matrix_B);
    printf("\n");

    // Free the memory
    free_matrix(matrix_A);
    free_matrix(matrix_B);

    matriz_t matrix_C = matrix_sub(*matrix_A, *matrix_B);
    print_matrix(&matrix_C);
    printf("\n");

    // date_t date1, date2;
    // printf("Enter first date (dd mm yyyy): ");
    // scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    // printf("Enter second date (dd mm yyyy): ");
    // scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    // printf("Diferencia entre fechas es de %d días\n", days_left(date1, date2));


    Estudiante* cabeza = NULL;
    agregarEstudiante(&cabeza, "Juan", "Pérez", "12345678", 10, 82.5);
    agregarEstudiante(&cabeza, "Ana", "Gomez", "87654321", 9, 95.2);
    agregarEstudiante(&cabeza, "Pedro", "Rodriguez", "45678912", 11, 76.3);
    
    mostrarLista(cabeza);
    eliminarEstudiante(&cabeza, "87654321");
    mostrarLista(cabeza);

    agregarEstudiante(&cabeza, "Jorge", "Gonzalez", "34567891", 12, 61.0);
    mostrarLista(cabeza);

    ordenarPorCI(&cabeza);
    mostrarLista(cabeza);

    char texto[] = "Este es un ejemplo de texto con 123 numeros"; //Los tildes no son registrados como vocales

    printf("El texto contiene %d vocales.\n", vocales(texto));
    printf("El texto contiene %d consonantes.\n", consonantes(texto));

    char text[] = "Hola Mundo!";
    printf("Original: %s\n", text);
    
    string_to_caps(text);
    printf("En mayúsculas: %s\n", text);
    
    string_to_min(text);
    printf("En minúsculas: %s\n", text);

    complex_t a = {3, 2};
    complex_t b = {3, -2};
    complex_t c = sum(a, b);
    printf("%.2f + %.2fi\n", c.real, c.imag);

    complex_t d = prod(a, b);
    printf("%.2f + %.2fi\n", d.real, d.imag);

    return 0;


}