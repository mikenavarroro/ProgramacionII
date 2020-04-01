#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str;
    str = malloc(1);
    strcpy(str, "Universidad");
    printf("Texto = %s\n", str);
    return 0;
}
