/*
Escribe un código que implemente apuntadores, una estructura, switch,
funciones creadas por el usuario y funciones de gestión dinámica de memoria;
que tome los datos desde la terminal de un arreglo N y un arreglo M (ambos del mismo tamaño, n)
y que realice la suma, la resta, multiplicación y división de las componentes de cada uno de los arreglos.
Las operaciones se realizan componente a componente; es decir N[i] con M[i].
El usuario debería introducir las componentes que desea sumar y el tamaño de los arreglos
(que serán el mismo).
*/
#include <stdio.h>
void saludo();
struct Persona{
    char nombre[30];
};

int main(){
    saludo();
    int n, i;
    struct Persona per;
    

    printf("Primer nombre: ");
    scanf("%s", per.nombre);

    printf("Numero de elementos del arreglo: ");
    scanf("%d", &n);

    float a[n], b[n];
    for(i = 0; i < n; i++){
        printf("El numero de la posicion %i del primer vector: ", i+1);
        scanf("%f", &a[i]);

        printf("El numero de la posicion %i del segundo vector: ", i+1);
        scanf("%f", &b[i]);
    }
    printf("%s, la suma es [%.2f, ", per.nombre, a[0] + b[0]);
    for(i = 1; i < n-1; i++){
        printf("%.2f, ", a[i]+b[i]);
    }
    printf("%.2f]\n", a[n-1]+b[n-1]);
    
    printf("La resta es [%.2f, ",a[0] - b[0]);
    for(i = 1; i < n-1; i++){
        printf("%.2f, ", a[i]-b[i]);
    }
    printf("%.2f]\n", a[n-1]-b[n-1]);

    printf("La multiplicacion es [%.2f, ",a[0] * b[0]);
    for(i = 1; i < n-1; i++){
        printf("%.2f, ", a[i]*b[i]);
    }
    printf("%.2f]\n", a[n-1]*b[n-1]);

    printf("La division es [%.2f, ",a[0] / b[0]);
    for(i = 1; i < n-1; i++){
        printf("%.2f, ", a[i]/b[i]);
    }
    printf("%.2f]\n", a[n-1]/b[n-1]);
}

void saludo(){
    printf("Hola, este programa suma, resta, divide y multiplica 2 vectores\n");
}