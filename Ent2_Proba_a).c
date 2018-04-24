#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Parametro_a 0.2

int Prob_Xa (float aleatorio){
 if (aleatorio < 1 && aleatorio > Parametro_a)
  return 1;
 else
  return 0;
}

int main (void){
 int i;
 float U;
 srand( time ( NULL ) );
 /*llamo 15 veces a la funcion a modo de prueba*/
 for (i=0;i<=14;i++){
  U=(float)rand()/RAND_MAX;
  printf("%.4f\n",U);
  printf("%d\n""\n", Prob_Xa(U));
 }
 return EXIT_SUCCESS;
}
