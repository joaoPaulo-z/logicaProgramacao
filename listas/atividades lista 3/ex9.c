#include <stdio.h>

int main(){
    float km,litros;
    printf("Digite a distancia em km: ");
    scanf("%f",&km);
    printf("Digite a quantidade de gasolina utilizada em litros: ");
    scanf("%f",&litros);
    float consumo=km/litros;
    printf("O consumo medio e: %.2f km/L",consumo);
}
