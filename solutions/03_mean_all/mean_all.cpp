#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    /* Declaramos contador como int ya que solo va a moverse entre
       numeros enteros                                 */
    int contador = 0;//*
    /* Declaramos como double porque el usuario puede introducir
       numeros enteros o decimales, si es asi el "int" nos daria
       errores                                                 */
    double numero,
	   numero_total = 0;//**
    /* Usamos la expresion do while para coger todos los numeros
       que se introduzcan mientras(while) no sean numeros negati-
       vos                                         */
    do{
	printf("Introduce un numero: ");
	scanf(" %lf", &numero);
	/* Si el numero introducido es mayor o igual que 0, es decir,
	   no es negativo, acumula en numero_total el numero. Si no
	   pusieramos el if el numero negativo introducido para aca-
	   bar la media se introduciria en numero_total         */
	if(numero >= 0){
	    numero_total += numero;
	    contador++;//***
	}


    }while(numero >= 0);

    double media = numero_total/(contador);
    printf("La media de los numeros introducidos es %.2lf\n", media);


    return EXIT_SUCCESS;
}

/*----------COMENTARIOS-----------/

 * con ***: Usamos el contador para contar cuantos numeros hemos intro-
 ducido. Cada vez que introduzcamos un numero el contador lo
 contara como un numero, para luego hacer la media. Recordar
 que siempre hay que INICIALIZAR un contador, ya que sino el
 contador valdra el hueco de memoria en el que este la va-
 riable y el programa dara errores por todos lados.

 **: numero_total es una variable que necesita ser inicializada
 ya que sino pasa como con el ejemplo anterior, la variable
 valdra la posicion de memoria y nos dara muchos errores.
 */
