#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int altura;
    printf("Introduce una altura: ");
    scanf(" %i", &altura);

    for(int fila=0;fila<altura;fila++){
	for(int columna=0;columna<altura;columna++){
	    if(fila == columna || columna == 0 || columna == (fila-1) || fila > columna)
		printf("*");
	    else
		printf("_");
	}
	printf("\n");
    }

    return EXIT_SUCCESS;
}
