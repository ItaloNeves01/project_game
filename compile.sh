#!/bin/bash
gcc -o jogo main.c startTela.c aceite.c personagem_create.c save_game/save_load.c game_fases/faseOne.c  -lncurses
