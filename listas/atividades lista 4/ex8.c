#include <stdio.h>
#include <ctype.h>

int main() {
    int mes, ano, dias, bissexto;
    char resposta;

    do {
        do {
            printf("Digite o mes (1 a 12): ");
            scanf("%d", &mes);
        } while (mes < 1 || mes > 12);

        do {
            printf("Digite o ano (maior que zero): ");
            scanf("%d", &ano);
        } while (ano <= 0);

        bissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
        if (mes == 2) dias = bissexto ? 29 : 28;
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) dias = 30;
        else dias = 31;

        printf("O mes %d/%d possui %d dias.\n", mes, ano, dias);
        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);
    } while (resposta == 'S');
}
