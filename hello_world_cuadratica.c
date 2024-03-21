#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void cuadratica(float a, float b, float c, double salida[2])
{
    double discriminante, raiz1, raiz2;
    discriminante = b*b - 4*a*c;
    // printf("discriminante: %f\n", discriminante);

    if (discriminante < 0){
        printf("No existen raices reales\n");
        salida[0] = salida[1] = NAN;
    }
     else if (discriminante == 0){
        raiz1 = raiz2 = (-b / (2*a));
        salida[0] = salida[1] = raiz1;
        // printf("Raiz doble: %f\n", raiz1);
    }  
    else {
        raiz1 = (-b + sqrt(discriminante))/(2*a);
        raiz2 = (-b - sqrt(discriminante))/(2*a);
        salida[0] = raiz1;
        salida[1] = raiz2;

        // printf("Raiz 1: %f\nRaiz 2:%f\n",raiz1, raiz2);
    }
}

int main()
{
    char varA = 'A';
    printf("hello world\n");
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    double raices[2];
    cuadratica(1,2,-15, raices);
    printf("Raices\nx1:%f\nx2:%f\n",raices[0],raices[1]);
    return 0;
}
