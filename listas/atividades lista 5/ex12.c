#include <stdio.h>

int main() {
    double valores[5], maior, menor, soma = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
        soma += valores[i];
        if (i == 0 || valores[i] > maior) maior = valores[i];
        if (i == 0 || valores[i] < menor) menor = valores[i];
    }

    printf("Valores lidos: ");
    for (i = 0; i < 5; i++) printf("%.2f ", valores[i]);
    printf("\nMaior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, soma / 5);
}
