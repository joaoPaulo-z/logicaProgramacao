#include <stdio.h>

int main(){
    char nome[50];
    int qt;
    float preco;
    printf("Digite o nome do produto: ");
    fgets(nome,50,stdin);
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d",&qt);
    float vt=qt*preco;
    printf("O preco da compra de %d %s deu o total de R$ %.2f",qt,nome,vt);
}