#include <stdio.h>

int main(){
    char a;
    int num;

    printf("Escribe un caracter: ");
    scanf("%c", &a);

    num = (int)a;
     
    if(num >= 33 && num <= 127){
        printf("Su codigo ascii es %d\n", num);
    }else{
        printf("Caracter incorrecto\n");
    }
}