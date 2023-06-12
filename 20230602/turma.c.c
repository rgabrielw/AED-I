#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "turma.h.c"

void inicializarLista(LISTA_MATRICULA* valor){
	int i;
	for(i=0; i<99;i++){
		valor->turma[i].proximo = i+1;
	valor->turma[99].proximo = -1;
	valor->inicio = -1;
	valor->disponivel =0;
	}
}

int tamanho(LISTA_MATRICULA* valor){
	int tam=0;
	int i=valor->inicio;
	while(i != -1){
		tam++;
		i = valor->turma[i].proximo;
	}
	return tam;
}

void imprime(LISTA_MATRICULA* valor){
	int i=valor->inicio;
	while(i != -1){
		printf("\naluno: %d", i);
		printf("\ncodigo: %d", valor->turma[i].alun.cod_aluno);
		printf("\nnome: %d", valor->turma[i].alun.cod_aluno);
		printf("\nidade: %d", valor->turma[i].alun.cod_aluno);
		printf("\nNo filhos: %d", valor->turma[i].alun.cod_aluno);
		i = valor->turma[i].proximo;
	}
}

int vazio(LISTA_MATRICULA* valor){
	return valor->disponivel == -1;
}

int cheio(LISTA_MATRICULA* valor){
	return valor->inicio == -1;
}

bool inserir(LISTA_MATRICULA* valor, ALUNO novo_aluno){
	if(valor->disponivel == -1)
		return false;
	
	int i = valor->disponivel;
	int posicao = -1;
	while((i!=-1)&&(novo_aluno.cod_aluno > valor->turma[i].alun.cod_aluno)){
		posicao = 1;
		i = valor->turma[i].proximo;
	}
	
	if((i!=-1)&&(novo_aluno.cod_aluno== valor->turma[posicao].alun.cod_aluno))
		return false;
		
	i = ObterNumero(*valor);
	valor->turma[i].alun = novo_aluno;
	if(posicao == -1){
		valor->turma[i].proximo = valor->inicio;
		valor->inicio = i;
	}else {
		valor->turma[i].proximo = valor->turma[posicao].proximo;
		valor->turma[posicao].proximo = i;
	}
}

void alocar(LISTA_MATRICULA* valor, int i){
	valor->turma[i].proximo = valor->disponivel;
	valor->disponivel = i;	
}

bool excloi(LISTA_MATRICULA* valor, int codA){
	int i = valor->inicio;
	int anterior = -1;
	
	while(i!=-1 && valor->turma[i].alun.cod_aluno < codA){
		anterior = i;
		i = valor->turma[i].proximo;
	}
	if(i != -1 && valor->turma[i].alun.cod_aluno != codA){
		return false;
	}
	if(anterior == -1) valor->inicio = valor->turma[i].proximo;
	else
		valor->turma[anterior].proximo = valor->turma[i].proximo;
	
	alocar(valor, i);
	return true;
}

bool alterar(LISTA_MATRICULA* valor, int MatAntiga, int MatNova) {
    if (vazia(valor)) {
        printf("\nTurma vazia. Nao foi possível alterar a matricula.\n");
        return false;
    }

    int i = valor->inicio;

    while (i != -1 && valor->turma[i].alun.cod_aluno != MatAntiga) {
        i = valor->turma[i].proximo;
    }

    if (i == -1) {
        printf("\nMatricula nao encontrada na lista.\n");
        return false;
    }

    valor->turma[i].alun.cod_aluno = MatNova;

    return true;
}
