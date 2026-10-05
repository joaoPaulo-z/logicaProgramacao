#include <stdio.h>

int main(){
    float p;
    printf("Digite o preco: ");
    scanf("%f",&p);
    if(p>100.01&&p<500){
        float pa=p-(p*0.05);
        printf("O preco com o desconto e de: R$ %.2f",pa);
    }else if(p>500){
        float pa=p-(p*0.1);
        printf("O preco com o desconto e de: R$ %.2f",pa);
    }else{
        printf("O preco e de: R$ %.2f",p);
    }
}