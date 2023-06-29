#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5
#define max 20

int main()
{
  char mat[n][max],aux[max];
  int i,j;
  printf("ingresar nombre\n");
/* ingreso */
  for(i=0;i<n;i++){
    gets(mat[i]);
    printf("palabra %d  : " , i+1);
  } 
  printf("vector invertido \n");
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if (strcmp(mat[j],mat[j+1])>0){
        strcpy(aux,mat[j]);
        strcpy(mat[j],mat[j+1]);
        strcpy(mat[j+1],aux);
      }
    }
  }
    for(i=0;i<n;i++){
      puts(mat[i]);
      printf("\n");
    }
}
