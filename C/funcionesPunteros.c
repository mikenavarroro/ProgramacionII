// Modifica el código para que el usuario/cliente ingrese los valores de n y m;
//y que el cliente elija la operación.
#include <stdio.h>
int add();
int subs();
int prod();

int main(){
    int opcion, n, m;
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    scanf("%d", &opcion);

    int (* fun_ptr[3])() = {add,subs,prod}; // precedencia

    switch(opcion){
        case 1:{
            printf("Ingrese los numeros a sumar\n");
            scanf("%d %d", &n, &m);
            printf("%d + %d = %d\n", n, m, ((*fun_ptr[0])(n, m)));
            break;
        }
        case 2: {
            printf("Ingrese los numeros a restar\n");
            scanf("%d %d", &n, &m);
            printf("%d - %d = %d\n", n, m, ((*fun_ptr[1])(n, m)));
            break;
        }
        case 3:{
            printf("Ingrese los numeros a multiplicar\n");
            scanf("%d %d", &n, &m);
            printf("%d * %d = %d\n", n, m, ((*fun_ptr[2])(n, m)));
            break;
        }
        default:
            printf("Error.\n");
    }

    /*
    int (* fun_ptr[3])() = {add,subs,prod}; // precedencia
    for(int i = 0; i<3; i++){
        printf("n OPERADOR n=%d\n",(* fun_ptr[i])(n,m));
    }*/
    return 0;
}


int add(int a, int b) {return a+b;}
int subs(int a, int b) {return a-b;}
int prod(int a, int b) {return a*b;}
