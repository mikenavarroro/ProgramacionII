#include <stdio.h>

enum dias{
    enero = 31,
    febrero = 28,
    marzo = 31,
    abril = 30,
    mayo = 31,
    junio = 30,
    julio = 31,
    agosto = 31,
    septiembre = 30,
    octubre = 31,
    noviembre = 30,
    diciembre = 31
};

int main(){
    int totalDias[12] = {enero, febrero, marzo, abril, mayo, junio, julio, agosto,\
        septiembre, octubre, noviembre, diciembre};
    int total = 0;

    for(int i = 0; i < 12; i++){
        total += totalDias[i];
    }
    printf("%d\n", total);
}
