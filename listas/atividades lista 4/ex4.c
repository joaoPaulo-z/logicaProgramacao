#include <stdio.h>
#include <ctype.h>

int main() {
    int uso[3][3] = {0}, totalElevador[3] = {0}, totalPeriodo[3] = {0}, ordenados[3];
    int maiorPeriodo, menorPeriodo, maiorElevador, maiorNoPeriodo, maiorNoElevador, utilizacaoMedia;
    int i, j, auxiliar;
    char elevador, periodo;

    for (i = 0; i < 50; i++) {
        do {
            printf("Morador %d - elevador (A/B/C): ", i + 1);
            scanf(" %c", &elevador);
            elevador = toupper(elevador);
        } while (elevador < 'A' || elevador > 'C');

        do {
            printf("Periodo (M/V/N): ");
            scanf(" %c", &periodo);
            periodo = toupper(periodo);
        } while (periodo != 'M' && periodo != 'V' && periodo != 'N');

        j = periodo == 'M' ? 0 : periodo == 'V' ? 1 : 2;
        uso[elevador - 'A'][j]++;
        totalElevador[elevador - 'A']++;
        totalPeriodo[j]++;
    }

    maiorPeriodo = menorPeriodo = totalPeriodo[0];
    maiorElevador = totalElevador[0];
    for (i = 1; i < 3; i++) {
        if (totalPeriodo[i] > maiorPeriodo) maiorPeriodo = totalPeriodo[i];
        if (totalPeriodo[i] < menorPeriodo) menorPeriodo = totalPeriodo[i];
        if (totalElevador[i] > maiorElevador) maiorElevador = totalElevador[i];
    }

    printf("Periodo(s) mais usado(s) e elevador(es) com maior uso nesse periodo:\n");
    for (j = 0; j < 3; j++) {
        if (totalPeriodo[j] == maiorPeriodo) {
            maiorNoPeriodo = uso[0][j];
            for (i = 1; i < 3; i++) if (uso[i][j] > maiorNoPeriodo) maiorNoPeriodo = uso[i][j];
            for (i = 0; i < 3; i++) if (uso[i][j] == maiorNoPeriodo) printf("Periodo %c, elevador %c\n", "MVN"[j], 'A' + i);
        }
    }

    printf("Elevador(es) mais frequentado(s) e periodo(s) de maior fluxo:\n");
    for (i = 0; i < 3; i++) {
        if (totalElevador[i] == maiorElevador) {
            maiorNoElevador = uso[i][0];
            for (j = 1; j < 3; j++) if (uso[i][j] > maiorNoElevador) maiorNoElevador = uso[i][j];
            for (j = 0; j < 3; j++) if (uso[i][j] == maiorNoElevador) printf("Elevador %c, periodo %c\n", 'A' + i, "MVN"[j]);
        }
    }

    printf("Diferenca percentual entre o periodo mais e menos usado: %.2f%%\n", (maiorPeriodo - menorPeriodo) * 100.0 / 50);
    for (i = 0; i < 3; i++) ordenados[i] = totalElevador[i];
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (ordenados[i] > ordenados[j]) {
                auxiliar = ordenados[i];
                ordenados[i] = ordenados[j];
                ordenados[j] = auxiliar;
            }
        }
    }

    utilizacaoMedia = ordenados[1];
    for (i = 0; i < 3; i++) if (totalElevador[i] == utilizacaoMedia) printf("Elevador %c (utilizacao media): %.2f%% do total\n", 'A' + i, totalElevador[i] * 100.0 / 50);
}
