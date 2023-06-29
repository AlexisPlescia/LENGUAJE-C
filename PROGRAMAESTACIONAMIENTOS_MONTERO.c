#include <stdio.h>
#include <string.h>
#define N 3

struct fecha {
    int dia;
    int mes;
    int anio;
};

struct socio {
    char nombre[30];
    struct fecha nac;
};
void cargar (struct socio v[], int l);


int main() {
    struct socio vector[3];
    int numSocios = 3;
    
    cargar(vector, numSocios);
    ordenarSocios(vector, numSocios);
    mostrarListado(vector, numSocios);
    
    return 0;
}


void cargar(struct socio v[], int l) {
    int i;
    
    for (i = 0; i < l; i++) {
        printf("Ingrese el nombre del socio %d: ", i + 1);
        gets(v[i].nombre);
        puts(v[i].nombre);  // Eliminar salto de línea del nombre

        printf("Ingrese la fecha de nacimiento del socio %d (dd mm aaaa): ", i + 1);
        scanf("%d %d %d", &v[i].nac.dia, &v[i].nac.mes, &v[i].nac.anio);
        getchar();  // Consumir el salto de línea después de la entrada de datos
        
        printf("\n");
    }
}

void ordenarSocios(struct socio v[], int n) {
    int i, j;
    struct socio aux;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j].nac.anio > v[j + 1].nac.anio) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void mostrarListado(struct socio *socios, int n) {
    int i;
    
    printf("Listado de socios:\n");
    
    for (i = 0; i < n; i++) {
        printf("Nombre: %s\n", socios[i].nombre);
        printf("Categoría: ");
        
        if (socios[i].nac.anio <= 1990) {
            printf("C\n");
        } else if (socios[i].nac.anio >= 1991 && socios[i].nac.anio <= 2000) {
            printf("B\n");
        } else {
            printf("A\n");
        }
        
        printf("\n");
    }
}

