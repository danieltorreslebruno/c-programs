#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char *argumento = argv[1];

    for(int i=0;i<10;i++)
	printf("%s\n", argumento);

    return EXIT_SUCCESS;
}
