#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

int CriarLista(){
	int tam;
	printf("--- LISTA 1 ---\nQual o tamanho da sua lista?: ");
	scanf("%d", &tam);
}

void Alocar(lista* valor, int tam){
	valor->lista1 = (int*) malloc (tam * sizeof(lista));
}

void Recebe(lista* valor, int tam){
	int i;
	for(i=0; i<tam; i++){
		printf("\ndigite o valor %d da lista 1:");
		scanf("%d", &(valor->lista1[i]));
	}
}

void Recebe2(lista* valor){
	int i;
	for(i=0; i<30; i++){
		printf("\ndigite o valor %d da lista 2:");
		scanf("%d", &(valor->lista2[i]));
	}
}

void ImprimirIterativo(lista* valor, int tam){
	int i;
	printf("\tFORMA ITERATIVA LISTA 1\n");
	for(i=0; i<tam; i++){
		printf("%d ", valor->lista1[i]);
	}
	printf("%d", valor->lista1[i]);
}

void Busca(lista*, int tam){
	int numero, i;
	printf("\n\nDIGITE UM VALOR PARA ACHAR NA LISTA:");
	scanf("%d", &numero);
	for(i=0; i<tam; i++){
		if(valor->lista1[i] == numero){
			printf("\nACHOU VALOR %d NA POSICAO %d", numero, i+1);
			return;
		}
	}
}

void BuscaSequencialLista2(lista* valor){
	int numero, i, cont = 0;
	printf("\nDIGITE O VALOR PARA ACHAR NA LISTA BUSCA SEQUENCIAL:");
	scanf("%d", &numero);
	for(i=0; i<30; i++){
		cont++;
		if(valor->lista2[i] == numero){
			printf("\nACHOU VALOR %d NA POSICAO %d", numero, i+1);
			printf("\nnumero de comparacoes %d", cont);
		}
	}
}

void BuscaBinariaIterativaLista2(lista* valor){
	int numero, a = 0, b = 30-1, cont = 0;
    printf("\nDIGITE O VALOR PARA ACHAR NA LISTA BUSCA BINARIA:");
    scanf("%d", &numero);
    
    while (a<=b){
        int i = (a+b)/2;
        cont++;
        if (valor->lista2[i] == valor){
            printf("\nACHOU VALOR %d NA POSICAO %d", numero, i+1);
            printf("\nnumero de comparacoes %d", cont);
            return;
        } else if(valor->lista2[i]<numero){
            a = i + 1;
        } else {
            b = i - 1;
        }
    }
}

void BuscaBinariaRecursivaLista2(lista* valor){
	int numero, a=0, b=30;
	int i = (a+b)/2;
	printf("\nBUSCA BINARIA RECURSIVA\nDIGITE UM NUMERO PARA BUSCAR:");
	scanf("%d", &numero);
	
	if (a>b){
		printf("valor nao encontrado");
    	return;
	}
	if (a<b){
		if(valor->lista2[i] == numero){
			printf("\nACHOU VALOR %d NA POSICAO %d\n", numero, i+1);
			return;
		}
		if(valor->lista2[i]<numero){
			acha2porbuscabinariarecursiva(valor, numero, a+1, b);	
		}
		else{
			acha2porbuscabinariarecursiva(valor, numero, a, b-1);	
		}
	}
}

void ImprimirRecursivo(lista* valor, int a, int b){
	printf("\nLISTA MET RECURSIVO\n");
	if(a == b){
		printf("%d", valor->lista1[b]);
	}
	if(a<b){
		printf("%d", valor->lista1[a]);
		imprimir_recursivo(valor, a+1, b);
	}
}

void ImprimirIterativoLista2(lista* valor){
	int i;
	printf("\tFORMA ITERATIVA LISTA 2\n");
	for(i=0; i<30;i++){
		printf("%d ", valor->lista2[i]);
	}
	printf("%d", valor->lista2[i]);	
}

void BuscaSequencialOrdenadaLista2(lista* valor){
	int numero, i, cont = 0;
	printf("\nDIGITE O VALOR PARA ACHAR NA LISTA BUSCA SEQUENCIAL ORDENADA:");
	scanf("%d", &numero);
	for(i=0; i<30; i++){
		cont++;
		if(valor->lista2[i] == numero){
			printf("\nACHOU VALOR %d NA POSICAO %d", numero, i+1);
			printf("\nnumero de comparacoes %d", cont);
			return;
		}
			if(valor->lista2[i] > valor){
				break;
			}
	}
}

void MaiorIterativo(lista* valor, int tam){
	int i, maior;
	for(i=0; i<tam; i++){
		if(i==0){
			maior = valor->lista1[i];
		}
		if(valor->lista1[i]>maior){
			maior = valor->lista1[i];
		}
	
	}
	printf("\nITERATIVO\nMAIOR:%d", maior);
}

void MaiorRecursivo(lista* valor, int numero){
	int maior = valor->lista1[tam-1];
	if(tam == 0){
		if(valor->lista1[0] > *maior){
			*maior = valor->lista1[0]; 
		}
		printf("\nMAIOR ELEMENTO MET RECURSIVO: %d", *maior);
		return;
	}
	if (tam>0){
		if(valor->lista1[tam] > *maior){
			*maior = valor->lista1[tam];
		}
		maiorelementorecursivo(valor, tam-1, maior);
	}
}

void MenorIterativo(lista* valor, int tam){
	int i, menor;
	for(i=0; i<tam; i++){
		if(i==0){
			menor = valor->lista1[i];
		}
		if(valor->lista1[i]<menor){
			menor = valor->lista1[i];
		}
	}
	printf("\nITERATIVO\nMENOR:%d", menor);
}

void MenorRecursivo(lista* valor, int tam){
	int menor = valor->lista1[tam-1];
	if(tamanho == 0){
		if(valor->lista1[0]<*menor){
			*menor = valor->lista1[0]; 
		}
		printf("\nMENOR ELEMENTO MET RECURSIVO: %d", *menor);
		return;
	}
	if (tam>0){
		if(valor->lista1[tam] < *menor){
			*menor = valor->lista1[tam];
		}
		menorelementorecursivo(valor, tam-1, menor);
	}
	printf("\nRECURSIVO\nMENOR:%d", menor);
}

void SomaIterativo(lista* valor, int tam){
    int i, soma = 0;
    for(i=0; i<tam; i++){
        soma += (valor->lista1[i]);
    }
    printf("\nSOMA ITERATIVA\n%d\n", soma);
}

void SomaRecursivo(lista* valor, int tam, int soma) {
    if (tam == 0) {
    	soma += valor->lista1[tam];
        printf("\nSOMA MET RECURSIVO: %d\n", soma);
    } else {
    	soma += valor->lista1[tam];
        somarecursiva(valor, tam-1, soma);
    }
}

void MultiplicacaoIterativo(lista* valor, int tam){
    int i, mult=1;
    for(i=0; i<tam; i++){
        mult *= (valor->lista1[i]);
    }
    printf("\nMULTIPLICACAO ITERATIVA\n%d\n", mult);
}

void MultiplicacaoRecursivo(lista* valor, int tam, int mult) {
    if (tam == 0) {
    	mult *= valor->lista1[tam];
        printf("\nMULTIPLICACAO MET RECURSIVO: %d\n",mult);
    } else {
    	mult *= valor->lista1[tam];
        multirecursiva(valor, tam-1, mult);
    }
}

void BuscaBinariaRecursiva2(lista *valor, int numero, int a, int b, int cont){
	int i = (a+b)/2;
	if (a>b){
		cont=0;
		printf("\nvalor nao encontrado\n");
    	return;
	}
	if (a<b){
		cont++;
		if(valor->lista1[i] == numero){
			printf("\nACHOU VALOR %d NA POSICAO %d\n", numero, i+1);
			printf("numero de comparacoes %d\n", cont);
			return;
		}
		if(valor->lista1[i] < numero){
			BuscaBinariaRecursivaLista2(valor, numero, a+1, b);	
		}
		else{
			BuscaBinariaRecursivaLista2(valor, numero, a, b-1);	
		}
	}
}

void Liberar(lista* valor){
	free(lista1);
}

