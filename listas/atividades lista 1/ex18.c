#include <stdio.h>

int main(){
    float peso_saco_quilos;
    float quantidade_de_racao;
    printf("Peso do saco de racao em quilos: ");
    scanf("%f",&peso_saco_quilos);
    printf("Quantidade da racao para cada gatos em grama: ");
    scanf("%f",&quantidade_de_racao);
    float total_diario=quantidade_de_racao*2.0;
    float total_5dias=(total_diario*5.0)/1000.0;
    float restante=peso_saco_quilos-total_5dias;

    printf("Sobrara %.2f kg no saco",restante);

}