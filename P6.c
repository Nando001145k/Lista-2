#include <stdio.h>

int somaDivisores(int n, int d) {
    if (d >= n) return 0;

    if (n % d == 0) {
        return d + somaDivisores(n, d + 1);
    } else {
        return somaDivisores(n, d + 1);
    }
}

int amigos(int a, int b) {

    int somaA = somaDivisores(a, 1);
    int somaB = somaDivisores(b, 1);

    if (somaA == b && somaB == a) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (amigos(n1, n2)) {
        printf("%d e %d sao numeros amigos.\n", n1, n2);
    } else {
        printf("%d e %d nao sao amigos.\n", n1, n2);
    }

    return 0;
}