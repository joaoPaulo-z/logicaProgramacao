#include  <stdio.h>

int main(){
    float salario;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    float novo_salario=salario*1.25;
    printf("O seu novo salario com aumento de 25 por cento e: R$ %.2f",novo_salario);

    return 0;
}