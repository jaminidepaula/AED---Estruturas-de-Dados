#include <stdio.h>

int pilha[100];
int topo = -1;

void push(int valor) {
topo++;
pilha[topo] = valor;
printf("Empilhou: %d\n", valor);
}

int pop() {
int valor = pilha[topo];
topo--;
return valor;
}

void imprimirPilha() {
    printf("Pilha [ ");
    for (int i = 0; i <= topo; i++) {
        printf("%d ", pilha[i]);
        if (i < topo) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main () {
    push(1);
    push(2);
    push(3);

    imprimirPilha();

    int removido = pop();
    printf("Removido: %d\n", removido);
    imprimirPilha();

    return 0;
}