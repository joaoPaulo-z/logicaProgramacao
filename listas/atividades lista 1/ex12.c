#include <stdio.h>
#include<math.h>

int main(){
    int n1;
    int n2;
    printf("Digite um numero maior que zero: ");
    scanf("%d",&n1);
    printf("Digite outro numero maior que zero: ");
    scanf("%d",&n2);
    if (n1>0 && n2>0){
    int n3=pow(n1,n2);
    printf("%d elevado %d vezes e: %d",n1,n2,n3);}
    else{
        printf("Os numeros digitados nao sao maiores que zero");
    }
}    