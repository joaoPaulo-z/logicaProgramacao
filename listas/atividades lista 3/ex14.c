#include <stdio.h>

int main(){
    int n1,n2;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d maior que %d",n1,n2);
    }else if(n1==n2){
        printf("%d igual a %d",n2,n1);
    }else{
        printf("%d maior que %d",n2,n1);
    }
}