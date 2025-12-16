#include <stdio.h>

int somaDiv(int n, int d) {
    if (d >= n) return 0;
    
    if (n % d == 0)
        return d + somaDiv(n, d + 1);
    else
        return somaDiv(n, d + 1);
}

int ehPerfeito(int n) {

    if (somaDiv(n, 1) == n) 
        return 1;
    else 
        return 0;
}

int main() {
    int n;

    printf("Digite um numero para verificar: ");
    scanf("%d", &n);

    if (ehPerfeito(n) == 1) {
        printf("Resultado: O numero %d EH perfeito!\n", n);
    } else {
        printf("Resultado: O numero %d NAO eh perfeito.\n", n);
    }

    return 0;
}