#include <stdio.h>
#include <string.h>
int main(){
    char *data = {"enero y febrero"};
    char *ptrdata = data;
    int i;

    printf("Valores guardados: \n");
    
    for(i = 0; i < strlen(ptrdata); i++){
        printf("%c", * (ptrdata+i));
    }
    
    printf("\n%d\n", i);

    return 0;
}