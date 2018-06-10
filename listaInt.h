#ifndef LISTAINT_H_INCLUDED
#define LISTAINT_H_INCLUDED

#define MAX_CARACTERES 18

typedef int tMmr;

typedef struct no{
    tMmr e;
    char nickname[MAX_CARACTERES];
    struct no *prox;
} tNo;

extern tNo * criaNo(tMmr v, char *nick);
extern void deleteNo(tNo * no);
extern void IniciaLista(tNo **lista);
extern int Comprimento(const tNo *lista);
extern int InserePlayer(tNo **lista, tMmr valor, char *nick);
extern void RemovePlayer(tNo **lista, char *nick);
extern int ProcuraPlayer(const tNo *lista, char *nick);
extern int EstaVazia(const tNo *lista);
extern void ExibeLista(const tNo *lista);


#endif // LISTAINT_H_INCLUDED
