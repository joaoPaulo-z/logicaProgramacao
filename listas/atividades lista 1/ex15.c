#include <stdio.h>

int main(){
    float preco_carro;
    float numero_lucro;
    float numero_impostos;
    printf("Digite o preco de fabrica do veiculo: ");
    scanf("%f",&preco_carro);
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f",&numero_lucro);
    printf("Digite o percentual dos impostos: ");
    scanf("%f",&numero_impostos);
    float percentual_lucro=numero_lucro/100;
    float percentual_impostos=numero_impostos/100;
    float lucro_valor=preco_carro*percentual_lucro;
    float imposto_valor=preco_carro*percentual_impostos;
    float preco_final=preco_carro+lucro_valor+imposto_valor;
    printf("O valor do lucro e: R$ %.2f\nO valor do imposto e de: R$ %.2f\nO preco final do carro para o consumidor e de: R$ %.2f",lucro_valor,imposto_valor,preco_final);
    
}