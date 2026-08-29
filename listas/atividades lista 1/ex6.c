#include <stdio.h>

int main(){
    float salario;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    float novo_salario=salario+(salario*0.05)-(salario*0.07);
    printf("O seu novo salario com a gratificacao de 5 por cento e os impostos de 7 porr cento e: R$ %.2f",novo_salario);
}