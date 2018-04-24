#include <stdio.h>
#include <stdlib.h>

#include "MsE24.h"

int main()
{
 int c,j,i,n;
 float m,max=0,min,km,p,r[50],lt,dt,raux=0;

printf(MSJ_INGRESO_CANT_CARGAS);
 if(scanf("%d", &n)!=1){
    fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_NO_NUMERICO);
    return EXIT_FAILURE;
 }
 while((c=getchar())!= '\n' && c != EOF)
    ;
 if (n<1 || n>50){
    printf("%s : %s", MSJ_ERROR_PREFIJO, MSJ_ERROR_INGRESO_FUERA_RANGO);
    return EXIT_FAILURE;
 }
 for(i=0;i<n;i++){
    /*km=0;m=0;p=0;*/
    printf(MSJ_INGRESO_MONTO);
    scanf("%f", &m);
    printf(MSJ_INGRESO_PRECIO);
    scanf("%f", &p);
    printf(MSJ_INGRESO_KILOMETROS);
    scanf("%f", &km);
    r[i]= ((m/p)/km)*100;
    printf(MSJ_SALIDA_REND_PARCIAL, r[i]);
    printf("\n");
    dt+=km;
    lt+=(m/p);
    raux += r[i];
}
 min = r[0];
 max = r[0];
 for(j=1;j<n;j++){
    if(r[j]<max)
        max= r[j];
    else
        min = r[j];
 }
 printf("\n");
 printf(MSJ_SALIDA_REND_PROM, raux/n);
 printf(MSJ_SALIDA_REND_MAX, max);
 printf(MSJ_SALIDA_REND_MIN, min);
 printf(MSJ_SALIDA_DIST_TOTAL, dt);
 printf(MSJ_SALIDA_COMB_TOTAL, lt);

 return EXIT_SUCCESS;
}
