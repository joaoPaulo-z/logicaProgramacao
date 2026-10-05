#include <stdio.h>

int main(){
    int i;
    int n=0,n1=0;
    for(i=0;i<11;i++){
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(n>n1){
            n1=n;
        }
    }
    printf("O maior numero entre os digitados e: %d",n1);
}