#include <stdio.h>

int main() {
    double valores[5];
    int posicaoMaior = 0, posicaoMenor = 0, i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%lf", &valores[i]);
        if (valores[i] > valores[posicaoMaior]) posicaoMaior = i;
        if (valores[i] < valores[posicaoMenor]) posicaoMenor = i;
    }

    printf("Posicao do maior valor: %d\nPosicao do menor valor: %d\n", posicaoMaior, posicaoMenor);
}
