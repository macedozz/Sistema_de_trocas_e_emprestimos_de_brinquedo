typedef enum {
    DISPONÍVEL,
    EM_NEGOCIAÇÃO,
    EMPRESTADO,
}Status;

typedef struct Brinquedo {
    char nome[50];
    char descricao[100];
    char link[50];
    Status status;
}brinquedo;



