#include <stdio.h>

int main() {
    int opcao, quantidade;
    double total = 0;

    do {
        printf("1 - Abacaxi: R$ 5,00\n2 - Maca: R$ 1,00\n3 - Pera: R$ 4,00\n0 - Finalizar compra\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            do {
                printf("Quantidade: ");
                scanf("%d", &quantidade);
            } while (quantidade <= 0);

            if (opcao == 1) total += quantidade * 5.0;
            if (opcao == 2) total += quantidade * 1.0;
            if (opcao == 3) total += quantidade * 4.0;
        } else if (opcao != 0) {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    printf("Valor total da compra: R$ %.2f\n", total);
}
