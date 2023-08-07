#include "jogo.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void inicio()
{
    int opcao;
    printf("#####################################################################\n");
    printf("\n");
    printf("|----------------------------------|        __                       \n");
    printf("|                                  |       |  |                      \n");
    printf("| A Princesa Prometida             |-------|  |       ______         \n");
    printf("|                                  |       ---(____/**|_|___(____  | \n");
    printf("|----------------------------------|         |_______ --------- __>-}\n");
    printf("                                                /  (_____|_____/   | \n");
    printf("                                               *         |           \n");
    printf("                                                        {O}          \n");
    printf("\n");
    printf("##############################INICIANDO##############################\n");

    sleep(2);

    printf("\n[1]Começar \n[2]Resumo \n[3]Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        tela_aceite();
        break;
    case 2:
        printf("Informações");
        break;
    case 3:
        printf("Fechando o programa...\n");
        return;
    default:
        printf("opção invalida");
        break;
    }
}
