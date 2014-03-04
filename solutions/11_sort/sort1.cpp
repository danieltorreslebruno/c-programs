/*Compara dos palabras y las imprime en orden alfabetico*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void comparador(const char *list[], int *comparacion){
    //compara las palabras y guarda el resultado 1 || 0 ||-1
    *comparacion = strcmp(list[0], list[1]);
}

void imprimir(const char *list[], int comparacion){
    //imprime en condicion del resultado el orden de las palabras
    if(comparacion < 0)
	printf("El orden es: %s %s", list[0], list[1]);
    else
	if(comparacion == 0)
	    printf("Son iguales");
	else
	    printf("El orden es: %s %s", list[1], list[0]);
    printf("\n");

}
int main (int argc, char *argv[]){
    const char *list[] = {"yield", "yelp"};
    int comparacion;

    //llama e la fincion comparador para comparar las palabras
    //le pasa la constante lista y la direccion de comparacion
    comparador(list, &comparacion);

    //imprime las palabras
    imprimir(list, comparacion);


    return EXIT_SUCCESS;
}
