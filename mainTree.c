#include <stdio.h>
#include <stdlib.h>
#include "binTree.h"

int main (){
    FILE *arq;
    int result;
    char linha[50];

    arq = fopen("/home/rodrigo/Downloads/GIT/matchmakinglol/modelo/solucao.txt", "r");

    if (arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return -1;
    }

    fgets(linha,100,arq);
    int qntNo = atoi(linha);

    while (fgets(linha, 100, arq) > 0){
        printf("%s", linha);
    }

    

}