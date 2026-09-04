#include <stdio.h>

int main(){
    int v1,v2;
    printf("Digite o primeiro valor booleano (1 para VERDADEIRO, 0 para FALSO): ");
    scanf("%d",&v1);
    printf("Digite o segundo valor booleano (1 para VERDADEIRO, 0 para FALSO):");
    scanf("%d",&v2);
    if(v1==1 && v2==1){
        printf("Ambos sao VERDADEIROS");
    }else if(v1==0 && v2==0){
        printf("Os dois sao FALSOS");
    }else{
        printf("Os dois sao diferentes");
    }
}