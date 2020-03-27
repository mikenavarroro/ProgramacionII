#include <stdio.h>

int longitud(char cadena[]);


void main()
{

char cad[] = "Universidad Nacional Autonoma de Mexico";

printf("La longitud de %s es %d y la cantidad de 'a' es \n", cad, longitud(cad));

}



int longitud(char cadena[])
{
	int cuenta=0, conta =0;

while (cadena[cuenta] != '\0')
	{
		cuenta++;
		if(cadena[cuenta] == 'a' || cadena[cuenta] == 'A'){
			conta++;
		}
	}
return cuenta, conta;
}
