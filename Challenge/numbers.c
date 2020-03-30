#include <stdio.h>

int main(){
    int n, x;

    scanf("%d %d", &n, &x);

    if(n >= 4 && n <= 20 && x >= 0 && x < 20){   
        if(x < (n>>1)){
            printf("%d\n", (n>>1) + x);
        }else if(x > (n>>1)){
            printf("%d\n", x - (n>>1));
        }else{
            printf("0\n");
        }
    }
}