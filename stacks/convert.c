#include <stdio.h>
#include "pilha.h"

int main (int argc, char *argv[]){
    int valor, resto;
    struct Pilha p;
    create(&p);

    printf("digite um valor");
    scanf("%d", &valor);

    while(valor != 0){
        resto = valor % 2;
        push(&p, resto);
        valor = valor / 2;
    }
   
    while(!isEmpty(p)){
        resto = pop(&p);
        prinf("%d", resto);
    }

    return 0;

}