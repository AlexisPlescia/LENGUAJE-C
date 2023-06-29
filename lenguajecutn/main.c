#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 1000

int dado(int vector[], int x);
void contador(int vector[], int x);

int main() {
  int vec[n];
  int i, x;
  srand(time(0));

  for (i = 0; i < n; i++) {
    vec[i] = 1 + rand() % 6;
  }

  printf("VALORES DEL VECTOR:\n");
  dado(vec, x);
  contador(vec, x);

  return 0;
}

int dado(int vector[], int x) {
  int i;
  for (i = 0; i < n; i++) {
    printf("NUMERO %d\n", vector[i]);
  }
}

void contador(int vector[], int x) {
  int i, j;
  int can_veces[6] = {0}; // Inicializar todos los elementos a 0

  for (i = 0; i < n; i++) {
    int cara = vector[i];
    if (cara == 1) {
      can_veces[0]++;
    } else if (cara == 2) {
      can_veces[1]++;
    } else if (cara == 3) {
      can_veces[2]++;
    } else if (cara == 4) {
      can_veces[3]++;
    } else if (cara == 5) {
      can_veces[4]++;
    } else if (cara == 6) {
      can_veces[5]++;
    }
  }

  for (j = 0; j < 6; j++) {
    float porcentaje = (can_veces[j] / (float)n) * 100;
    printf("EL %d APARECIO = %d veces (%.2f%%)\n", j + 1, can_veces[j], porcentaje);
  }
}