#include <stdio.h>

int main(){
    float salario_minimo;
    int horas_trabalhadas;
    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salario_minimo);
    printf("Digite as horas trabalhadas: ");
    scanf("%d",&horas_trabalhadas);
    float hora_valor=salario_minimo/2;
    float salario=horas_trabalhadas*hora_valor;
    float salario_receber=salario-(salario*0.03);
    printf("O salario a receber tendo trabalhado %d horas e de: R$ %.2f",horas_trabalhadas,salario_receber);

}