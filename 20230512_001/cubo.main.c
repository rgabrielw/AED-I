#include <stdio.h>
#include <stdlib.h>
#include <cubo.h>

int main(){
	cubo *valor;
	valor = (cubo*) malloc(sizeof(cubo));
	recebe(valor);
	imprime(valor);
	free(valor);
	return 0;
}
