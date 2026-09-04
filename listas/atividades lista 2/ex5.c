#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    if(n>=0){
        int n2=n*2;
        printf("O dobro de %d e %d",n,n2);
    }else{
        int n2=n*3;
        printf("O triplo de %d e %d",n,n2);
    }
}