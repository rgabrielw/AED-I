#include <stdbool.h>
#ifndef TURMA_H_INCLUDED
#define TURMA_H_INCLUDED

typedef struct{
	int cod_aluno;
	char nome[50];
	int idade;
	int n_filhos;
}ALUNO;

typedef struct{
	ALUNO alun;
	int proximo;
}ELEMENTO;

typedef struct{
	ELEMENTO turma[100];
	int inicio;
	int disponivel;
}LISTA_MATRICULA;

void inicializarLista(LISTA_MATRICULA* valor);
int tamanho(LISTA_MATRICULA* valor);
void imprime(LISTA_MATRICULA* valor);
int cheio(LISTA_MATRICULA* valor);
int vazio(LISTA_MATRICULA* valor);
bool inserir(LISTA_MATRICULA* valor, ALUNO novo_aluno);
bool excloi(LISTA_MATRICULA* valor, int codA);
bool alterar(LISTA_MATRICULA* valor, int MatAntiga, int MatNova);


#endif //TURMA_H_INCLUDED

