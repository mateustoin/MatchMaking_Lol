#ifndef LISTAINT_H_INCLUDED
#define LISTAINT_H_INCLUDED

#define MAX_CARACTERES 18

#include <stdio.h>

typedef int tMmr;
typedef enum elo {
    BRONZE_V, BRONZE_IV, BRONZE_III, BRONZE_II, BRONZE_I,
    PRATA_V, PRATA_IV, PRATA_III, PRATA_II, PRATA_I,
    OURO_V, OURO_IV, OURO_III, OURO_II, OURO_I,
    PLATINA_V, PLATINA_IV, PLATINA_III, PLATINA_II, PLATINA_I,
    DIAMANTE_V, DIAMANTE_IV, DIAMANTE_III, DIAMANTE_II, DIAMANTE_I,
    MASTER_CHALLENGER
} tElo;

typedef struct no{
    int indice;
    tElo elo;
    char nickname[MAX_CARACTERES];
    struct no *prox;
} tNo;

extern tNo * criaNo(int indice, char *nick, tElo elo);
extern void deleteNo(tNo * no);
extern void IniciaLista(tNo **lista);
extern int Comprimento(const tNo *lista);
extern int InserePlayer(tNo **lista, int indice, char *nick, tElo elo);
extern void RemovePlayer(tNo **lista, char *nick);
extern int ProcuraPlayer(const tNo *lista, char *nick);
extern int EstaVazia(const tNo *lista);
extern void ExibeLista(const tNo *lista, FILE *fp);


#endif // LISTAINT_H_INCLUDED
