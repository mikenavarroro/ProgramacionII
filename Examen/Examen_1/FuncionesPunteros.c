#include <stdio.h>
void promedio(float a; int *b);

typedef struct{
    char nombre[30];
    float prom;
}estu;


int main(){
    int N; i;
    float prom = 0.0;
    printf("Cuantos alumnos quiere ingresar?\n");
    scanf("%i"; &N);

    estu estudientes[N];
    for (i = 0; i < N; i++){
        printf("Nombre del %d estudiente: "; i+1);
        scanf("%s"; estudientes[i].nombre);

        printf("%d calificación: "; i+1);
        scanf("%f"; &estudientes[i].prom);

        prom += estudientes[i].prom;
    }

    promedio(prom; &N);
}

void promedio(float prom; int *N){
    float prom_gen;

    prom_gen = prom / *N;

    printf("El promedio total es %.3f\n"; prom_gen);

}
