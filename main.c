//
// Created by Carlos Michael on 10/12/2022.
//

#include <stdio.h>
#include "CalculadoraPosFixada.h"

int main() {
    Calculo *calculo = criacaoCalculo();

    int acao = 0;
    float operando = 0;
    char operador = ' ';

    printf("Bem vindo a calculadora pos fixada!\n\n");
    printf("Acoes disponiveis:\n");
    printf("1 - Operando\n");
    printf("2 - Operador\n");
    printf("3 - resultado\n");
    printf("4 - finalizar programa\n\n");
    printf("Qual a opcao desejada?: ");
    scanf("%d", &acao);
    printf("\n");

    while (acao != 4) {
        switch (acao) {
            case 1:
                printf("Digite o operando: ");
                scanf("%f", &operando);
                Operando(calculo, operando);
                break;
            case 2:
                printf("Digite o operador: ");
                scanf(" %c", &operador);
                Operador(calculo, operador);
                break;
            case 3:
                printf("Resultado: %.2f\n", calculo->pilha[calculo->pico]);
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
        printf("\n");
        printf("Qual a opcao desejada?: ");
        scanf("%d", &acao);
        printf("\n");
    }

}
