/*Imprime una frase al reves*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    const char *sentence = "The world is a vampire.";
    const char *beginning = sentence;
    const char *end = sentence;

    //mueve el puntero end hasta el final de la frase
    while(*end != '\0')
	end ++;
    //imprime desde el final de la frase hasta el principio
    while(end != beginning){
	end --;
	printf("%c", *end);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
