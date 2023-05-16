#include <stdio.h>
#include <string.h>

/*Suponha que uma cadeia de caracteres S contenha uma frase qualquer. Vamos construir um programa que, utilizando as operações disponíveis na biblioteca string.h verifique se a frase possui pelo menos uma ocorrência de um caractere P, também lido. Em caso afirmativo, imprimir  SIM;  caso contrário, imprimir NÃO.
*/

int main (){
	
	char S[] = "Algoritmo e Estrutura de Dados";
	char *p = strchr(S, 'i');
	
	if(p != NULL){
		printf("SIM");
	} else{
		printf("NAO");
	}
	
	return 0;
}
