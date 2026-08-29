#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int n4;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("Digite outro numero: ");
    scanf("%d", &n3);
    printf("Digite outro numero: ");
    scanf("%d", &n4);
    int soma = n1 + n2 + n3 + n4;
    printf("A soma dos 4 numeros e: %d",soma);

    return 0;
}