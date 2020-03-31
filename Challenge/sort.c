#include <stdio.h>
#include <ctype.h>

int main(){
    int n, aux;
    scanf("%d", &n);

    char cadena[n];

    for(int i = 0; i < n; i++){
        scanf("%c", cadena[i]);
    }

    for(int i = 0; i <= n; i++){
        printf("%c ", cadena[i]);
    }
/*
    for(int i = 0; i < n; i++){
      for(int j = 0; j < (n - i); j++){
        if(tolower(cadena[j]) > tolower(cadena[j+1])){
            aux = cadena[j+1];
            cadena[j+1] = cadena[j];
            cadena[j] = aux;
        }
      }
    }

    for(int i = 0; i < n; i++){
        printf("%c", cadena[i]);
    }*/
}