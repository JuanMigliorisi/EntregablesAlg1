#define CANT_PROCESOS 16
#define OPC_FIN "-1"
#define OPC_SEP "?"
#define LEER 10
#define ESCRIBIR 11
#define CARGAR 20
#define GUARDAR 21
#define PCARGAR 22
#define PGUARDAR 23
#define SUMAR 30
#define RESTAR 31
#define DIVIDIR 32
#define MULTIPLICAR 33
#define JMP 40
#define JMPNEG 41
#define JMPZERO 42
#define JNZ 43
#define DJNZ 44
#define HALT 45
#define END_READ -99999
/*Modificas la cantidad de comandos*/
#define MAX_PROC_NUM 2
#define MAX_POS_NUM 2
#define MAX_LIM_POS 100
#define CANT_DEFAULT 50
#define MAX_BUFF 100
/*Argumentos*/
#define FSIMBOL '-' /*Este simbolo es el primero que se pone en los argumentos por linea de comandos*/
#define DE_TXT "txt"
#define DE_BIN "bin"
#define PARAM1 "-i"
#define PARAM2 "-if"
#define PARAM3 "-of"
#define PARAM4 "-o"
#define PARAM5 "-h"
#define PARAM6 "-m"
#define MAX_ARGC 11
#define MIN_ARGC 2
#define NO_MEM "+XXXX" /*Se explica en la funcion imprimir_memo para que se usa*/
#define DEFAULT_MALLOC 10