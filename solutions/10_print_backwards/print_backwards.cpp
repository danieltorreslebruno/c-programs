#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int total;
    system("clear");
    //Imprime la palabra introducida
    printf("Palabra introducida:\t\t%s\n\n", argv[1]);

    //Averigua cuantas posiciones ocupa argv[1] 
    total = strlen(argv[1]);

    printf("La palabra al reves es:\t\t");
    //Pasa por las posiciones de la matriz para imprimir de atras a alante la palabra introducida
    for(int posicion_ultima_palabra = (total - 1); posicion_ultima_palabra >= 0; posicion_ultima_palabra--)
	printf("%c", argv[1][posicion_ultima_palabra]);
    printf("\n\n\n");

    //Y lo guarda en la variable total, luego imprime su valor
    printf("La palabra que has introducido ocupa %i posiciones\n", total);
    printf("Va desde argv[0] hasta argv[%i]\n\n", (total-1));

    return EXIT_SUCCESS;
}
