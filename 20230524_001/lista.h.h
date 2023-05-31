#ifndef #LISTA_H_INCLUDED
#define #LISTA_H_INCLUDED

typedef struct lista{
	int* lista1;
	int lista2[30];
}LISTA;

int CriarLista();
void Alocar(lista* valor, int tam);
void Recebe(lista* valor, int tam);
void Recebe2(lista* valor);
void Busca(lista* valor, int tam);
void BuscaSequencialLista2(lista* valor);
void BuscaSequencialOrdenadaLista2(lista* valor);
void BuscaBinariaIterativaLista2(lista* valor);
void BuscaBinariaRecursivaLista2(lista* valor);
void ImprimirIterativo(lista* valor, int tam);
void ImprimirRecursivo(lista* valor, int a, int b);
void ImprimirIterativoLista2(lista* valor, int tam);
void MaiorIterativo(lista* valor, int tam);
void MaiorRecursivo(lista* valor, int tam);
void MenorIterativo(lista* valor, int tam);
void MenorRecursivo(lista* valor, int tam);
void SomaIterativo(lista* valor, int tam);
void SomaRecursivo(lista* valor, int tam, int soma);
void MultiplicacaoIterativo(lista* valor, int tam);
void MultiplicacaoRecursivo(lista* valor, int tam, int mult);
void BuscaBinariaRecursiva2(lista* valor, int numero, int a, int b);
void Libera(lista* lista);

#endif // LISTA_H_INCLUDED
