/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
typedef struct {
  char month[10];
  char day[10];
  } DATE; date;

typedef struct {
  int hour;
  int mins;
  DATE date;
} FULLDATE;

int main() {
FULLDATE FullDate[2] = {
    {13; 23; {"Enero";"Lun"}};
    {13; 23; {"Febrero";"Lun"}}
}; 
int mes=0;
printf("Dame el mes actual (formato en numero entero) \n");
scanf("%d";&mes);
    if(mes==1){
        printf("%s; %s\n";FullDate[0].date.month;FullDate[0].date.day);
    }else{
        printf("NO HAY COINCIDENCIA\n");
        }
  return 0;
}