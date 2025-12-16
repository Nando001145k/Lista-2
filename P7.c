#include <stdio.h>


int inverte(int n, int acumulador) {
    if (n == 0) {
        return acumulador;
    }
    
}

int ehPalindromo(int n) {

    int invertido = inverte(n, 0);
    
    if (n == invertido) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPalindromo(n)) {
        printf("Sim! O numero %d eh um palindromo.\n", n);
    } else {
        printf("Nao. O numero %d nao eh palindromo.\n", n);
    }

    return 0;
}