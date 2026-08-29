#include <stdio.h>

int main(){
    printf("Digite o valor da base e da altura de um triangulo para saber sua area.\n");
    float altura;
    float base;
    printf("\nBase: ");
    scanf("%f",&base);
    printf("Altura: ");
    scanf("%f",&altura);
    float area=(base*altura)/2;
    printf("\nA area do triangulo e: %.1f",area);

    return 0;
}