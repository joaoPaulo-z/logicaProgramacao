#include <stdio.h>

int main() {
    double valores[10], somaPositivos = 0;
    int negativos = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
        if (valores[i] < 0) negativos++;
        else if (valores[i] > 0) somaPositivos += valores[i];
    }

    printf("Quantidade de negativos: %d\nSoma dos positivos: %.2f\n", negativos, somaPositivos);
}
