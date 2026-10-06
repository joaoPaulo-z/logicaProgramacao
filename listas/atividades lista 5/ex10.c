#include <stdio.h>

int main() {
    double notas[15], soma = 0;
    int i;

    for (i = 0; i < 15; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    printf("Media geral: %.2f\n", soma / 15);
}
