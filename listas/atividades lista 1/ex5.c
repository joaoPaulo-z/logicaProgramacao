#include <stdio.h>

int main(){
    float salario;
    float aumento;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite o aumento: ");
    scanf("%f", &aumento);
    float novo_salario = salario * (aumento / 100 + 1);
    printf("O seu novo salario com o aumento de %.1f por cento e: R$ %.2f", aumento, novo_salario);

    return 0;
}