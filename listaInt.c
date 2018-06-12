#include "listaInt.h"
#include <stdlib.h>
#include <string.h>

tNo * criaNo(int indice, char *nick, tElo elo){
    tNo * n;
    n = malloc(sizeof(tNo));
    if (n != NULL){
        n->indice = indice;
        n->prox = NULL;
        strcpy (n->nickname,nick);
	n->elo = elo;
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

int ProcuraPlayer(const tNo *lista, int index){
    const tNo *no = lista;

    while(no->prox != NULL && index != no->indice) ){
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

void ExibeLista(const tNo *lista, FILE *fp){
    const tNo *no = lista;
    fp = fopen("Players.txt","w");

    int Tamanho = Comprimento(lista);
    fprintf(fp, "%d\t", Tamanho);

    while (no != NULL){
        fprintf(fp, "%d\t", no->elo);
        no = no->prox;
    }

}

int InserePlayer(tNo **lista, int indice, char *nick, tElo elo){
    tNo *novo = criaNo(indice, nick, elo);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }

    tNo *noAtual, *noAnterior;
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















