#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    int i;
    int soma=0;
    for(i=1;i<=n;i++){
        soma=soma + i;
    }
    printf("A soma de 1 ate %d = %d\n", n, soma);
}
