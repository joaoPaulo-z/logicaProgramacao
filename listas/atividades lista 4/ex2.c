#include <stdio.h>
#include <ctype.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, total = 0, quantidadeProcurada = 0;
    double salario, porcentagem;

    while (1) {
        printf("Idade (-1 para encerrar): ");
        scanf("%d", &idade);
        if (idade == -1) break;

        while (idade < 10 || idade > 100) {
            printf("Idade invalida. Digite novamente: ");
            scanf("%d", &idade);
            if (idade == -1) break;
        }
        if (idade == -1) break;

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');

        do {
            printf("Olhos (A/V/C/P): ");
            scanf(" %c", &olhos);
            olhos = toupper(olhos);
        } while (olhos != 'A' && olhos != 'V' && olhos != 'C' && olhos != 'P');

        do {
            printf("Cabelos (L/C/P/R): ");
            scanf(" %c", &cabelos);
            cabelos = toupper(cabelos);
        } while (cabelos != 'L' && cabelos != 'C' && cabelos != 'P' && cabelos != 'R');

        do {
            printf("Salario: ");
            scanf("%lf", &salario);
        } while (salario < 0);

        total++;
        if (sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'C' && cabelos == 'C') quantidadeProcurada++;
    }

    porcentagem = total > 0 ? quantidadeProcurada * 100.0 / total : 0;
    printf("Habitantes pesquisados: %d\nPorcentagem solicitada: %.2f%%\n", total, porcentagem);
}
