#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define n 3
/*DIRECCION DE ESTACIONAMIENTO QUE MENOS AUTOS TIENE STACIONADOS, RETORNAR LOS LUGARES DISPONIBLES DE CADA ESTACIONAMIENTO*/
struct fecha {
      int dia;
      int mes;
      int anio;
};
struct alumnos {
    char nombre[20];
    char sexo;
    char categoria[20];
  struct fecha fechas;
};

void cargar(struct alumnos[] , int);

int main() {
    struct alumnos alumn[n];
    cargar(alumn,n);
    return 0;
}

void cargar(struct alumnos v[],int l)
{
  int i,j;
  for(i=0;i<l;i++){
    scanf("%c",&v[i].nombre[20]);
    getchar();
  }
  for(j=0;j<l;j++){
  puts(v[i].nombre);
    }
}


