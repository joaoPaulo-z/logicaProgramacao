#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); 
    float salario;
    float cmpf=0.0038;
    float cheque1;
    float cheque2;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Digite o valor do primeiro cheque: ");
    scanf("%f",&cheque1);
    printf("Digite o valor do segundo cheque: ");
    scanf("%f",&cheque2);
    float conta_depois_do_cheque=(salario-(cheque1*cmpf)-cheque1)-(cheque2*cmpf)-cheque2;
    printf("O valor do conta depois dos cheques e os impostos e de: R$ %.2f",conta_depois_do_cheque);

}
