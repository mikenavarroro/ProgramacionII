#include <stdio.h>
#include <stdlib.h>

FILE *fp, *fp2;

int suma(int, int);
int resta(int, int);
int multi(int, int);
float divi(float, float);
int binario(int);

int main(){
    int num1, num2;

    printf("Escribe dos numeros: ");
    scanf("%d %d", &num1, &num2);

    fp = fopen ("Decimal.txt","w");
    if(fp != NULL){
        fprintf(fp,"%d + %d = %d\n", num1, num2, suma(num1, num2));
        binario(suma(num1, num2));
        fprintf(fp,"%d - %d = %d\n", num1, num2, resta(num1, num2));
        binario(resta(num1, num2));
        fprintf(fp,"%d x %d = %d\n", num1, num2, multi(num1, num2));
        binario(multi(num1, num2));
        fprintf(fp,"%d / %d = %.2f\n", num1, num2, divi((float)num1, (float)num2));
        binario(divi(num1, num2));
        printf("Por favor revisa, en la misma carpeta en la que esta este\n");
        printf("codigo, un archivo llamado \"Decimal.txt\" y otro \"Binario.txt\"\n");
        fclose(fp);
    }else{
        printf("No se pudo crear el archivo\n");
    }

    fp2 = fopen ("Binario.txt","w");
    if (fp2 != NULL)
    {
        fprintf(fp2,"%d + %d = %d\n", binario(num1), binario(num2), binario(suma(num1, num2)));
        fprintf(fp2,"%d - %d = %d\n", binario(num1), binario(num2), binario(resta(num1, num2)));
        fprintf(fp2,"%d * %d = %d\n", binario(num1), binario(num2), binario(multi(num1, num2)));
        fprintf(fp2,"%d / %d = %d\n", binario(num1), binario(num2), binario(divi((float)num1, (float)num2)));
        fclose (fp2);
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

int binario(int num){
    int numero = num;
    int *arreglo, i, j, bin;

    arreglo = malloc(8 * sizeof(int));

    for(i = 0; i < sizeof(arreglo); i++){
        arreglo[i] = numero % 2;
        numero /= 2;
        if (numero <= 0){
            break;
        }
    }

    for(j = i; j >= 0; j--){
        fprintf(fp2,"%d", arreglo[j]);
        if (j == 0){
            fprintf(fp2,"\n");
        }
    }
    free(arreglo);
}
