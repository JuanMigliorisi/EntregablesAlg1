#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM_MAX 6
#define NUM_MIN 1

void IMP_UNO(void){
    printf("|     |\n"
           "|  *  |\n"
           "|     |\n"
           "\n");
}
void IMP_DOS(void){
    printf("|    *|\n"
           "|     |\n"
           "|*    |\n"
           "\n");
}
void IMP_TRES(void){
    printf("|*    |\n"
           "|  *  |\n"
           "|    *|\n"
           "\n");
}
void IMP_CUATRO(void){
    printf("|*   *|\n"
           "|     |\n"
           "|*   *|\n"
           "\n");
}
void IMP_CINCO(void){
    printf("|*   *|\n"
           "|  *  |\n"
           "|*   *|\n"
           "\n");
}
void IMP_SEIS(void){
    printf("|*   *|\n"
           "|*   *|\n"
           "|*   *|\n"
           "\n");
}


int Aleatorio_entero(int a,int b){
 return a + rand() % b;
}
void Dado (void){
 switch (Aleatorio_entero(NUM_MIN,NUM_MAX)){
    case 1:
        IMP_UNO();
        break;
    case 2:
        IMP_DOS();
        break;
    case 3:
        IMP_TRES();
        break;
    case 4:
        IMP_CUATRO();
        break;
    case 5:
        IMP_CINCO();
        break;
    case 6:
        IMP_SEIS();
        break;
  }
}

int main (){
int i;
srand( time( NULL ) );

/*Simulo 6 tiros del dado*/

 for(i=0;i<=6;i++){
 Dado();
 }
 return EXIT_SUCCESS;
}
