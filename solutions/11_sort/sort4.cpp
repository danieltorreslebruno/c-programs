/*Compara una cantidad variable de palabras y las imprime en orden alfabetico*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char *argv[]){
    const char *list[] = {"yield", "yelp", "yellow"};
    int comparador_palabras, letras, palabras, palabra_mayor;
    const char *palabra_temporal;

    palabra_mayor = 0;
    //calcula la cantidad de palabras de la lista
    palabras=(sizeof(list)/sizeof(char *));

    //compara cada palabra y las ordena
    for(int comparador=0; comparador<palabras; comparador++)
	for(int comparacion=comparador+1; comparacion<palabras; comparacion++){
	    //compara dos palabras
	    comparador_palabras=strcmp(list[comparador], list[comparacion]);
	    //si la palabra comparadora es menor que la palabra que la compara(comparacion)
	    if(comparador_palabras > 0){
		//se guarda la palabra que es mas pequeña en una variable de uso temporal
		palabra_temporal = list[comparador];
		//se guarda la palabra mas grande en la posicion en la que estaba la mas pequeña
		list[comparador] = list[comparacion];
		//se guarda en la posicion de la palabra que comparaba la palabra mas pequeña
		list[comparacion] = palabra_temporal;
	    }//fin if
	}//fin for

    //se imprime la lista ordenada
    for(int imprimir=0; imprimir<palabras; ++imprimir)
	printf("%s\n", list[imprimir]);

    return EXIT_SUCCESS;
}
