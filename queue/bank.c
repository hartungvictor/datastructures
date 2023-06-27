#include <stdio.h>
#include "fila.h"

int main () {

    struct Fila f;
    int elemento;
    create(&f);

    inserir(&f, 176);
    inserir(&f, 914);
    inserir(&f, 1817);
    inserir(&f, 100);

    printf("bem vindo ao banco");
    printf("--------------------------------");
    
    while(!isEmpty(f)){
        elemento = retirar(&f);
        prinft("numero é:", elemento);
    }

    return 0;
}