#include "jogo.h"
#include <stdio.h>
#include <string.h>
void personagem_create(Personagem* personagem){
    printf("########################################################\n");
    printf("################CRIANDO O PERSONAGEM####################\n");
    printf("########################################################\n");
    printf("\n");
    printf("Digite o seu nome: \n");
    scanf("%s", personagem->name);

    printf("Qual a altura em cm: \n");
    scanf("%d", &personagem->altura);

    int escolher_uma_arma;
    printf("Escolha sua arma: \n[1] Espada Fina \n[2]Espada Grande");
    scanf("%d", &escolher_uma_arma);

    if (escolher_uma_arma == 1){
        strcpy(personagem->arma, "Espada Fina");
    }else if(escolher_uma_arma == 2){
        strcpy(personagem->arma, "Espada Grande");
    }else{
        printf("Opção invalida a arma foi definida como 'desarmado'\n");
        strcpy(personagem->arma, "Desarmado");
    }
    printf("Personagem criado com sucesso \n");
}

void exibir_personagem(Personagem personagem){
    printf("\n #### Dados do Personagem ####");
    printf("Nome: %s \n", personagem.name);
    printf("Altura: %d cm \n", personagem.altura);
    printf("arma: %s \n", personagem.arma);
}
