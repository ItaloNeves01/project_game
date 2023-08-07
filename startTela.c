#include "jogo.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void resumo()
{

    printf("###################################################################################\n");
    printf("#####################Jogo inspirado no livro A Princesa prometida##################\n");
    printf("#VOCE ESTA PRONTO PARA JOGAR O MELHOR JOGO SOBRE UMA HISTORIA DE AMOR?            #\n");
    printf("#imagine uma camponesa dona de uma beleza rústica que a coloca entre as           #\n");
    printf("#20 mulheres mais lindas de todos os reinos. Á jovem se apaixona perdidamente     #\n");
    printf("#por um humilde rapaz que trabalha para o pai dela e, veja você, ele também       #\n");
    printf("#a ama! Só que o destiino (Com a ajuda de de terriveis vilões) temia em           #\n");
    printf("#separa-los, tarefa naturalmente impossível quando se trata de verdadeiro amor    #\n");
    printf("#---------------------------------------------------------------------------------#\n");
    printf("#pode parecer um dramatico romance de época, mas não se deixa levar pelo título#  #\n");
    printf("#do encantador do jogo, pois aqui você vai encontrar piradas, duelos, gigantes    #\n");
    printf("#e frases memoráveis e muita aventura                                             #\n");
    printf("#---------------------------------------------------------------------------------#\n");
    printf("#a princesa prometida é uma histŕia fictícia baseada em um livro fictício sobre   #\n");
    printf("#supostos fatos historicos passados numa cidade que não existiu.                  #\n");
    printf("#---------------------------------------------------------------------------------#\n");
    printf("Jogo Desenvolvido por Italo Neves, todos os direitos reservados\n");
    printf("digite [1] voltar\n");
    int optionOne;
    scanf("%d", &optionOne);
    if(optionOne == 1){
        limparTerminal();
        inicio();
    }else{
        limparTerminal();
        inicio();
    }
}

void menu_inicial()
{

    //menu de escolha
    int opcao;
    printf("\n[1]Começar \n[2]Resumo \n[3]Sair\n");
    scanf("%d", &opcao);


//case 1 leva para a tela de aceitação de termos
//case 2 leva para a tela de informaçõs sobre o game
//case 3 acaba o jogo
    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        tela_aceite();
        break;
    case 2:
        limparTerminal();
        resumo();
        break;
    case 3:
        printf("Fechando o programa...\n");
        return;
    default:
        printf("opção invalida");
        break;
    }
}
void inicio()
{
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

    //esperar 1 segundo para abrir
    sleep(1);
    //exibir a tela inicial
    menu_inicial();
}
