#include <stdio.h>

int main(){
    float salario;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    float salario_final=(salario*0.9)+50;
    printf("Com o desconto dos impostos de 10 por cento, mais a gratificação de R$ 50. O seu novo salario e de: R$ %2.f",salario_final);
}