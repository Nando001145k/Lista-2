#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {

    if (inicio > fim) {
        return 0;
    }

    if (inicio % k == 0) {

        return inicio + somaMultiplos(inicio + 1, fim, k);

    } else {

        return somaMultiplos(inicio + 1, fim, k);
    }
}

int main() {
    int inicio, fim, k;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);
    printf("Digite o fim: ");
    scanf("%d", &fim);
    printf("Digite k: ");
    scanf("%d", &k);

    int total = somaMultiplos(inicio, fim, k);
    printf("Resultado: %d\n", total);

    return 0;
}