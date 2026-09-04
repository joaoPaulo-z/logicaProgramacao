#include <stdio.h>

int main(){
    float velocidade_maxima;
    float velocidade_veiculo;
    printf("Digite a velocidade maxima permitida na via: ");
    scanf("%f",&velocidade_maxima);
    printf("Digite a velocidade do veiculo: ");
    scanf("%f",&velocidade_veiculo);
    if(velocidade_veiculo<=velocidade_maxima){
        printf("Nenhuma infracao.");
    }else{
        float diferenca=velocidade_veiculo-velocidade_maxima;
        float percentual=(diferenca/velocidade_maxima)*100;
        printf("O limite da via e %.0f voce passou a %.0f excedendo %.0f%% da velocidade\n",velocidade_maxima,velocidade_veiculo,percentual);
        if(percentual<=20){
            printf("Infracao media.");
        }else if(percentual<=50){
            printf("Infracao grave");
        }else{
            printf("Infraca gravissima");
        }
        if(velocidade_veiculo>120){
            printf("\nVelocidade extremamente elevada!");
    }
    }
}