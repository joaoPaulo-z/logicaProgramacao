#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[100];
    int idade;
    char sexo;
    int voto;
} Pessoa;

void limparEntrada() {
    int caractere;
    while ((caractere = getchar()) != '\n' && caractere != EOF) {}
}

void mostrarGrupo(Pessoa pessoas[], int total, char sexo, int maiorIdade) {
    int i;
    printf("%s %s:\n", sexo == 'F' ? "Mulheres" : "Homens", maiorIdade ? "maiores de idade" : "menores de idade");
    for (i = 0; i < total; i++) {
        if (pessoas[i].sexo == sexo && (pessoas[i].idade >= 18) == maiorIdade) printf("Nome: %s | Idade: %d | Sexo: %c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
    }
}

int main() {
    Pessoa pessoas[300];
    const char *jogadoras[5] = {
        "Sam Kerr - Australia",
        "Alex Morgan - Estados Unidos",
        "Dzsenifer Marozsan - Alemanha",
        "Amandine Henry - Franca",
        "Marta Vieira - Brasil"
    };
    int votos[5] = {0};
    int total = 0, mulheres = 0, continuar = 1, maiorVotacao = 0, i;

    while (total < 300 && continuar == 1) {
        printf("Entrevistado %d\nNome: ", total + 1);
        fgets(pessoas[total].nome, sizeof(pessoas[total].nome), stdin);
        pessoas[total].nome[strcspn(pessoas[total].nome, "\n")] = '\0';

        do {
            printf("Idade (maior que 12): ");
            scanf("%d", &pessoas[total].idade);
        } while (pessoas[total].idade <= 12);

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &pessoas[total].sexo);
            pessoas[total].sexo = toupper(pessoas[total].sexo);
        } while (pessoas[total].sexo != 'M' && pessoas[total].sexo != 'F');

        printf("Jogadoras:\n");
        for (i = 0; i < 5; i++) printf("%d - %s\n", i + 1, jogadoras[i]);

        do {
            printf("Voto (1 a 5): ");
            scanf("%d", &pessoas[total].voto);
        } while (pessoas[total].voto < 1 || pessoas[total].voto > 5);

        votos[pessoas[total].voto - 1]++;
        if (pessoas[total].sexo == 'F') mulheres++;
        total++;

        if (total >= 50 && total < 300) {
            do {
                printf("Continuar pesquisa? 1 - Sim, 0 - Nao: ");
                scanf("%d", &continuar);
            } while (continuar != 0 && continuar != 1);
        }
        limparEntrada();
    }

    printf("Quantidade de votos por jogadora:\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %d voto(s)\n", jogadoras[i], votos[i]);
        if (votos[i] > maiorVotacao) maiorVotacao = votos[i];
    }

    printf("Jogadora(s) mais votada(s):\n");
    for (i = 0; i < 5; i++) if (votos[i] == maiorVotacao) printf("%s\n", jogadoras[i]);

    mostrarGrupo(pessoas, total, 'F', 1);
    mostrarGrupo(pessoas, total, 'F', 0);
    mostrarGrupo(pessoas, total, 'M', 1);
    mostrarGrupo(pessoas, total, 'M', 0);

    printf("Maiores de idade que votaram na Marta Vieira:\n");
    for (i = 0; i < total; i++) if (pessoas[i].idade >= 18 && pessoas[i].voto == 5) printf("%s\n", pessoas[i].nome);
    printf("Quantidade de mulheres entrevistadas: %d\n", mulheres);
}
