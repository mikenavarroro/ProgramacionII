#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fpN, *fpL;
    char *name = malloc(20 * sizeof(char));
    char *lstname = malloc(20 * sizeof(char));

    fpN = fopen("Name.txt","r");
    if(fpN != NULL){
        fseek(fpN, 13, SEEK_SET);
        fscanf(fpN,"%s", name);
        fclose (fpN);
    }else{
        printf("No se pudo encontrar el archivo\n");
    }

    fpL = fopen("LastName.txt", "r");
    if(fpL != NULL){
        fseek(fpL, 14, SEEK_SET);
        fscanf(fpL, "%s", lstname);
        fclose(fpL);
    }else{
        printf("No se pudo encontrar el archivo\n");
    }

    FILE *fp;
    fp = fopen ("FullName.txt","w");
    if (fp != NULL){
        printf("Por favor, revisa \"FullName.txt\"\n");
        fprintf(fp,"%s\n", strcat(name, lstname));
        fclose (fp);
    }

    free(name);
    free(lstname);
}
