#ifndef JOGO_H
#define JOGO_H
#include "game_fases/fases.h"
#include "save_game/save_load.h"

#include <stdbool.h>

#endif 

void limparTerminal();

//definindo a estutura de dados do personagem
 

typedef struct game{
    char name[50];
    int altura;
    char arma[50];
} Personagem;

void tela_aceite();
bool aceitar_termos();
void personagem_create(Personagem* personagem);
void exibir_personagem(Personagem personagem);
void salvar_estado(const char* nome_arquivo, const Personagem* personagem, int progresso);


