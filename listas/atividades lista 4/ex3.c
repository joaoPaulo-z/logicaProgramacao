#include <stdio.h>
#include <ctype.h>

int main() {
    int quantidade[5] = {0};
    int somaIdadesRuim = 0, maiorIdadeOtimo = -1, maiorIdadeRuim = -1, maiorIdadePessimo = -1;
    int idade, diferenca, i;
    char nota;

    for (i = 0; i < 100; i++) {
        do {
            printf("Espectador %d - idade: ", i + 1);
            scanf("%d", &idade);
        } while (idade < 0);

        do {
            printf("Opiniao (A/B/C/D/E): ");
            scanf(" %c", &nota);
            nota = toupper(nota);
        } while (nota < 'A' || nota > 'E');

        quantidade[nota - 'A']++;
        if (nota == 'A' && idade > maiorIdadeOtimo) maiorIdadeOtimo = idade;
        if (nota == 'D') {
            somaIdadesRuim += idade;
            if (idade > maiorIdadeRuim) maiorIdadeRuim = idade;
        }
        if (nota == 'E' && idade > maiorIdadePessimo) maiorIdadePessimo = idade;
    }

    diferenca = quantidade[1] - quantidade[2];
    if (diferenca < 0) diferenca = -diferenca;

    printf("Respostas otimo: %d\n", quantidade[0]);
    printf("Diferenca percentual entre bom e regular: %.2f%%\n", diferenca * 100.0 / 100);
    if (quantidade[3] > 0) printf("Media de idade de quem respondeu ruim: %.2f\n", (double)somaIdadesRuim / quantidade[3]);
    else printf("Ninguem respondeu ruim.\n");
    printf("Percentagem de respostas pessimo: %.2f%%\n", quantidade[4] * 100.0 / 100);
    if (quantidade[4] > 0) printf("Maior idade entre as respostas pessimo: %d\n", maiorIdadePessimo);
    else printf("Ninguem respondeu pessimo.\n");
    if (quantidade[0] > 0 && quantidade[3] > 0) {
        diferenca = maiorIdadeOtimo - maiorIdadeRuim;
        if (diferenca < 0) diferenca = -diferenca;
        printf("Diferenca entre as maiores idades de otimo e ruim: %d\n", diferenca);
    } else printf("Nao e possivel calcular a diferenca de idades.\n");
}
