#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int n1, n2;
    printf("Ingrese dos valores: ");
    scanf("%d %d", &n1, &n2);

    printf("Antes del intercambio: n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("Después del intercambio: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
