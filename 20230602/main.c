#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "turma.h.c"

int main() {
    LISTA_MATRICULA valor;

	inicializarLista(&valor);
	tamanho(&valor);
	ALUNO a;
	a.cod_aluno = 22;
	a.nome = "roberto";
	a.idade = 19;
	a.n_filhos = 0;
	
 	imprime(&valor);
 	
 	if (vazio(&valor)) {
        printf("A lista de matrículas está vazia.\n");
    } else {
        printf("A lista de matrículas não está vazia.\n");
    }
    if (cheio(&valor)) {
        printf("A lista de matrículas está cheia.\n");
    } else {
        printf("A lista de matrículas não está cheia.\n");
    }
 	excloi(&valor, 30);
 	
 	int MatAntiga;
 	
 		printf("\nInsira a matricula que deseja alterar: ");
 		scanf("%d", &MatAntiga);
 	
	int MatNova;

 		printf("\nInsira a nova matricula: ");
 		scanf("%d", &MatNova);
 	
 	if(alterar(&valor, MatAntiga, MatNova)){
 		printf("\nMatricula Alterada.");
	 } else {
	 	printf("\nNumero de Matricula errado.");
	 }


    return 0;
}

