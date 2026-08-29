#include <stdio.h>

int main(){
    int pe;
    printf("Digite uma medida em pes: ");
    scanf("%d",&pe);
    int polegadas=pe*12;
    float jarda=pe/3.0;
    float milha=jarda/1760.0;
    printf("A medida em polegadas e: %d\n",polegadas);
    printf("em jardas e: %.2f\n",jarda);
    printf("em milhas e: %.5f",milha);
}