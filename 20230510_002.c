/*2. Criar um tipo abstrato de dados que represente uma pessoa, contendo: nome, data de nascimento e CPF.
-Crie uma função que receba um ponteiro para o TDA e preencha os dados da estrutura.
-Crie outra função que receba um ponteiro para o TDA e imprima os dados da estrutura.
-Crie um ponteiro para o TDA (no programa principal) e utilize as funções criadas.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char cpf[15];
	char nome[30];
	char data[9];
}teste;

void recebe(teste *valor){
	strcpy(valor->nome, "Roberto Gabriel");
	strcpy(valor->cpf, "961.882.512-49");
	strcpy(valor->data, "15/02/2004");
}

void imprimir(teste *valor){
	printf(" %s", valor->cpf);
	printf("\n %s", valor->nome);
	printf("\n %s", valor->data);
}

int main(){
	teste *valor;
	valor = (teste*) malloc (sizeof(teste));
	recebe(valor);
	imprimir(valor);
	free(valor);
	
	return 0;
}
