#include <stdio.h>
#include <math.h>

int main(){

  int i, x[2], y[2];
  float dist;
  for(i = 0; i < 2; i++){
    printf("Dame la coordenada x del punto %d: ", i+1);
    scanf("%d", &x[i]);
    printf("Dame la coordenada y de punto %d: ", i+1);
    scanf("%d", &y[i]);
  }

  dist = sqrt((x[1] - x[0])*(x[1] - x[0])+(y[1] - y[0])*(y[1] - y[0]));
  printf("La distancia entre los puntos (%d, %d) y (%d, %d) es %.2f\n", x[0], y[0], x[1], y[1], dist);

}
