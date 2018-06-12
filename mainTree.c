#include <stdio.h>
#include <stdlib.h>
#include "binTree.h"
#include "listaInt.h"
#include <time.h>

int Recursao(char *linhazinha1, char *linhazinha2, FILE *arq){     
        if (fgets(linhazinha1,100, arq) == 0){
            return 0;
        }
        fgets(linhazinha2,100,arq);
        Preenche(rand() % 2, atoi(linhazinha1), atoi(linhazinha2));
        Recursao(linhazinha1, linhazinha2, arq);
}

int main (){
    FILE *arq;
    int result;
    char linha[100];
    char linha2[100];
    srand(time(NULL));

    arq = fopen("/home/mateus/Documentos/githubRepositories/matchmakinglol/modelo/solucao.txt", "r");
    //arq = fopen("/home/rodrigo/Downloads/GIT/matchmakinglol/modelo/solucao.txt", "r");

    if (arq == NULL){
        printf("Problemas na leitura do arquivo\n");
        return -1;
    }

    fgets(linha,100,arq);
    int qntNo = atoi(linha);

    Recursao(linha,linha2,arq);
    return 0;
}