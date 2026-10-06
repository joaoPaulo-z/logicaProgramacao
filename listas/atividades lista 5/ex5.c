#include <stdio.h>

int main() {
    int valores[10], pares = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        if (valores[i] % 2 == 0) pares++;
    }

    printf("Quantidade de valores pares: %d\n", pares);
}
