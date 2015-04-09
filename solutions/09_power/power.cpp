/*Este programa imprime los N primeros numeros naturales y los eleva al numero especificado por el usuario*/
#include <stdio.h>
#include <stdlib.h>

#define N 0x10//cantidad de numeros que se imprimiran.


//calcula el numero elevado a x.
int power(int base, int exponent){
    int resultado = base;
    if(base == 1)
	return 1;
    else{
	for(int multiplica=1; multiplica<exponent; multiplica++)
	    resultado *= base;
	return resultado;
    }
}//fin power

//se guarda el resultado de power en la matriz list
void fill_in(int list[N], int exponent){

    for(int rellenar=0; rellenar<N; ++rellenar)
	list[rellenar]=power(rellenar+1, exponent);
}//fin fill_in

//se imprime la matriz list
void print(int list[N]){
    for(int imprimir=0; imprimir<N; imprimir++)
	printf("%i ", list[imprimir]);
    printf("\n");
}//fin print

int main(int argc, char *argv[]){
    int list[N],
	exponent;

    //comprueba que hay atributos suficientes para que el programa funcione.
    if(argc<2){
	fprintf(stderr, "Uso: %s <exponenete>\n", argv[0]);
	return EXIT_FAILURE;
    }

    exponent = atoi(argv[1]);

    fill_in(list, exponent);
    print(list);

    return EXIT_SUCCESS;
}
