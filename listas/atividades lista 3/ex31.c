#include <stdio.h>

int main(){
    float litro_preco;
    int litros;
    int desconto=0;
    printf("Digite o preco do litro: ");
    scanf("%f",&litro_preco);
    printf("Digite a quantidade de litros: ");
    scanf("%d",&litros);
    float valor=litro_preco*litros;
    printf("O valor bruto e: R$ %.2f\n",valor);
    if(litros>=20&&litros<=40){
        int desconto=3;
        valor=valor-(valor*0.03);
        printf("Com o desconto de %d o preco final e de: R$ %.2f",desconto,valor);
    }else if(litros>40){
        int desconto=5;
        valor=valor-(valor*0.05);
        printf("Com o desconto de %d o preco final e de: R$ %.2f",desconto,valor);
    }
    printf("Com o desconto de %d o preco final e de: R$ %.2f",desconto,valor);
}