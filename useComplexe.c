#include <stdio.h>
#include<stdlib.h>
#include"complexe.h"
int main(){
Complexe z1,z2,z3;
z1=nouveauComplexe(1.0,0.0);
z2=nouveauComplexe(0.0,1.0);
z3=plus(z1,z2);
  
  printf("module : %f\n",module(z3));
  printf("argulent : %f\n",argument(z3));
  return EXIT_SUCCESS;
}
