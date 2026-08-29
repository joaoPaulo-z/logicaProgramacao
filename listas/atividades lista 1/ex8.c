#include <stdio.h>

int main(){
    float deposito;
    float juros;
    printf("Digite o valor do deposito: ");
    scanf("%f",&deposito);
    printf("Digite a taxa de juros: ");
    scanf("%f",&juros);
    float valor_final=deposito*(juros/100+1);
    float rendimento=valor_final-deposito;
    printf("O seu deposito de R$ %.2f, rendeu R$ %.2f. O valor finnal e: R$ %.2f",deposito,rendimento,valor_final);

    return 0;
}