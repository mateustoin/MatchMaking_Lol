#include <stdio.h>
#include <stdlib.h>
#include "binTree.h"
#include <time.h>

int Recursao(char *linhazinha1, char *linhazinha2, FILE *arq){
    fgets(linhazinha1,100, arq);
    fgets(linhazinha2,100,arq);
    Preenche(rand() % 1);
    linhazinha1++;
    linhazinha2++;
    Recursao(char *linhazinha1, char *linhazinha2, FILE *arq);
}


int main (){
    FILE *arq;
    int result;
    char linha[50];
    char linha2[50];
    srand(time(NULL));

    //arq = fopen("/home/mateus/Documentos/githubRepositories/matchmakinglol/modelo/solucao.txt", "r");
    arq = fopen("/home/rodrigo/Downloads/GIT/matchmakinglol/modelo/solucao.txt", "r");

    if (arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return -1;
    }

    fgets(linha,100,arq);
    int qntNo = atoi(linha);

    return 0;
}