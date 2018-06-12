#ifndef ARVORE_BINARIA
#define ARVORE_BINARIA

#define MAX_CARACTERES 18

typedef int tConteudo;

typedef struct tNo {
    tConteudo indice;
    char nickname[MAX_CARACTERES];
    struct tNo *esquerda;
    struct tNo *direita;
} tNo, *tArvore;

extern tNo * criaNo (int indice, char *nick);
extern void * Preenche (*tConteudo indice);
extern void * Avanca ();

#endif