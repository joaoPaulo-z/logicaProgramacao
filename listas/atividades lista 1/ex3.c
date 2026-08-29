#include <stdio.h>

int main(){
    float n1;
    int p1;
    float n2;
    int p2;
    float n3;
    int p3;
    printf("Digite sua primeira nota: ");
    scanf("%f",&n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%d",&p1);
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%d",&p2);
    printf("Digite sua terceira nota: ");
    scanf("%f",&n3);
    printf("Digite o peso da terceira nota: ");
    scanf("%d",&p3);
    float mp=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("A nota final e: %.2f",mp);

    return 0;
}