#include "binTree.h"
#include <strings.h>
#include <stdlib.h>
#include <string.h>

tNo * criaNo (int indice, char *nick) {
    tNo * n;
    n = malloc(sizeof(tNo));
    if (n != NULL) {
        n->indice = indice;
        n->esquerda = NULL;
        n->direita = NULL;
        strcpy(n->nickname, nick);
    }
    return n;
}

void * Preenche (){

}

void * Avanca (){

}





