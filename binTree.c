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

void * Preenche (int i, int jogador1, int jogador2){

    tConteudo Mec;
    if(i == 0){
        Mec = jogador1; 
    } else {
        Mec = jogador2;
    }

    tNo *no = criaNo(Mec);
    printf("Vencedor da chave: %d\n", no->indice);
}

void * Avanca (){

}





