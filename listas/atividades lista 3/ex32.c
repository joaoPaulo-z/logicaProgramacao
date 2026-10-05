#include <stdio.h>

int main(){
    int hora_entrada,hora_saida,horas,preco;
    printf("Digite o horario de entrada: ");
    scanf("%d",&hora_entrada);
    printf("Digite o horario de saida: ");
    scanf("%d",&hora_saida);
    horas=hora_saida-hora_entrada;
    preco=(horas*5)+5;
    printf("O tempo de permanencia foi de %d horas. O valor total do estacionamento e de: R$ %d",horas,preco);
}