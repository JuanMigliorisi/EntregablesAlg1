#include <stdio.h>
#include <stdlib.h>

#include "MsE24.h"

int main (){

 int d,c;

 printf(MSJ_INGRESO_DIA);
 if(scanf("%d", &d)!=1){
    fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_NO_NUMERICO);
    return EXIT_FAILURE;
 }
 while((c=getchar())!= '\n' && c != EOF)
    ;
 if (d<1 || d>366){
    printf("%s : %s", MSJ_ERROR_PREFIJO, MSJ_ERROR_INGRESO_FUERA_RANGO);
    return EXIT_FAILURE;
 }
 while(d>7){
    d = d-7;
 }
 switch (d){
    case 1:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_DO);
        break;
    case 2:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_LU);
        break;
    case 3:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_MA);
        break;
    case 4:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_MI);
        break;
    case 5:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_JU);
        break;
    case 6:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_VI);
        break;
    case 7:
        printf("%s : %s", MSJ_SALIDA_DIA, MSJ_SALIDA_DIA_SA);
        break;
 }
 return EXIT_SUCCESS;
}

