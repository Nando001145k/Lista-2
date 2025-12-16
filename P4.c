#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) {

    *min = a;
    *max = a;

    if (b < *min) *min = b;
    if (b > *max) *max = b;

    if (c < *min) *min = c;
    if (c > *max) *max = c;
}

int main() {
    int v1, v2, v3;
    int menor, maior; 

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    minMax(v1, v2, v3, &menor, &maior);

    printf("O menor valor eh: %d\n", menor);
    printf("O maior valor eh: %d\n", maior);

    return 0;
}