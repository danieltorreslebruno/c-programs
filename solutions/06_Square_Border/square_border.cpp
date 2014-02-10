#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int introducido;

    printf("Numero de lados del cuadrado: ");
    scanf(" %i", &introducido);

    for(int fila=0;fila<introducido;fila++){
	for(int col=0;col<introducido;col++){
	    if(fila == 0 || col == 0 || fila == (introducido - 1) 
		    || col == (introducido - 1))
		printf("*");
	    else
		printf(" ");

	}
	printf("\n");
    }





    return EXIT_SUCCESS;
}
