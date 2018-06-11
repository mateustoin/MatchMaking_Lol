/*         Autor: Rodrigo P A Vieira                                         */
/*         E-mail: rodrigo.alves@eng.ci.ufpb.br                              */
            
            /* Parte de um código que visa a implementação   */
            /* de um programa que cria torneios de 1x1.      */

/* Lembrar da restrição que o numPlayers tem que ser de tal forma que se for pego */
/* seu valor e dividido por 2 o resultado tem que ser um numero par.             */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaInt.h"

int main()
{
    tNo *minhaLista = NULL;
    int Indice = 0;

    FILE *fp;
    
    InserePlayer(&minhaLista, Indice++, "Shanks", PLATINA_V);
    InserePlayer(&minhaLista, Indice++, "Brtt", PLATINA_III);
    InserePlayer(&minhaLista, Indice++, "Kami", DIAMANTE_I);
    InserePlayer(&minhaLista, Indice++, "Gordox", BRONZE_V);
    InserePlayer(&minhaLista, Indice++, "Jukes", MASTER_CHALLENGER);
    InserePlayer(&minhaLista, Indice++, "Jovirone Mec", MASTER_CHALLENGER);
    ExibeLista(minhaLista, fp);

    /*if (ProcuraPlayer(minhaLista,"Shanks") == 0){
        printf("O player está na competição.\n");
    } else {
        printf("O player não está na competição.\n");
    }*/

    return 0;
}
