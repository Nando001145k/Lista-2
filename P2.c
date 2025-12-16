#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int inicio, fim, k;

    printf("Digite o valor de inicio: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Digite o numero k (para somar os multiplos dele): ");
    scanf("%d", &k);

    int total = somaMultiplos(inicio, fim, k);
    printf("A soma dos multiplos de %d entre %d e %d eh: %d\n", k, inicio, fim, total);

    return 0;
}