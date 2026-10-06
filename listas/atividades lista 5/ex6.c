#include <stdio.h>

int main() {
    int valores[10], maior, menor, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        if (i == 0 || valores[i] > maior) maior = valores[i];
        if (i == 0 || valores[i] < menor) menor = valores[i];
    }

    printf("Maior elemento: %d\nMenor elemento: %d\n", maior, menor);
}
