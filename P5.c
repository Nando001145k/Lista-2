#include <stdio.h>

int passos(int n) {

    if (n == 1) {
        return 0;
    }

    if (n % 2 == 0) {
        return 1 + passos(n / 2);
    } 

    else {

        return 1 + passos(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("digite um numero maior ou igual a 1.\n");
    } else {
        int qtdPassos = passos(n);
        printf("Passos necessarios  %d a 1: %d\n", n, qtdPassos);
    }

    return 0;
}