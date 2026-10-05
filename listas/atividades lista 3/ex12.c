#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero positivo ou negativo: ");
    scanf("%d",&n);
    if(n>0){
        printf("Positivo");
    }else if(n<0){
        printf("Negativo");
    }else{
        printf("Zero");
    }
}