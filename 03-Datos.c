#include <stdio.h>

int main(){
  char nom[30];
  unsigned short int edad;

  printf("Nombre: ");
  scanf("%[^\n]%*c", nom);

  printf("Edad: ");
  scanf("%hi", &edad);

  printf("Hola %s, tu edad de %d es muy corta para entrar a este sitio\n", nom, edad);
}
