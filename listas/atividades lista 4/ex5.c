#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, excedeu = 0;
    unsigned long long anterior = 0, atual = 1, proximo;

    do {
        printf("Digite a ordem do termo (maior ou igual a zero): ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0) printf("Termo 0: 0\n");
    else {
        for (i = 2; i <= n; i++) {
            if (ULLONG_MAX - atual < anterior) {
                excedeu = 1;
                break;
            }
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
        if (excedeu) printf("O termo excede a capacidade numerica deste programa.\n");
        else printf("Termo %d: %llu\n", n, atual);
    }
}
