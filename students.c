#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_GRADES 50

typedef struct Students {
    char name[50];
    int age;
    int grades[MAX_GRADES];
} Student;

void HomeMenu(){
    printf("------ SISTEMA DE GESTIÓN DE ESTUDIANTES ------\n");
    printf("Seleccione la accion:\n");
    printf("1 - Ingresar nuevo alumno\n");
    printf("2 - Mostrar alumnos\n");
    printf("3 - Calcular promedio de un alumno\n");
    printf("0 - Salir\n");
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0; // Esta variable almacena la cantidad de estudiantes actualmente registrados

    while (1) {
        int choice;
        HomeMenu();
        scanf("%d", &choice);
        
        if (choice == 0) {
            break; // Salir del programa
        }
        else if (choice == 1) {
            if (studentCount >= MAX_STUDENTS) {
                printf("Se ha alcanzado el número máximo de estudiantes.\n");
                continue;
            }
            printf("Ingrese el nombre del alumno: ");
            scanf("%s", students[studentCount].name);
            printf("Ingrese la edad del alumno: ");
            scanf("%d", &students[studentCount].age);
            printf("Ingrese las notas del alumno (presione \"0\" para terminar):\n");
            for (int i = 0; i < MAX_GRADES; i++) {
                int grade;
                scanf("%d", &grade);
                if (grade == 0) break;
                students[studentCount].grades[i] = grade;
            }
            studentCount++;
            printf("Alumno ingresado correctamente\n");
        }
        else if (choice == 2) {
            if (studentCount == 0) {
                printf("No hay alumnos ingresados.\n");
                continue;
            }
            for (int j = 0; j < studentCount; j++) {
                printf(" --- ALUMNO %d ---\n", j);
                printf("Nombre: %s\n", students[j].name);
                printf("Edad: %d\n", students[j].age);
                printf("Notas: ");
                for (int i = 0; students[j].grades[i] != 0 && i < MAX_GRADES; i++) {
                    printf("%d ", students[j].grades[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 3) {
            if (studentCount == 0) {
                printf("No hay alumnos ingresados.\n");
                continue;
            }
            int studentIndex;
            printf("Ingrese el índice del alumno (0 a %d): ", studentCount - 1);
            scanf("%d", &studentIndex);
            if (studentIndex < 0 || studentIndex >= studentCount) {
                printf("Índice fuera de rango.\n");
                continue;
            }
            int sum = 0, count = 0;
            for (int i = 0; students[studentIndex].grades[i] != 0 && i < MAX_GRADES; i++) {
                sum += students[studentIndex].grades[i];
                count++;
            }
            printf("Promedio: %.2f\n", count > 0 ? (float)sum / count : 0.0);
        }
    }
    return 0;
}
