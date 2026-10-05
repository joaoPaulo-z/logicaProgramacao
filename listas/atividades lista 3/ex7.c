#include <stdio.h>

int main(){
    float graus;
    printf("Digite a temperatura em graus: ");
    scanf("%f",&graus);
    float f=(graus*9/5)+32;
    printf("A temperatura em fahrenheit e: %.1f",f);
}