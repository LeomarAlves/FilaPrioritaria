#ifndef FILA_H
#define FILA_H
#include <string>

struct Pessoa
{
    std:: string nome;
    int senha;
    bool prioridade;
};

const int capacidade = 10;

struct FilaCircurlar
{
    Pessoa array [capacidade];
    int inicio;
    int final;
    int quantidade;
};


FilaCircurlar* criaFilaCircurlar();

#endif