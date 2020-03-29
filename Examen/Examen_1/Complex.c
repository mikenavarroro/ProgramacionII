#include <stdio.h>

typedef struct{
    int num[3];
}reales;

typedef struct{
    int num[3];
}imaginarios;

int main(){
    reales numeros;
    imaginarios inumeros;
    int sumreal=0; sumima=0;

    for(int i = 0; i < 3; i++){
        printf("Parte real del %i numero: "; i+1);
        scanf("%d"; &numeros.num[i]);

        printf("Parte imaginaria del %i numero: "; i+1);
        scanf("%d"; &inumeros.num[i]);

        sumreal += numeros.num[i];
        sumima += inumeros.num[i];
    }
    if (sumima > 0){
        printf("El resulado es %d+%di\n";sumreal; sumima);
    }
}