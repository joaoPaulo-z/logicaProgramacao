#include <stdio.h>

int main() {
    int valores[10], maior, posicaoMaior = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valores[i]);
        if (i == 0 || valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
    }

    printf("Vetor: ");
    for (i = 0; i < 10; i++) printf("%d ", valores[i]);
    printf("\nMaior elemento: %d\nPosicao: %d\n", maior, posicaoMaior);
}
