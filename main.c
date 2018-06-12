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
#include "binTree.h"

int main()
{
    tLista *minhaLista = NULL;
    int Indice = 0;

    FILE *fp;
    
    InserePlayer(&minhaLista, Indice++, "Shanks", PLATINA_V);
    InserePlayer(&minhaLista, Indice++, "Brtt", PLATINA_III);
    InserePlayer(&minhaLista, Indice++, "Kami", DIAMANTE_I);
    InserePlayer(&minhaLista, Indice++, "Gordox", BRONZE_V);
    InserePlayer(&minhaLista, Indice++, "Jukes", MASTER_CHALLENGER);
    InserePlayer(&minhaLista, Indice++, "Jovirone Mec", MASTER_CHALLENGER);
    InserePlayer(&minhaLista, Indice++, "Duluxz", DIAMANTE_V);
    InserePlayer(&minhaLista, Indice++, "Piranha", PRATA_III);
    InserePlayer(&minhaLista, Indice++, "Jonah", BRONZE_III);
    InserePlayer(&minhaLista, Indice++, "Cuca", PLATINA_I);
    InserePlayer(&minhaLista, Indice++, "Robo", DIAMANTE_III);
    InserePlayer(&minhaLista, Indice++, "Lincoln", DIAMANTE_II);
    InserePlayer(&minhaLista, Indice++, "Me", PLATINA_I);
    InserePlayer(&minhaLista, Indice++, "Passa", PRATA_V);
    InserePlayer(&minhaLista, Indice++, "Por", BRONZE_II);
    InserePlayer(&minhaLista, Indice++, "Favor", PRATA_IV);
    InserePlayer(&minhaLista, Indice++, "Preciso", DIAMANTE_IV);
    InserePlayer(&minhaLista, Indice++, "De", BRONZE_II);
    InserePlayer(&minhaLista, Indice++, "Nove", OURO_III);
    InserePlayer(&minhaLista, Indice++, "Para", OURO_II);
    InserePlayer(&minhaLista, Indice++, "Passar", PLATINA_I);
    InserePlayer(&minhaLista, Indice++, "Por Favor", PLATINA_IV);
    InserePlayer(&minhaLista, Indice++, "Ajuda", BRONZE_III);
    InserePlayer(&minhaLista, Indice++, "Nois", BRONZE_I);

    InserePlayer(&minhaLista, Indice++, "Batata", OURO_IV);
    InserePlayer(&minhaLista, Indice++, "Limão", BRONZE_IV);
    InserePlayer(&minhaLista, Indice++, "Fruta Pao", OURO_V);
    InserePlayer(&minhaLista, Indice++, "Nilson", DIAMANTE_V);
    InserePlayer(&minhaLista, Indice++, "Com", PLATINA_I);
    InserePlayer(&minhaLista, Indice++, "B", PLATINA_IV);
    InserePlayer(&minhaLista, Indice++, "No", BRONZE_V);
    InserePlayer(&minhaLista, Indice++, "Meio", PRATA_I);
    ExibeLista(minhaLista, fp);


    return 0;
}
