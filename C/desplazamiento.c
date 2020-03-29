#include <stdio.h>

int main(){
    int num;

    printf("Escribe un numero: ");
    scanf("%d", &num);

    printf("El doble de ese numero es %d\n", num << 1);

    return 0;
}
