#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Parametro_a 0.2
#define Parametro_b1 0.1
#define Parametro_b2 0.65

int Prob_Xb (float aleatorio){
 if (aleatorio < 1 && aleatorio > Parametro_b2)
  return 9;
 else if (aleatorio < Parametro_b2 && aleatorio > Parametro_b1)
  return 5;
 else
  return 3;
}

int main (void){
 int i;
 float U;
 srand( time ( NULL ) );
 for (i=0;i<=14;i++){         /*pruebo llamar a la funcion 15 veces e imprimo el resultado*/
  U=(float)rand()/RAND_MAX;
  printf("%.4f\n",U);
  printf("%d\n""\n", Prob_Xb (U));
 }
 return EXIT_SUCCESS;
}

