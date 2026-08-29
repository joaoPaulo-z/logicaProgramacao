#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Digite um numero positivo maior que zero: ");
    scanf("%d",&n);
    int n_quadrado=n*n;
    int n_cubo=n_quadrado*n;
    float n_raiz=sqrt(n);
    float n_raizcub=pow(n,1.0/3.0);

    printf("%d ao quadrado e: %d\n",n,n_quadrado);
    printf("ao cubo e: %d\n",n_cubo);
    printf("a raiz e: %.3f\n",n_raiz);
    printf("a raiz cubica  e: %.3f\n",n_raizcub);
}