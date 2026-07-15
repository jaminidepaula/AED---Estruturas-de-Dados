#include <stdio.h>

int fila[100];
int inicio = 0;
int fim = -1;

void enqueue(int valor) {
    fim++;
    fila[fim] = valor;
    printf("Enfileirou: %d\n", valor);
}

int dequeue() {
    int valor = fila[inicio];
    inicio++;
    return valor;
}

void imprimirFila() {
    printf("Fila: [");

    for (int i = inicio; i <= fim; i++) {
    printf("%d", fila[i]);
        if (i < fim) {
        printf(", ");
        }
    }   
    printf("]\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    imprimirFila();

    int removido = dequeue();
    printf("Removido: %d\n", removido);

    imprimirFila();

    return 0;
}

