#include <stdio.h>

int main(){
    int **ptr_ptr_num1, *ptr_num1, num1;

    ptr_num1 = &num1;
    ptr_ptr_num1 = &ptr_num1;

    printf("Escribe un numero: ");
    scanf("%d", &num1);

    printf("\tvariable\t|\t\tcontenido\t|\t\tdireccion de memoria\n");
    printf("------------------------|-------------------------------|----------------------------------------\n");
    printf("\tnum1\t\t|\t\t%d\t\t|\t\t%p\n", num1, &num1);
    printf("------------------------|-------------------------------|----------------------------------------\n");
    printf("\tptr_num1\t|\t%p\t\t|\t\t%p\n", ptr_num1, &ptr_num1);
    printf("------------------------|-------------------------------|----------------------------------------\n");
    printf("\tptr_ptr_num1\t|\t%p\t\t|\t\t%p\n", ptr_ptr_num1, &ptr_ptr_num1);
    printf("------------------------|-------------------------------|----------------------------------------\n");
}
