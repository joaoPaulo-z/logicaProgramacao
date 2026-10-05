#include <stdio.h>

int main(){
    int n1,n2;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro: ");
    scanf("%d",&n2);
    int soma=n1+n2;
    int subtracao=n1-n2;
    int divisao=n1/n2;
    int multiplicacao=n1*n2;
    printf("A soma de %d e %d e: %d\n",n1,n2,soma);
    printf("A subtracao de %d e %d e: %d\n",n1,n2,subtracao);
    printf("A multiplicacao de %d e %d e: %d\n",n1,n2,multiplicacao);
    printf("A divisao de %d e %d e: %d\n",n1,n2,divisao);
}