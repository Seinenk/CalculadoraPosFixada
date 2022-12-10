//
// Created by Carlos Michael on 10/12/2022.
//

#include "CalculadoraPosFixada.h"
#include <malloc.h>

Calculo *criacaoCalculo() {
    Calculo *calculo = (Calculo *) malloc(sizeof(Calculo));
    calculo->pilha = (float *) malloc(sizeof(int) * calculo->tamanho);
    calculo->pico = -1;
    calculo->tamanho = 10;
    return calculo;
}

void Operador(Calculo *calculo, char operador) {
    float operando1 = calculo->pilha[calculo->pico--];
    float operando2 = calculo->pilha[calculo->pico--];
    float resultado = 0;
    switch (operador) {
        case '+':
            resultado = operando1 + operando2;
            break;
        case '-':
            resultado = operando1 - operando2;
            break;
        case '*':
            resultado = operando1 * operando2;
            break;
        case '/':
            resultado = operando1 / operando2;
            break;
    }
    calculo->pilha[++calculo->pico] = resultado;
}

void Operando(Calculo *calculo, float operando) {
    calculo->pilha[++calculo->pico] = operando;
}

void limparCalculo(Calculo *calculo) {
    free(calculo->pilha);
    free(calculo);
}
