#include <stdio.h>

int main() {
    double valores[10], quadrados[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
        quadrados[i] = valores[i] * valores[i];
    }

    printf("Vetor original: ");
    for (i = 0; i < 10; i++) printf("%.2f ", valores[i]);
    printf("\nVetor dos quadrados: ");
    for (i = 0; i < 10; i++) printf("%.2f ", quadrados[i]);
    printf("\n");
}
