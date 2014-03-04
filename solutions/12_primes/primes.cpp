/*Programa calcula los 70 primeros numeros primos*/
#include <stdio.h>
#include <stdlib.h>

#define N 70
int main(int argc, char *argv[]){
    //Declaran las variables
    int primes[N],
	primes_found,
	possible_prime;
    bool no_primes_found = true;

    //como sabemos que el 2 es el primer primo se da un valor a estas variables
    primes[0] = 2;
    primes_found = 1;
    possible_prime = 3;

    //bucle hasta encotrar los N primos
    while(primes_found != N){

	//bucle para comparar el posible primo con los primos que ya tenemos
	for(int intent=0; intent<primes_found; intent++)
	    //si un posible primo da resto 0 con un primo ya conocido
	    //se rompe el bucle for y se le asigna el valor false al booleano
	    if( possible_prime % primes[intent] == 0){
		no_primes_found = false;
		break;
	    }//fin if

	//comprueba que el posible primo no se ha dividido por ningun primo
	if(no_primes_found == true){
	    //hace las operaciones para introducir el nuevo primo
	    primes_found ++;
	    primes[primes_found-1] = possible_prime;
	}//fin if

	//reinicia el booleano
	no_primes_found = true;
	//busca el siguiente posible primo
	possible_prime ++;
    }//fin while

    //imprime los N primos
    for(int print=0; print<N; print++)
	printf("%i ", primes[print]);
    printf("\n");

    return EXIT_SUCCESS;
}
