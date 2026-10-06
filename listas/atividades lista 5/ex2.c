#include <stdio.h>

int main() {
    int valores[6], i;

    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos: ");
    for (i = 0; i < 6; i++) printf("%d ", valores[i]);
    printf("\n");
}
