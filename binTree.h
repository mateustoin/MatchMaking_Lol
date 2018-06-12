#ifndef ARVORE_BINARIA
#define ARVORE_BINARIA

#define MAX_CARACTERES 18

#include "listaInt.h"

typedef int tConteudo;

typedef struct tNo {
    tConteudo indice;
    //char nickname[MAX_CARACTERES];
    struct tNo *esquerda;
    struct tNo *direita;
} tNo, *tArvore;

extern tNo * criaNo (tConteudo indice);
//extern void * Preenche (tConteudo indice);
extern void * Preenche (int i);

#endif