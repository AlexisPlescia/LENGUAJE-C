#include <stdio.h>
#include <stdlib.h>
#define n 5
 void funcion (int[n], int);

int main() {
  int vec[n], i, a;
  a=3;
  int acum = 0, cont = 0;
  float prom;
   for (i = 0; i < n; i++) {
     printf("\nvec[%d] = ", i);
     scanf("%d", &vec[i]);
   }
  funcion (vec , a);
  printf("\n VALOR DE A = %d\n", a);
  printf("VALORES DEL VECTOR \n\n");
  for(i=0;i<n;i++){
    printf("%7d",vec[i]);
  }
 
}
void funcion (int vector[n], int a)
{
  int i;
  for(i=0;i<n;i++){
    vector[i] = vector[i] * 2;
  }
  a = 8;
}