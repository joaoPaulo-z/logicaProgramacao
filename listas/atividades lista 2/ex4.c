#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    if(a==b){
        int c=a+b;
        printf("A soma de %d e %d e: %d",a,b,c);
    }else{
        int c=a*b;
        printf("O produto de %d e %d e %d",a,b,c);
    }
}