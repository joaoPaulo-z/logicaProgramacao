#include <stdio.h>

int main() {
    int numero, divisor;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Divisores de %d:", numero);
    for (divisor = 1; divisor < numero; divisor++) if (numero % divisor == 0) printf(" %d", divisor);
    printf(" %d\n", numero);
}
