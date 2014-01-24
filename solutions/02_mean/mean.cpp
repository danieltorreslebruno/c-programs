#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num_introducido;
    int numero_total = 0;

    for(int numero=0;numero<10;numero++){
	printf("Introduce el numero %i: ", (numero+1));
	scanf(" %i", &num_introducido);
	numero_total += num_introducido;    
    }

    int media = (numero_total/10);

    printf("La media de los 10 numeros introducidos es %i\n", media);


    return EXIT_SUCCESS;
}
