#include<stdio.h>
#include<stdlib.h>

#define MSJ_OUT_MEDIA "Esperanza"
#define MSJ_OUT_VAR "Varianza"
#define MSJ_OUT_MIN "Valor minimo"
#define MSJ_OUT_MAX "Valor maximo"


void imp_vec(float vec[], int largo);
void fill_zero(float vec[],int largo);
void fill_one(float vec[],int largo);
float Esp(float vec[],int largo);
float Var(float vec[],int largo);
float item_max(float vec[],int largo);
float item_min(float vec[],int largo);

int main(void){
    float vprueba[]={6,2,3,4,5};
    imp_vec(vprueba,5);
    printf(MSJ_OUT_MEDIA": %.2f\n",Esp(vprueba,5));
    printf(MSJ_OUT_VAR": %.2f\n",Var(vprueba,5));
    printf(MSJ_OUT_MIN": %.2f\n",item_min(vprueba,5));
    printf(MSJ_OUT_MAX": %.2f\n",item_max(vprueba,5));
    return EXIT_SUCCESS;
}

void fill_zero(float vec[],int largo){
    size_t i;
    for(i=0;i<largo;i++)
        vec[i]=0;
}

void fill_one(float vec[],int largo){
    size_t i;
    for(i=0;i<largo;i++)
        vec[i]=1;
}

void imp_vec(float vec[], int largo){
    int i;
    for(i=0;i<largo;i++)
        printf("%.2f ", vec[i]);
    puts("");
}

float Esp(float vec[],int largo){
    size_t i;float media=0;
    for(i=0;i<largo;i++)
        media += vec[i]*(i+1);
    return media;
}

float Var(float vec[],int largo){
    size_t i; float varianza=0;
    for(i=0;i<largo;i++)
        varianza += (i+1)*(i+1)*vec[i];
    varianza = varianza - Esp(vec,largo)* Esp(vec,largo);
    return varianza;
}

float item_min(float vec[],int largo){
    size_t i; float min;
    min = vec[0];
    for(i=1;i<largo;i++){
        if(min>vec[i])
            min = vec[i];
    }
    return min;
}

float item_max(float vec[],int largo){
    size_t i; float max;
    max = vec[0];
    for(i=1;i<largo;i++){
        if(max<vec[i])
            max = vec[i];
    }
    return max;
}
