#include "listaInt.h"
#include <stdlib.h>
#include <string.h>

tLista * criaNoLista(int indice, char *nick, tElo elo){
    tLista * n;
    n = malloc(sizeof(tLista));
    if (n != NULL){
        n->indice = indice;
        n->prox = NULL;
        strcpy (n->nickname,nick);
	n->elo = elo;
    }
    return n;
}

void deleteNo(tLista * no){
    free(no);
}

void IniciaLista(tLista **lista){
    *lista = NULL;
}

int Comprimento(const tLista *lista){
    int c = 0;
    const tLista * no = lista;

    while(no != NULL){
        c++;
        no = no->prox;
    }

    return c; /* Não há o que calcular */
}

int ProcuraPlayer(const tLista *lista, char *nick){
    const tLista *no = lista;

    while(no->prox != NULL/* && index != no->indice*/){
        no = no->prox;
    }
    
    if (strcmp(nick,no->nickname) == 0){
        return 0;
    } else {
        return 1;
    } 
}

void RemovePlayer(tLista **lista, char *nick){
    tLista *no = *lista;
    tLista *noAtual, *noAnterior;
    
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

int EstaVazia(const tLista *lista){
    return lista == NULL;
}

void ExibeLista(const tLista *lista, FILE *fp){
    const tLista *no = lista;
    fp = fopen("Players.txt","w");

    int Tamanho = Comprimento(lista);
    fprintf(fp, "%d\t", Tamanho);

    while (no != NULL){
        fprintf(fp, "%d\t", no->elo);
        no = no->prox;
    }

}

int InserePlayer(tLista **lista, int indice, char *nick, tElo elo){
    tLista *novo = criaNoLista(indice, nick, elo);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }

    tLista *noAtual, *noAnterior;
    noAtual = *lista;
    noAnterior = NULL;

    while(noAtual != NULL && novo->indice > noAtual->indice){
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















