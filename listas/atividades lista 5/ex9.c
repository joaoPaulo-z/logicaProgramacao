#include <stdio.h>

int main() {
    int valores[6], i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor par %d: ", i + 1);
            scanf("%d", &valores[i]);
        } while (valores[i] % 2 != 0);
    }

    printf("Valores pares em ordem inversa: ");
    for (i = 5; i >= 0; i--) printf("%d ", valores[i]);
    printf("\n");
}
