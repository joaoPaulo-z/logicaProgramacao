#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100], sexo;
    int homens = 0, mulheres = 0, i, caractere;
    double altura, peso;
    double somaAlturaHomens = 0, somaAlturaMulheres = 0, somaPesoHomens = 0, somaPesoMulheres = 0;
    for (i = 0; i < 10; i++) {
        printf("Pessoa %d\nNome: ", i + 1);
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');
        do {
            printf("Altura em metros: ");
            scanf("%lf", &altura);
        } while (altura <= 0);
        do {
            printf("Peso em kg: ");
            scanf("%lf", &peso);
        } while (peso <= 0);
        if (sexo == 'M') {
            homens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else {
            mulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }
        while ((caractere = getchar()) != '\n' && caractere != EOF) {}
    }
    printf("Numero de homens: %d\nNumero de mulheres: %d\n", homens, mulheres);
    if (homens > 0) printf("Altura media dos homens: %.2f m\nPeso medio dos homens: %.2f kg\n", somaAlturaHomens / homens, somaPesoHomens / homens);
    else printf("Nao ha homens no grupo.\n");
    if (mulheres > 0) printf("Altura media das mulheres: %.2f m\nPeso medio das mulheres: %.2f kg\n", somaAlturaMulheres / mulheres, somaPesoMulheres / mulheres);
    else printf("Nao ha mulheres no grupo.\n");
    printf("Altura media do grupo: %.2f m\nPeso medio do grupo: %.2f kg\n", (somaAlturaHomens + somaAlturaMulheres) / 10, (somaPesoHomens + somaPesoMulheres) / 10);
}
