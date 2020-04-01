#include <stdio.h>
#include <math.h>

int main(){
    int A[2], B[2], distanceA = 0, distanceB = 0;

    for(int i = 0; i < 2; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 2; i++){
        scanf("%d", &B[i]);
    }

    distanceA = sqrt(A[0]*A[0]+A[1]*A[1]);
    distanceB = sqrt(B[0]*B[0]+B[1]*B[1]);

    if(distanceA < distanceB){
        printf("%d\n", distanceA);
    }else{
        printf("%d\n", distanceB);
    }
}
