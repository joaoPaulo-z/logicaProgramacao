#include <stdio.h>

int main(){
    float preco;
    int forma_pagamento;
    printf("digite o preco do produto: ");
    scanf("%f",&preco);
    printf("1- A vista em dinheiro ou cheque: 10 por cento de desconto.\n2- A vista no cartao de credito: 15 por cento de desconto.\n3- Em duas parcelas: preco normal, sem juros.\n4- Em duas parcelas: acrescimo de 10 por cento sobre o preco normal.\nQual a forma de pagamento? ");
    scanf("%d",&forma_pagamento);
    if(forma_pagamento==1){
        preco=preco*0.9;
        printf("O preco do produto com o desconto e de: R$ %.2f",preco);
    }else if (forma_pagamento==2)
    {
        preco=preco*0.85;
        printf("O preco do produto com o desconto e de: R$ %.2f",preco);
    }else if (forma_pagamento==3)
    {
        printf("O preco do produto e de: R$ %.2f",preco);
    }else if (forma_pagamento==4)
    {
        preco=preco*1.10;
        printf("O preco do produto com o acrescimo e de: R$ %.2f",preco);
    }else
    {
        printf("Forma de pagamento inexistente");
    }
}