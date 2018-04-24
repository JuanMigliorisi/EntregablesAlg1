#include <stdio.h>
#include <stdlib.h>
#ifndef M_PI
#define M_PI 3.14159
#endif // M_PI

float cilindro_diametro(float r,float h){  /*donde "r" es el radio y "h" la altura*/
    return 2*r;
}
float cilindro_circunferencia(float r,float h){
    return 2*M_PI*r;
}
float cilindro_base(float r,float h){
    return 2*M_PI*r*r;
}
float cilindro_volumen(float r,float h){
    return 2*M_PI*r*r*h;
}
/*prueba de funcionamiento*/
/*Las unidades de los resultados dependen obviamente de las unidades de los parametros r y h asignados*/

int main (void){
    printf("El diametro es %.2f\n" "La circunferencia es %.2f\n"
           "La base es %.2f\n" "El volumen es %.2f\n" ,
           cilindro_diametro(1,5),cilindro_circunferencia(1,5),
           cilindro_base(1,5), cilindro_volumen(1,5) );
    return EXIT_SUCCESS;
}
