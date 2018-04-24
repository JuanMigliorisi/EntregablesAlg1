#include <stdio.h>
#include <stdlib.h>

#include "Entr2.h"

#define MSJ_SALIDA_HMS "H  M  S :\n""\n"
#define VALOR_MAX 86400
#define VALOR_MIN 0

typedef enum { ST_ERROR_NO_NUMERICO,
               ST_ERROR_BUFFER,
               ST_ERROR_RANGO,
               ST_OK
} status_t;

status_t Validar_Entrada(void)
{
    int n,c,k,i, comp[]={3600,60}, v[]={0,0,0};

    printf(MSJ_INGRESO_SEG);

    if(scanf("%d", &n)!=1){
    fprintf(stderr, "%s : %s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_INGRESO_INVALIDO);
    return ST_ERROR_NO_NUMERICO;
    }
    while((c=getchar())!= '\n' && c != EOF)
        ;
    if (n<VALOR_MIN || n>VALOR_MAX)
    {
        printf("%s : %s", MSJ_ERROR_PREFIJO, MSJ_ERROR_RANGO);
        return ST_ERROR_RANGO;
    }
    else
    {
    for (i=0;i<=1;i++)
    {
      while (n >= comp[i])
      {
            n = n - comp[i];
            v[i]++;
      }
    }
    v[2]=n;
    printf("H  M  S :\n""\n");
    for (k=0;k<=2;k++)
      printf("%d ", v[k]);
    return ST_OK;
    }
}



int main()
{
    Validar_Entrada();
}

