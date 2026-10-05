#include <stdio.h>

int main(){
    float n1,n2,n3;
    printf("Digite sua primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);
    printf("Digite sua terceira nota: ");
    scanf("%f",&n3);
    float media=(n1+n2+n3)/3;
    printf("A media das 3 notas e: %.1f",media);

    return 0;
}