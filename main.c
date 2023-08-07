#include "jogo.h"
#include <stdio.h>

int main(){
    inicio();

    tela_aceite();

    if (!aceitar_termos()){
        printf("voce recusou os termos\n");
        //jogo encerrado pois é necessario ter a confirmação de termos.
        return 1;
    }
    Personagem jogador;
    personagem_create(&jogador);

    printf("\nBem vindo, %s!! Vamos começar a sua jornada", jogador.name);

    exibir_personagem(jogador);
    return 0;
}