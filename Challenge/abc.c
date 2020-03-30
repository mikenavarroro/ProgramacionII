#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 96+n; i >= 97; i--){
        printf("%c", (char)i);
    }
}