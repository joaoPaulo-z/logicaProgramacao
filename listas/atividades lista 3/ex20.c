#include <stdio.h>

int main(){
    float n1,n2,n3;
    printf("Escolha dois numeros: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    printf("Digite: \n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\nEscolha: ");
    scanf("%f",&n3);
    if(n3==1){
        printf("A soma e: %.0f",n1+n2);
    }else if(n3==2){
        printf("O resultado da subtracao e: %.0f",n1-n2);
    }else if(n3==3){
        printf("O resultado da divisao e: %.2f",n1/n2);
    }else{
        printf("O resultado da multiplicacao e: %.0f",n1*n2);
    }
}