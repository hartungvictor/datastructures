struct Fila {
    int incio;
    int fim;
    int total;
    int vlores[10];
};

void create(struct Fila *f);
void inserir(struct Fila *f, int elemento);
int  retirar(struct Fila *f);
int  isEmpty(struct Fila f);
int  isFull(struct Fila f);