#include <stdio.h>
#include <string.h>
int main() {
    char produto[100];
    int opcao, quantidade;
    int vendas = 0, totalProdutos = 0;
    double preco, totalVenda, faturamento = 0, maiorVenda = 0;
do {
    printf("\n1 - Registrar venda\n0 - Encerrar\nOpcao: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        while (getchar() != '\n');
        printf("Nome do produto: ");
        fgets(produto, sizeof(produto), stdin);
        produto[strcspn(produto, "\n")] = '\0';
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: ");
        scanf("%lf", &preco);
        totalVenda = quantidade * preco;
        printf("Total da venda de %s: R$ %.2f\n", produto, totalVenda);
        vendas++;
        totalProdutos += quantidade;
        faturamento += totalVenda;
        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }
    }
} while (opcao != 0);

printf("\nVendas realizadas: %d\n", vendas);
printf("Produtos vendidos: %d\n", totalProdutos);
printf("Faturamento total: R$ %.2f\n", faturamento);
printf("Maior venda: R$ %.2f\n", maiorVenda);

return 0;
}