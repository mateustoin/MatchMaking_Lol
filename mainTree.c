#include <stdio.h>
#include <stdlib.h>
#include "binTree.h"

int main (){
    FILE *arq;
    int result;
    char linha[50];

    arq = fopen("/home/mateus/Documentos/githubRepositories/matchmakinglol/modelo/solucao.txt", "r");

    if (arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return -1;
    }

    fgets(linha,100,arq);
    int qntNo = atoi(linha);

    for (int i = 0; i < qntNo; i++){
        fgets(linha, 100, arq);
        printf("%s", linha);
    }
    
    return 0;
}