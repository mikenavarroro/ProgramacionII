#include<stdio.h>

struct timeR{ // seconds
  float begTime;
  float endTime;
  float befTime;
};

struct nameStr{
	char name[30];
	char lstNe[30];
	struct timeR tmsRnnr;
};

int main(){
  struct nameStr fullName={"Peter Jose", "Gomez Perez", {1400, 3500, 0.0}};

  printf("%s\n", fullName.name);
  printf("%s\n", fullName.lstNe);
  printf("%f\n", fullName.tmsRnnr.begTime);
  printf("%f\n", fullName.tmsRnnr.endTime);
  printf("%f\n", fullName.tmsRnnr.befTime);

  return 0;
}
