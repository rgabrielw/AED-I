/*3. Para o exerc�cio anterior crie um TDA para a data.
-Crie uma fun��o que receba um ponteiro para o TDA e preencha os dados da estrutura.
-Crie outra fun��o que receba um ponteiro para o TDA e imprima os dados da estrutura.
-Crie um ponteiro para o TDA (no programa principal) e utilize as fun��es criadas.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char data[11];
}data;

void recebe(data *valor){
	printf("digite a data abaixo\n\n");
	fgets(valor->data, 11, stdin);
}

void imprimir(data *valor){
	printf("\n %s", valor->data);
}

int main(){
	data *valor;
	valor = (data*) malloc (sizeof(data)); 
	recebe(valor);
	imprimir(valor);
	free(valor);
	
	return 0;
}
