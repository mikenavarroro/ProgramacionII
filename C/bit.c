#include <stdio.h>

int main(){
    int numero_dec, lugar_bit = 1, n_recorrer;

    scanf("%d", &numero_dec);
    scanf("%d", &n_recorrer);

    if(numero_dec & (lugar_bit << n_recorrer-1))
	printf("Del numero %d su %d bit es 1\n", numero_dec, n_recorrer);
    else
	printf("Del numero %d su %d bit es 0\n", numero_dec, n_recorrer);
}
