#include <stdio.h>
#include <stdlib.h>

typedef struct cubo{
	float lado;
	float area;
	float volume;
}cubo;

void recebe(cubo *valor){
	printf("digite o valor do lado do cubo abaixo:\n");
	scanf("%f", &valor->lado);
	valor->area = 6*((valor->lado)*(valor->lado));
	valor->volume = ((valor->lado)*(valor->lado)*(valor->lado));
}

void imprime(cubo *valor){
	printf("\nlado: %.1f", valor->lado);
	printf("\narea: %.1fm2", valor->area);
	printf("\nvolume: %.1fm3", valor->volume);
}

int main(){
	cubo *valor;
	valor = (cubo*) malloc(sizeof(cubo));
	recebe(valor);
	imprime(valor);
	free(valor);
	return 0;
}
