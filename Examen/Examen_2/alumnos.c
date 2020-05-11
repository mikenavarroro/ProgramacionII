#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nom[30];
    float calif;
}alum;

int main(){
    alum *alumnos;
    int num = 0, i = 0, mayor;
    float aux;

    do {
        printf("Nombre del alumno: ");
        scanf("%s", alumnos[i].nom);
        printf("Calificacion: ");
        scanf("%f", &alumnos[i].calif);

        printf("Si no desea agregar otro alumno escriba \"-1\" \n");
        printf("Para agregar otro alumno escriba cualquier otro numero\n");
        scanf("%d", &num);
        i++;
    } while(num != -1 || i <= 5);

    for(int j = 1; j < i; j++){
        for(int k = 0; k < i-1; k++){
            if(alumnos[j].calif > alumnos[k].calif){
                aux = alumnos[j].calif;
                alumnos[j].calif = alumnos[k].calif;
                alumnos[k].calif = aux;
            }
        }
    }

    for (int j = 0; j < i; j++)
        printf("%d.- Nombre: %s. Calificacion: %.2f\n",j+1, alumnos[j].nom, alumnos[j].calif);

}
