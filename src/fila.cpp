#include "fila.h"
#include <iostream>
#include <string>

FilaCircurlar* criaFilaCircurlar() {
    FilaCircurlar* fila = new FilaCircurlar;
    fila->inicio = 0;
    fila->final = 0;
    fila->quantidade = 0;
    
    return fila; 
}
