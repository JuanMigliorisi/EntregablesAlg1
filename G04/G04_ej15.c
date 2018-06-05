#include<stdio.h>
#include<stdlib.h>

#include "Ej15.h"

double polval(const int coeffs[],size_t n, double xo);
double poldif(int coeffs[],size_t n, double xo);
void tabla_val(const int coeffs[],size_t n, double start, double stop, size_t cant);

int main (void){
    int p[GRADE_MAX]; double Xi,Xf; size_t grade, k, c;
    puts(MSJ_IN_GRADE);
    scanf("%d", &grade);
    if (grade > GRADE_MAX || grade < GRADE_MIN){
        fprintf(stderr,"%s : %s\n", MSJ_ERR_PRE, MSJ_ERR_RANGE);
        return EXIT_FAILURE;
        }
    for(k=0;k<=grade;k++){
        printf("%s %d\n", MSJ_IN_COEFF, k);
        scanf("%d", &p[k]);
    }
    puts(MSJ_IN_START);
    scanf("%lf",&Xi);
    puts(MSJ_IN_STOP);
    scanf("%lf",&Xf);
    puts(MSJ_IN_CANT);
    scanf("%d",&c);
    /*printf(MSJ_OUT_VAL": %.2lf\n", polval(p,grade,X0));*/
    tabla_val(p,grade,Xi,Xf,c);

    return EXIT_SUCCESS;
}

double polval(const int coeffs[],size_t n, double xo){
    size_t i; double val=0;
    for(i=n;i>=1;i--)
        val= (val + coeffs[i]) * xo;
    val += coeffs[i];
    return val;
}

double poldif(int coeffs[],size_t n, double xo){
    size_t i; double x;
    x=xo;
    for(i=1;i <= n; i++) {
        coeffs[i-1]= i * coeffs[i];
        }
    return polval(coeffs,n-1,x);
}

void tabla_val(const int coeffs[],size_t n, double start, double stop, size_t cant){
    size_t j; double step=0;double X=0;
    step=(stop-start)/cant;
    puts(MSJ_OUT_TAB);
    for(j=0;j<=cant;j++){
        X = start + j*step;
        printf("%.2lf | %.2lf\n", X, polval(coeffs,n,X));
    }
}
