#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    //char frase = atoi(argv[1]);//atoi es Ascii to int
    //Para un entero se utiliza atoi(argv[1]); 
    //Para un char no hace falta ya que es 
    //una cadena de caracteres char *argv[]

    for(int n_veces=0; n_veces<10;n_veces++){
	printf("%s\n", argv[1]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
