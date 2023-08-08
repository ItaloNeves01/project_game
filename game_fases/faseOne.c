#include "fases.h"
#include <stdio.h>
#include <string.h> // Inclua esta linha para usar a função strcmp()

void gameOne()
{
    char ladoOption[10];
    int escolhaCorreta = 0;

    while (!escolhaCorreta) {
        printf("No ano em que Buttercup nasceu, a mulher mais bonita do mundo era uma\n");
        printf("criada francesa chamada Annette. Annette trabalhava em Paris para o duque\n");
        printf("e a duquesa de Guiche, e não passou despercebido ao olhar do duque que\n");
        printf("uma mulher extraordinária estava polindo a prataria. O olhar do duque\n");
        printf("DIREITA ou ESQUERDA?\n");

        scanf("%s", ladoOption);

        if (strcmp(ladoOption, "direita") == 0 || strcmp(ladoOption, "DIREITA") == 0) {
            printf("Você escolheu direita\n");
            escolhaCorreta = 1; // Define para verdadeiro, sai do loop
        }
        else if (strcmp(ladoOption, "esquerda") == 0 || strcmp(ladoOption, "ESQUERDA") == 0) {
            printf("Você escolheu esquerda\n");
            escolhaCorreta = 1; // Define para verdadeiro, sai do loop
        }
        else {
            printf("Opção incorreta. Digite novamente.\n");
        }
    }
}
