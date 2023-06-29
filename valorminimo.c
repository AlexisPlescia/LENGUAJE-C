#include <stdio.h>
#include <stdlib.h>
#define n 5
void seleccion(int vector[n], int i);

int main() {
  int vec[n];
  int i, posmin;
  for (i = 0; i < n; i++) {
    printf("vec[%d] = ", i);
    scanf("%d", &vec[i]);
  }
  seleccion(vec, n);
  posmin = vec[0];
  printf("valor posmin es = %d", posmin);
}

void seleccion(int vector[], int l) {
  int i, j;
  int aux;
  for (i=0;i<l-1;i++){
  	for(j=0;j<l-i-1;j++){
	   if (vector[j] > vector[j+1]){
	   	 aux=vector[j];
	   	 vector[j]=vector[j+1];
	   	 vector[j+1]=aux;
	   }}};
	   for (i = 0 ; i < l ; i++){
	   	printf("\n'n\n vec[] %d", vector[i+1]);
	   }}
 /* {
    posmin = prim;
    for (i = prim + 1; i < l; i++) // busqueda del minimo
      if (vector[i] < vector[posmin])
        posmin = i;
    /*swapping
    aux = vector[prim];
    vector[prim] = vector[posmin];
    vector[posmin] = aux;
  }
  printf("\n vector 0 en la funcion vale = [%d] \n  ",vector[0]);
  
  
} */
