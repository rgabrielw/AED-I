#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

int main(){
	lista valor;
	int tam;
	
	tam = CriaLista();
	Alocar(&valor, tam);
	Recebe(&valor, tam);
	ImprimirIterativo(&valor, tam);
	ImprimirRecursivo(&valor, tam-1, 0);
	Busca(&valor, tam);
	Recebe2(&valor);
	ImprimirIterativoLista2(&valor, 30);
	BuscaSequencialLista2(&valor);
	BuscaSequencialOrdenadaLista2(&valor);
	BuscaBinariaIterativaLista2(&valor);
	BuscaBinariaRecursivoLista2(&valor);
	MaiorIterativo(&valor, tam);
	MaiorRecursivo(&valor, tam);
	MenorIterativo(&valor, tam);
	MenorRecursivo(&valor, tam);
	SomaIterativo(&valor, tam);
	SomaRecursivo(&valor, 0, tam);
	MultiplicacaoIterativo(&valor, tam);
	MultiplicacaoRecursivo(&valor, tam, 1);
	Libera(&valor);
	
	return 0;
}
