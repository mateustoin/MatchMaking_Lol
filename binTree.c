#include "binTree.h"
#include <strings.h>
#include <stdlib.h>
#include <string.h>

tNo * criaNo (tConteudo indice) {
    tNo * n;
    n = malloc(sizeof(tNo));
    if (n != NULL) {
        n->indice = indice;
        n->esquerda = NULL;
        n->direita = NULL;
        //strcpy(n->nickname, nick);
    }
    return n;
}

void * Preenche (int i){
    tNo *no = *lista;
    no->esquerda = lista;
    no->direita = lista->prox->prox->prox;
    
    if(i == 0){
      no->indice = no->esquerda->indice; 
    } else {
        no->indice = no->direita->indice;
    }
}

void * Avanca (){

}





