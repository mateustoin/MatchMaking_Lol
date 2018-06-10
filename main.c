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
    InserePlayer(&minhaLista, 1000, "Shanks", PLATINA_V);
    InserePlayer(&minhaLista, 1200, "Brtt", PLATINA_III);
    InserePlayer(&minhaLista, 1500, "Kami", DIAMANTE_I);
    InserePlayer(&minhaLista, 900, "Gordox", BRONZE_V);
    InserePlayer(&minhaLista, 1700, "Jukes", MASTER_CHALLENGER);
    InserePlayer(&minhaLista, 2000, "Jovirone Mec", MASTER_CHALLENGER);
    ExibeLista(minhaLista);

    if (ProcuraPlayer(minhaLista,"Shanks") == 0){
        printf("O player está na competição.\n");
    } else {
        printf("O player não está na competição.\n");
    }

    return 0;
}
