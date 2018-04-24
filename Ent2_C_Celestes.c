#include<stdio.h>
#include<stdlib.h>

#include "Entr2.h"

typedef enum {O,B,A,F,G,K,M} espectral_t;
int main (){
 float temp=0;
 int c;
 espectral_t clase;

 printf(MSJ_INGRESO_TEMP);
 if(scanf("%f", &temp)!=1){
    fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_INGRESO_INVALIDO);
    return EXIT_FAILURE;
 }
 while((c=getchar())!= '\n' && c != EOF)
    ;
 if (temp<TEMP_MIN || temp>TEMP_MAX){
    printf("%s : %s", MSJ_ERROR_PREFIJO, MSJ_ERROR_RANGO);
    return EXIT_FAILURE;
 }
 if (temp>=1700 && temp<3200)
    clase = M;
 else if (temp>=3200 && temp<4600)
    clase = K;
 else if (temp>=4600 && temp<5700)
    clase = G;
 else if (temp>=5700 && temp<7100)
    clase = F;
 else if (temp>=7100 && temp<9600)
    clase = A;
 else if (temp>=9600 && temp<28000)
    clase = B;
 else if(temp>=28000 && temp<=50000)
    clase = O;
 switch (clase){
    case O:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_O);
        break;
    case B:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_B);
        break;
    case A:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_A);
        break;
    case F:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_F);
        break;
    case G:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_G);
        break;
    case K:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_K);
        break;
    case M:
        printf("%s %s", MSJ_SALIDA_GEN, MSJ_SALIDA_CLASE_M);
        break;
 }
 return EXIT_SUCCESS;
}
