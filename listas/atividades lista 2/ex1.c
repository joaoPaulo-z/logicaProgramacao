#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &c);
    int soma = a + b;
    if (soma < c)
    {
        printf("A soma de %d e %d e menor que %d", a, b, c);
    }
    else if (soma == c)
    {
        printf("A soma de %d e %d e igual ao terceiro numero", a, b);
    }
    else
    {
        printf("A soma de %d e %d e maior que %d", a, b, c);
    }
}