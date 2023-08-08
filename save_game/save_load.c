#include "save_load.h"
#include <stdio.h>


//salvar o estado do jogo, como informações sobre o personagem
void salvar_estado(const char* nome_arquivo, const Personagem* personagem, int progresso){
    FILE* arquivo = fopen(nome_arquivo, "wb"); //open file em binary mode

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return;
    }
    fwrite(personagem, sizeof(Personagem), 1, arquivo);

    fwrite(&progresso, sizeof(int), 1, arquivo);

    fclose(arquivo);
}

void carregar_estado(const char* nome_arquivo, Personagem* personagem, int* progresso){
    FILE* arquivo = fopen(nome_arquivo, "rb"); 

    if(arquivo == NULL){
        printf("ARQUIVO DE SALVAMENTO NÃO ENCONTRADO");
        *progresso = 0;
        return;
    }

    fread(personagem, sizeof(Personagem), 1, arquivo);
    fread(progresso, sizeof(int), 1, arquivo);
    fclose(arquivo);

}