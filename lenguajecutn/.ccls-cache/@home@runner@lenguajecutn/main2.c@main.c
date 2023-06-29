
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int i;
    int vector[SIZE];

    // Inicializar la semilla con el tiempo actual
    srand(time(NULL));

    // Generar números aleatorios entre 0 y 99
    for (i = 0; i < SIZE; i++) {
        vector[i] = rand() % 100;  // El operador % se utiliza para limitar el rango entre 0 y 99
    }

    // Imprimir el vector generado
    printf("Vector generado:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}