#include <stdio.h>
#include <stdlib.h>

void writeFile(char *, char *);

int main(){
    char *name = malloc(20 * sizeof(char));
    char *lstname = malloc(20 * sizeof(char));

    printf("Nombre: ");
    scanf("%s", name);
    printf("Apellido: ");
    scanf("%s", lstname);

    writeFile(name, lstname);
}

void writeFile(char *name, char *lstname){
    FILE *fpName, *fpLName;

    fpName = fopen ("Name.txt","w");
    if(fpName!=NULL){
        printf("Revisa el archivo \"Name.txt\" \n");
        fprintf(fpName,"Tu nombre es %s\n", name);
        fprintf(fpName, "Ahora revisa \"LastName.txt\" para ver tu apellido \n");
        fclose (fpName);
    }else{
        printf("Ocurrio un error al crear el archivo\n");
    }

    fpLName = fopen ("LastName.txt","w");
    if(fpLName != NULL){
        fprintf(fpLName,"Tu apellido es %s\n", lstname);
        fclose (fpLName);
    }else{
        printf("Ocurrio un problema al crear en el archivo\n");
    }
}
