#include "jogo.h"
#include <stdio.h>
#include "save_game/save_load.h"
#include "game_fases/fases.h"
#include <ncurses.h>
#include <unistd.h>
#ifdef _WIN32
#include <conio.h> //incluir a biblioteca "conio.h" se o ambiente for windows
#endif

//limpar o terminal
void limparTerminal()
{
    printf("\033[2J\033[H");
}
//função principal de todo o jogo, aqui são executadas todas as partes que estão divididas nos arquivos
int main()
{

    Personagem jogador;
    int progresso = 0;

    //iniciando
    inicio();

    limparTerminal();

    //tela de aceitar termos de compromisso
    tela_aceite();

    //se a tela de aceite 
    if (!aceitar_termos())
    {
        printf("voce recusou os termos\n");
        //endwin();
        limparTerminal();
        inicio();
        // jogo encerrado pois é necessario ter a confirmação de termos.
    }

    limparTerminal();

    personagem_create(&jogador);
    limparTerminal();
    printf("\nBem vindo, %s!! Vamos começar a sua jornada\n", jogador.name);

    exibir_personagem(jogador);

    printf("salvando informações...\n");
    salvar_estado("save_game/save.sav", &jogador, progresso);
    sleep(1);
    limparTerminal();
    exibir_personagem(jogador);
    gameOne();
    // verificação do atalho para salvamento
/*
    int key;
    bool sair = false;

    while (!sair)
    {
#ifdef _WIN32
        if (_kbhit())
        {
            key = _getch();
#else
        timeout(0); // Define o tempo limite de espera para getch() como zero (modo não bloqueante)
        key = getch();
        if (key != ERR)
        {
#endif
            if (key == -32)
            {
#ifdef _WIN32
                key = _getch();
#else
                key = getch();
#endif
                if (key == 'j' || key == 'J')
                {
                    printf("Salvando jogo...\n");
                    salvar_estado("save_game/save.sav", &jogador, progresso);
                    printf("Jogo salvo.\n");
                }
            }
            else if (key == 'q' || key == 'Q')
            {
                sair = true;
            }
        }
        // Outras operações do jogo aqui, se necessário
        // Por exemplo, avançar no jogo, exibir informações, etc.
    }
    */

    return 0;
}
