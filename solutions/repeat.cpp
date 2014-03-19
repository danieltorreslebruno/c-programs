#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if(argc < 2){
	printf("Solo has introducido un parámetro, por favor, introduce un segundo parámetro para ejecutar el programa\n");
	return EXIT_FAILURE;
    }

    for(int i=0;i<10;i++)
	printf("%s\n", /*la dirección del primer carácter*/argv[1]);

    return EXIT_SUCCESS;
}
