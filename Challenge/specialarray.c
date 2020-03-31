#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int numeros[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n; i++){
        if (numeros[i] <= 0){
            printf("No\n");
            break;
        }else{
            if(i == (n-1)){
                printf("Yes\n");
            }
        }
    }    
}