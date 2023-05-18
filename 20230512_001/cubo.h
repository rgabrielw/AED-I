#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

typedef struct cubo{
	float lado;
	float area;
	float volume;
}cubo;

void recebe(cubo *valor);
void imprime(cubo *valor);

#endif //CUBO_H_INCLUDED
