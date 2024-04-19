#include "global.h"

int main() {
    //Despliegue en pantalla el mensaje “Laboratorio lenguaje C de <nombre completo>” (debe desplegar el nombre completo de usted)
    init_lab();
    // Resuelva la ecuación de segundo grado:
    coeff_t coeficientes[3] = {1, 2, 1};
    eq_solver(coeficientes);
    // Convierta un número binario en uno decimal:
    int32_t binario = 1111011;
    int32_t decimal = bin2dec(binario, 0);
    printf("Conversión de binario a decimal:\n%d ----> %d\n", binario, decimal);
    //Lea los valores en un array y los muestre en pantalla en orden inverso
    char array1 [4] = {5, 2, 7, 4};
    int array2 [4] = {5, 2, 7, 4};
    long array3 [4] = {5, 2, 7, 4};

    print_reverse_array(array1, 1, 4);
    print_reverse_array(array2, 4, 4);
    print_reverse_array(array3, 8, 4);
    // Encuentre los elementos máximo y mínimo en un array.
    max_index(array1, 1, 4);
    max_index(array2, 4, 4);
    max_index(array2, 8, 4);

    min_index(array1, 1, 4);
    min_index(array2, 4, 4);
    min_index(array2, 8, 4);

    //Devuelva la resta de dos matrices:

    //------------ INICIO BLQUE MATRICES ------------
    // Datos de las matrices
    int A[2][3] = { {1, 4, 2}, {3, 6, 8} };
    int B[2][3] = { {5, 2, 1}, {7, 9, 3} };
    // Crear las matrices
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
    // Inicializar las matrices
    initialize_matrix(matrix_A, A);
    initialize_matrix(matrix_B, B);
    // Imprimir las matrices
    print_matrix(matrix_A);
    printf("\n");
    print_matrix(matrix_B);
    printf("\n");

    // Restar las matrices
    matriz_t matrix_C = matrix_sub(*matrix_A, *matrix_B);
    print_matrix(&matrix_C);
    printf("\n");
    // Libera la memoria
    free_matrix(matrix_A);
    free_matrix(matrix_B);
    free_matrix(&matrix_C);

    //------------ FIN BLQUE MATRICES ------------

    // Intercambie el contenido de dos elementos, deberá retornar si la operacion se realizo con exito (0) o no (-1):
    int swapValues[2] = {0, 1};
    printf("Intercambiar valores\n");
    printf("ANTES DEL INTERCAMBIO\n");
    printf("Elem1: %d\n", swapValues[0]);
    printf("Elem2: %d\n", swapValues[1]);
    printf("DESPUES DEL INTERCAMBIO\n");
    printf("Codigo de exito: %d\n", swap(&swapValues[0], &swapValues[1], 4));

    // Cuente el número de vocales y consonantes en un string:
    char texto[] = "Este es un ejemplo de texto con 123 numeros"; //Los tildes no son registrados como vocales

    printf("El texto contiene %d vocales.\n", vocales(texto));
    printf("El texto contiene %d consonantes.\n", consonantes(texto));
    // Imprima y devuelve un string al revés:
    reverse_string(texto);
    // Encuentre la longitud de un string (sin usar funciones de biblioteca) retorna -1 en caso de error:
    printf("Longitud de string: %d\n", string_length(NULL));
    printf("Longitud de string: %d\n", string_length("hola"));
    // Cuente el número total de palabras en un string. (sin usar librerías standard):
    printf("Palabras en el string: %d\n", string_words("    hello   world "));
    // Copie un string en otro string. (sin usar librerías standard):
    printf("COPIAR STRING\n");
    char source[] = "chau";
    char dest[] = "pi";
    printf("Source: %s\nDestino:%s\n", source, dest);
    string_copy(source, dest);
    printf("Destino Modificado: %s\n", dest);
    // Extraiga una subcadena de una cadena dada, debe retornar -1 en caso de no encontrarse. (sin usar librerías standard):
    printf("Subcadena: %d\n" ,find_in_string("hola", "la"));
    // Lea una oración y reemplace los caracteres en minúsculas con mayúsculas o viceversa según decida el usuario. (sin usar librerías standard):
    char text[] = "Hola Mundo!";
    printf("Original: %s\n", text);
    
    string_to_caps(text);
    printf("En mayúsculas: %s\n", text);
    
    string_to_min(text);
    printf("En minúsculas: %s\n", text);
    // Sume dos números complejos:
    complex_t a = {3, 2};
    complex_t b = {3, -2};
    complex_t c = sum(a, b);
    printf("%.2f + %.2fi\n", c.real, c.imag);
    // Multiplique dos números complejos:
    complex_t d = prod(a, b);
    printf("%.2f + %.2fi\n", d.real, d.imag);
    // Al ingresar dos fechas encuentre la diferencia, en días, entre ellas:
    date_t date1, date2;
    printf("Ingrese primera fecha (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Ingrese segunda fecha (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    printf("Diferencia entre fechas es de %d días\n", days_left(date1, date2));

// --------------- SEGUNDA PARTE ----------------
    printf("\nSEGUNDA PARTE - ESTUDIANTES - Listas enlazadas\n");
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

    
    return 0;


}