#include <stdio.h>
#include <stdbool.h>
#include "jogo.h"
//tela de aceitação de termos para iniciar o jogo
void tela_aceite()
{
  printf("#####################################################################\n");
  printf("bem vindo ao jogo\n");
  printf("Antes de processeguir, voce deve concordar com os termos\n");
  printf("Digite [S] para sim e [N] para não: \n");
}

//veerificar o input recebido
bool aceitar_termos()
{
  char resposta;
  scanf(" %c", &resposta);

  if (resposta == 's' || resposta == 'S')
  {
    return true;
  }
  else
  {
    return false;


  }

}





