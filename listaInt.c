#include "listaInt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tNo * criaNo(tMmr v, char *nick){
    tNo * n;
    n = malloc(sizeof(tNo));
    if (n != NULL){
        n->e = v;
        n->prox = NULL;
        strcpy (n->nickname,nick);
    }
    return n;
}

void deleteNo(tNo * no){
    free(no);
}

void IniciaLista(tNo **lista){
    *lista = NULL;
}

int Comprimento(const tNo *lista){
    int c = 0;
    const tNo * no = lista;

    while(no != NULL){
        c++;
        no = no->prox;
    }

    return c; /* Não há o que calcular */
}

int ProcuraPlayer(const tNo *lista, char *nick){
    const tNo *no = lista;

    while(no->prox != NULL && (strcmp(nick,no->nickname) != 0) ){
        no = no->prox;
    }
    
    if (strcmp(nick,no->nickname) == 0){
        return 0;
    } else {
        return 1;
    } 
}

void RemovePlayer(tNo **lista, char *nick){
    tNo *no = *lista;
    tNo *noAtual, *noAnterior;
    
    noAtual = *lista;
    noAnterior = NULL;
    int i,j = 0;

    while(nick != no->nickname && no->prox != NULL){
        no = no->prox;
        i = i + 1;
    }

    for(j = 0; j <= i; j++){
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }

    noAnterior->prox = no->prox;
    deleteNo(no);
}

int EstaVazia(const tNo *lista){
    return lista == NULL;
}

void ExibeLista(const tNo *lista){
    const tNo *no = lista;
    int c = 0;

    while (no != NULL ){
        printf("[%d]=%d ", c, no->e);
        printf("%s\n", no->nickname);
        no = no->prox;
        c++;
    }
    puts("");

}

int InserePlayer(tNo **lista, tMmr valor, char *nick){
    tNo *novo = criaNo(valor, nick);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }

    tNo *noAtual, *noAnterior;
    noAtual = *lista;
    noAnterior = NULL;

    while(noAtual != NULL && novo->e > noAtual->e){
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }

    novo->prox = noAtual;
    if (noAnterior == NULL){ //primeira posicao
        *lista = novo;
    }else{
        noAnterior->prox = novo;
        novo->prox = NULL;
    }

    return 0;

}















