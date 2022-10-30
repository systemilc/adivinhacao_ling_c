#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinha��o *\n");
    printf("************************************\n");

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    srand(time(0));
    int numerosecreto = rand() % 100;

    while(!acertou) {

        printf("Qual � o seu %do. chute? ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos\n");
            continue;
        }

        printf("Seu %do. chute foi %d\n", tentativas, chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parab�ns! Voc� acertou!\n");
        } else if(maior) {
            printf("Seu chute foi maior do que o n�mero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o n�mero secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("Voc� fez %.2f pontos", pontos);
    printf("\nObrigado por jogar!\n");

}
