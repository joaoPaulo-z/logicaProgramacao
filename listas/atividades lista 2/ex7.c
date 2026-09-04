#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    if(n%2==0){
        n+=5;
        printf("O resultado e %d",n);
    }else{
        n+=8;
        printf("O resultado e %d",n);
    }
}