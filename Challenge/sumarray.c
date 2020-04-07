#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int array[n], suma = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++){
        suma += array[i];
    }
    printf("%d\n", suma);
}
