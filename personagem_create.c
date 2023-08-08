#include "jogo.h"
#include <stdio.h>
#include <string.h>

// tela de criação do personagem
void personagem_create(Personagem *personagem)
{
    printf("########################################################\n");
    printf("################CRIANDO O PERSONAGEM####################\n");
    printf("########################################################\n");
    printf("\n");
    printf("Digite o seu nome: \n");
    // nome do personagem
    scanf("%s", personagem->name);

    int newAltura;
    printf("Qual a altura do personagem?: (ALTURA MAXIMA 250CM\n");
    scanf("%d", &newAltura);
    if (newAltura > 0 && newAltura <= 250 ){
       personagem->altura = newAltura; 
    }
    if(newAltura < 0 || newAltura > 251){
        printf("altura incorreta..\n");
        limparTerminal();
        personagem_create(personagem);
    }


    int escolher_uma_arma;
    printf("Escolha sua arma: \n[1] Espada Fina \n[2]Espada Grande\n");
    scanf("%d", &escolher_uma_arma);
    if (escolher_uma_arma == 1)
    {
        strcpy(personagem->arma, "Espada Fina");
    }
    else if (escolher_uma_arma == 2)
    {
        strcpy(personagem->arma, "Espada Grande");
    }
    else
    {
        printf("Opção invalida a arma foi definida como 'desarmado'\n");
        strcpy(personagem->arma, "Desarmado");
    }
    printf("Personagem criado com sucesso \n");
}

void exibir_personagem(Personagem personagem)
{
    printf("#### Dados do Personagem ####\n");
    printf("Nome: %s \n", personagem.name);
    printf("Altura: %d cm \n", personagem.altura);
    printf("arma: %s \n", personagem.arma);
}
