#include <stdio.h>

int main(){
    int horas;
    float vph;
    printf("digite as horas trabalhadas: ");
    scanf("%d",&horas);
    printf("Digite o valor por hora: ");
    scanf("%f",&vph);
    float salario=horas*vph;
    printf("O seu salario de acordo com as horas trabalhadas e de: R$ %.2f",salario);
}