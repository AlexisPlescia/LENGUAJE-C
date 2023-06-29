#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 5
#define MAX_VALUE 1
/*DIRECCION DE ESTACIONAMIENTO QUE MENOS AUTOS TIENE STACIONADOS, RETORNAR LOS LUGARES DISPONIBLES DE CADA ESTACIONAMIENTO*/

struct estacionamiento {
    char direccion[50];
    int lugares[2][10];
};

int menor(struct estacionamiento[], int);

void cargar(struct estacionamiento[], int);

int main() {
    struct estacionamiento EST[N];
    cargar(EST, N);
    menor(EST, N);
    return 0;
}

int menor(struct estacionamiento v[], int l) {
    int i, j, k, z;
    int cont;
    cont = 0;
    for (i = 0; i < l; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 10; k++) {
                if (v[i].lugares[j][k] == 0)
                    cont++;
            }
        }
    }
    printf("\nCONT EN FUNCION MENOR VALE %d\n", cont);
}

void cargar(struct estacionamiento V[], int L) {
    int I, J, K, Z;
    int cont[3];
    srand(time(NULL));
    cont[0] = 0;
    cont[1] = 0;
    cont[2] = 0;
    int aux;
    aux = 0;
    char nombre[20];
    char auxnom[50]; // Cambiado a un array de 50 caracteres

    for (I = 0; I < L; I++) {
        printf("\t\t  INGRESE EL NOMBRE DEL ESTACIONAMIENTO  :");
        gets(V[I].direccion);
        strcpy(nombre, V[I].direccion);
        printf(" \n");
    }

    for (K = 0; K < L; K++) {
        printf("\n");
        cont[2] = 0;
        printf("\n CONT 2 VALE %d", cont[2]);
        for (Z = 0; Z < 2; Z++) {
            printf("\n");
            for (J = 0; J < 10; J++) {
                V[K].lugares[Z][J] = rand() % 2;
                if (V[K].lugares[Z][J] == 1) {
                    cont[2]++;
                    aux = cont[2];
                }
                printf("\t%d", V[K].lugares[Z][J]);
                if (V[K].lugares[Z][J] == 1) {
                    cont[1]++;
                } else {
                    cont[0]++;
                }
            }
        }
        if (aux > cont[2]) {
            strcpy(auxnom, nombre);
            aux = cont[2];
        }
    }
    printf("\nEN TOTAL APARECIERON %d NUMERO UNO", cont[1]);
    printf("\nHAY %d LUGARES DISPONIBLES", cont[0]);
    auxnom[strlen(auxnom)] = '\0'; // Agregar el carácter nulo al final de auxnom
    puts(auxnom);
    printf("%s", auxnom);
    printf("\nEL DE MAYOR 0 ES %d", aux);
}

 


