#ifndef SAVE_LOAD_H
#define SAVE_LOAD_H

#include "../jogo.h"

//funcion to save state on game
void salvar_estado(const char* nome_arquivo, const Personagem* personagem, int progresso);

void carregar_estado(const char* nome_arquivo, Personagem* personagem, int* progresso);

#endif