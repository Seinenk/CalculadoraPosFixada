//
// Created by Carlos Michael on 10/12/2022.
//

#ifndef CALCULADORAPOSFIXADA_CALCULADORAPOSFIXADA_H
#define CALCULADORAPOSFIXADA_CALCULADORAPOSFIXADA_H

struct calculo {
    float *pilha;
    int pico;
    int tamanho;
};

typedef struct calculo Calculo;

Calculo *criacaoCalculo();

void Operador(Calculo *calculo, char operador);
void Operando(Calculo *calculo, float operando);
void limparCalculo(Calculo *calculo);

#endif //CALCULADORAPOSFIXADA_CALCULADORAPOSFIXADA_H
