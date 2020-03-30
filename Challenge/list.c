#include <stdio.h>

int main(){
    int n, suma = 0, max;
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){
        suma += array[i];
    }

    max = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    int resto = suma % max;
    printf("%d\n", resto);
}