#include <stdio.h>

int main(){
    int ano;
    printf("Digite seu ano de nascimento: ");
    scanf("%d",&ano);
    int idade=2026-ano;
    int idade_2050=2050-ano;
    printf("Voce tem: %d anos\nEm 2050 vai ter: %d anos",idade,idade_2050);
    
}