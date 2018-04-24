#include <stdio.h>
#include <stdlib.h>

void funcion (void){
    static int x = 0;
    x++;
    printf("%d\n",x);
}
int main(void)
{
    funcion();
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}

/*Esta funcion imprime el valor de la variable x. Como la variable es del tipo static, la misma
retiene el valor que se le asigno la ultima vez que fue llamada la funcion.
Por lo tanto, como se utiliza la funcion 5 veces se imprimen los numeros enteron del uno al cinco,
ya que cada vez que se utiliza la funcion "funcion" se le suma uno al valor de la variable x)*/
