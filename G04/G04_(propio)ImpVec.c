#include<stdio.h>
#include<stdlib.h>

void imp_vec(float vec[], int cant);

int main(void){
    float vprueba[]={1,2,3,5,6.78};
    imp_vec(vprueba,5);
    return EXIT_SUCCESS;
}
void imp_vec(float vec[], int cant){
    int i;
    for(i=0;i<cant;i++)
        printf("%.4f ", vec[i]);
}
