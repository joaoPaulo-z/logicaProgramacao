#include <stdio.h>

int main(){
    
    float pi=3.1415926536;
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);
    float area=pi*(raio*raio);
    printf("%.3fcm",area);

    return 0;
}