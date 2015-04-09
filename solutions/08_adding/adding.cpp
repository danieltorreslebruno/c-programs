#include <stdio.h>
#include <stdlib.h>

void imprimir_error(char *argv[]){

    fprintf(stderr, "Uso: %s <numero> \n", argv[0]);
    exit(EXIT_FAILURE);

}


double add(double numero[], double numero2){
    int contador = -1;
    double resultado = 0;

    do{
	contador ++;
	resultado += numero[contador];
    }while(numero[contador] != numero2);
    return resultado;

    /*double resultado = 0;
      int contador = -1;
      if(numero[contador] == numero2){
      resultado += numero[contador];
      return resultado;
      }
      else
      return resultado += numero[contador++];*/
}//fin add

int main(int argc, char *argv[]){
    double numero[argc-1],
	   resultado;

    if(argc<2)
	imprimir_error(argv);

    //se le asignan los valores dados por el usuario al array numero
    for(int asignar_valor=0; asignar_valor<argc-1; asignar_valor++)
	numero[asignar_valor] = atof(argv[asignar_valor+1]);

    resultado = add(numero, numero[argc-1]);
    printf("Resultado es %.2lf\n", resultado);

    return EXIT_SUCCESS;
}
