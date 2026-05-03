#include "fila.h"
#include <iostream>
#include <string>

using namespace std;

FilaCircurlar* criaFilaCircurlar() {
    FilaCircurlar* fila = new FilaCircurlar;
    Pessoa array [capacidade];
    fila->inicio = 0;
    fila->final = 0;
    fila->quantidade = 0;
    
    return fila; 
}

void enfileirar(FilaCircurlar &fila, Pessoa p){

    if (fila.quantidade == capacidade){
        cout << "Fila está cheia! " << endl;
        return;
    }

    fila.array[fila.final] = p;
    fila.final = (fila.final + 1) % capacidade;
    fila.quantidade++;
}

Pessoa desenfileirar(FilaCircurlar &fila){

    if (fila.quantidade == 0){
        cout << "Fila está vazia! " << endl;
        Pessoa pessoaVazia = {"", -1, false};
        return pessoaVazia;
    }

      Pessoa pessoaRemovida = fila.array[fila.inicio];
      fila.inicio = (fila.inicio + 1) % capacidade;
      fila.quantidade--;

      return pessoaRemovida;
}