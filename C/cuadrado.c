// Modifique el código para que el usuario/cliente asigna el valor de n desde la terminal
#include <stdio.h>
int fun(); // paso por copia de a

int main(){
    int (* fun_ptr)() = &fun, n; // precedencia

    scanf("%d", &n);
    printf("n*n=%d\n",(* fun_ptr)(n)); // (* fun_ptr)(n) LLamar
    return 0;
}

int fun(int a) {return a*a;}
