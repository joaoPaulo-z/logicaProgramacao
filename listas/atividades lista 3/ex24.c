#include <stdio.h>

int main(){
    int n1;
    int i=0;
    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d",&n1);
    for(i=0;i<11;i++){
        printf("%d x %d = %d\n",n1,i,n1*i);
    }
}