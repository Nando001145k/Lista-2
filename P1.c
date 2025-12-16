#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int n;

    printf("Digite um numero inteiro para somar seus digitos: ");
    scanf("%d", &n);

    int resultado = somaDigitos(n);
    printf("A soma dos digitos de %d eh: %d\n", n, resultado);

    return 0;
}