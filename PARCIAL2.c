#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

struct ESTACIONAMIENTOS{
    char DIRECCION[50];
    char LUGARES[2][10];
};

void CARGAR (struct ESTACIONAMIENTOS [], int);
void MIRAR (struct ESTACIONAMIENTOS [], int);
int DISPONIBLES (struct ESTACIONAMIENTOS [], int);
float PROMEDIO (struct ESTACIONAMIENTOS [], int);

int main(){
    struct ESTACIONAMIENTOS VEC[NUM];
    CARGAR(VEC, NUM);
    MIRAR(VEC, NUM);
    printf("\n\n");
    //DISPONIBLES(VEC, NUM);
    printf("\nMAXIMOS LUGARES DISPONIBLES: %d\n", DISPONIBLES(VEC, NUM));
    printf("\nEL PROMEDIO DE LUGARES DISPONIBLES ES: %.2f\n", PROMEDIO(VEC, NUM));
}

void CARGAR(struct ESTACIONAMIENTOS V[], int N){
    int I, J, K;

    for(I=0; I<N; I++){
        printf("INGRESE LA DIRECCION: ");
        gets(V[I].DIRECCION);

        for(J=0; J<2; J++)
            for(K=0; K<10; K++)
                V[I].LUGARES[J][K] = rand()%2;
    }
}

void MIRAR(struct ESTACIONAMIENTOS V[], int N){
    int I, J, K;
    for(I=0; I<N; I++){
        printf("\nDIRECCION ES: %s\n", V[I].DIRECCION);
        for(J=0; J<2; J++){
            for(K=0; K<10; K++)
                printf("  %d  ", V[I].LUGARES[J][K]);
            printf("\n");
        }
    }
}

int DISPONIBLES (struct ESTACIONAMIENTOS V[], int N){
    int I, J, K;
    int CONT;
    int MAX = 0;
    char DIRE[50];

    for(I=0; I<N; I++){
        CONT = 0;
        for(J=0; J<2; J++)
            for(K=0; K<10; K++)
                if(V[I].LUGARES[J][K] == 0)
                    CONT++;
        if(CONT > MAX){
            MAX = CONT;
            strcpy(DIRE, V[I].DIRECCION);
        }
    }
    printf("LA DIRECCION CON MENOS AUTOS ESTACIONADOS ES: %s", DIRE);
    return MAX;
}

float PROMEDIO(struct ESTACIONAMIENTOS V[], int N){
    int I, J, K;
    int ACUM = 0;
    float PROM;

    for(I=0; I<N; I++){
        for(J=0; J<2; J++)
            for(K=0; K<10; K++)
                if(V[I].LUGARES[J][K] == 1)
                    ACUM++;
    }

    PROM = (float)ACUM/(N*2*10);
    return PROM;
}
//{}[]
