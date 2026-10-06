#include <stdio.h>

int main() {
    int valores[8], x, y, i;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valores[i]);
    }

    do {
        printf("Digite a posicao X (0 a 7): ");
        scanf("%d", &x);
    } while (x < 0 || x > 7);

    do {
        printf("Digite a posicao Y (0 a 7): ");
        scanf("%d", &y);
    } while (y < 0 || y > 7);

    printf("Soma dos valores nas posicoes %d e %d: %d\n", x, y, valores[x] + valores[y]);
}
