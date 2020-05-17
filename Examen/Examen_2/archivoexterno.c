#include <stdio.h>
#include <stdlib.h>

void makeBinary(int);
FILE *fp;

int main(){
    int num1, num2;

    printf("Ingresa dos numero\n");
    scanf("%d %d", &num1, &num2);

    fp = fopen("Binario.txt", "w");
    if(fp != NULL){
        makeBinary(num1);
        makeBinary(num2);
        makeBinary(num1 ^ num2);
        printf("Revisa \"Binario.txt\"\n");
    }
    fclose(fp);
}

void makeBinary(int num){
    int numero = num;
    int *arreglo, i, j;

    arreglo = malloc(8 * sizeof(int));

    for(i = 0; i < sizeof(arreglo); i++){
        arreglo[i] = numero % 2;
        numero /= 2;
        if (numero <= 0){
            break;
        }
    }

    for(j = i; j >= 0; j--){
        fprintf(fp,"%d", arreglo[j]);
        if(j == 0)
            fprintf(fp,"\n");
    }
    free(arreglo);
}
