#ifndef JOGO_H
#define JOGO_H

#include <stdbool.h>

void limparTerminal();

//definindo a estutura de dados do personagem
 

typedef struct game{
    char name[50];
    int altura;
    char arma[50];
} Personagem;

void inicio();
void tela_aceite();
bool aceitar_termos();
void personagem_create(Personagem* personagem);
void exibir_personagem(Personagem personagem);


#endif 