#include <stdio.h>
#include <string.h>

/*Suponha que uma cadeia de caracteres S contenha uma frase qualquer. Vamos construir um programa que, utilizando as opera��es dispon�veis na biblioteca string.h verifique se a frase possui pelo menos uma ocorr�ncia de um caractere P, tamb�m lido. Em caso afirmativo, imprimir  SIM;  caso contr�rio, imprimir N�O.
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
