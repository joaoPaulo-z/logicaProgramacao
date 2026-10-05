#include <stdio.h>

int main(){
    float peso,altura;
    printf("Digite o seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura em metros:");
    scanf("%f",&altura);
    float imc=peso/(altura*altura);
    if(imc<18.5){
        printf("imc=%.2f\nAbaixo do peso",imc);
    }else if(imc>18.5&&imc<25){
        printf("imc=%.2f\nPeso ideal",imc);
    }else if(imc>=25.01&&imc<30){
        printf("imc=%.2f\nAcima do peso",imc);
    }else{
        printf("imc=%.2f\nObesidade",imc);
    }
}