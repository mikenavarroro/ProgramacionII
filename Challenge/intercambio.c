#include <stdio.h>

int main(){
    int n, aux;
    
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < (n/2); i++){
        aux = numeros[i];
        numeros[i] = numeros[n-1-i];
        numeros[n-1-i] = aux;
    }

    for(int i = 0; i < n ; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
}