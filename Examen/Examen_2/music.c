#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombreAl[30];
    char nombreAr[30];
    int anio;
    int noCanciones;
    float precio;
}album;

int main(){
    album *discos = malloc(5 * sizeof(album));
    int noDis;

    printf("Cuantos discos quieres ingresar? (min: 3, max: 5)\n");
    scanf("%d", &noDis);

    for(int i = 0; i < noDis; i++){
        printf("%d.- Nombre del disco: ", (i+1));
        scanf("%s", discos[i].nombreAl);

        printf("%d.- Nombre del artista: ", (i+1));
        scanf("%s", discos[i].nombreAr);
        fflush(stdin);
        printf("%d.- Anio: ", (i+1));
        scanf("%d", &discos[i].anio);

        printf("%d.- Numero de canciones: ", (i+1));
        scanf("%d", &discos[i].noCanciones);

        printf("%d.- Precio: ", (i+1));
        scanf("%f", &discos[i].precio);
        fflush(stdin);
    }

    for(int i = 0; i < noDis; i++){
        printf("%d.- Album: %s\n", (i+1), discos[i].nombreAl);
        printf("%d.- Artista: %s\n", (i+1), discos[i].nombreAr);
        printf("%d.- Anio: %d\n", (i+1), discos[i].anio);
        printf("%d.- Canciones: %d\n", (i+1), discos[i].noCanciones);
        printf("%d.- Precio: %.2f\n", (i+1), discos[i].precio);
    }
    free(discos);
}
