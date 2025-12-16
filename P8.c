#include <stdio.h>

int ler_analisar(int restantes, int *qtdPositivos) {
    if (restantes == 0) {
        return 0;
    }

    int numeroAtual;
    printf("Digite o valor (%d restantes): ", restantes);
    scanf("%d", &numeroAtual);

    int somaDosProximos = ler_analisar(restantes - 1, qtdPositivos);

    if (numeroAtual > 0) {
        (*qtdPositivos)++; 
        return numeroAtual + somaDosProximos;
    } else {

        return somaDosProximos;
    }
}

int main() {
    int contador = 0;
    int somaTotal = 0;
    
    somaTotal = ler_analisar(6, &contador);

    printf("Quantidade de positivos: %d\n", contador);

    if (contador > 0) {
        
        float media = (float)somaTotal / contador;
        printf("Soma dos positivos: %d\n", somaTotal);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum numero positivo foi inserido.\n");
    }

    return 0;
}