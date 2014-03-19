#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    const char *sentence  = "The world is a vampire.";
    const char *beginning = sentence;
    const char *end       = sentence;
    
    while(*beginning != '\0')
	beginning++;
    /*Ojo, importante: beginning++ es distinto que 
      *beginning++; ya que esta última lo que hace
      es primero al ser mas importante el ++ hace
      beginning++ y luego *, es decir, nada, pero
      (*beginning)++ sería aumentar lo que hay en 
      *beginning, ejemplo, la 'T', en uno, si es en
      ascii 62, sería 63.
      */
    while(*beginning != *sentence){
	beginning--;
	printf("%c", *beginning);}
    printf("\n");
    /*Si escribimos lo siguiente, imprime toda la palabra

      printf("%s", beginning);

	Resumen: Un puntero es como un array solo que no necesitamos
	reservar celdas para escribir la palabra, sino que el puntero
	las reserva solo.

     */

    return EXIT_SUCCESS;

}
