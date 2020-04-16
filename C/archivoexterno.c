/**Tome dos números y muestre en un archivo externo la suma, la resta,
la multiplicación y la división, y el resultado en sistemas decimal y binario

Implementa funciones de gestión dinámica de memoria**/
#include <stdio.h>
#include <stdlib.h>

FILE *fp;

int suma(int, int);
int resta(int, int);
int multi(int, int);
float divi(float, float);
void binario(int);

int main(){
    int num1, num2;

    printf("Escribe dos numeros: ");
    scanf("%d %d", &num1, &num2);

    fp = fopen ("Operaciones.txt","w");
    if(fp != NULL){
        fprintf(fp,"%d + %d = %d(10)\t", num1, num2, suma(num1, num2));
        binario(suma(num1, num2));
        fprintf(fp,"%d - %d = %d(10)\t", num1, num2, resta(num1, num2));
        binario(resta(num1, num2));
        fprintf(fp,"%d x %d = %d(10)\t", num1, num2, multi(num1, num2));
        binario(multi(num1, num2));
        fprintf(fp,"%d / %d = %.2f(10)\t", num1, num2, divi((float)num1, (float)num2));
        binario(divi(num1, num2));
        printf("Por favor revisa, en la misma carpeta en la que esta este\n");
        printf("codigo, un archivo llamado \"Operaciones.txt\"\n");
        fclose(fp);
    }else{
        printf("No se pudo crear el archivo\n");
    }

    return 0;
}

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

float divi(float a, float b){
    return a / b;
}

void binario(int num){
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
        if (j == 0){
            fprintf(fp, "(2)");
            fprintf(fp,"\n");
        }
    }
    free(arreglo);
}
