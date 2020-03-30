#include <stdio.h>
#include <ctype.h>

int main(){
    int n, in1, in2;
    scanf("%d", &n);

    char string[n];
    scanf("%s", string);
    scanf("%d %d", &in1, &in2);

    int num1, num2;
    num1 = (int)string[in1];
    num2 = (int)string[in2];

    if(num1 >= 65 && num1 <= 90){
        string[in1] = tolower((char)num1);
    }else{
        string[in1] = toupper((char)num1);
    }

    if(num2 >= 65 && num2 <= 90){
        string[in2] = tolower((char)num2);
    }else{
        string[in2] = toupper((char)num2);
    }

    printf("%s\n", string);
}