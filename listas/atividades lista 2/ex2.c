#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    char sexo;
    char estado_civil[10];
    int tempo_casamento;
    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Digite o seu sexo com M para masculino e F para feminino: ");
    scanf(" %c",&sexo);
    printf("Digite o seu estado civil todo maiusculo: ");
    scanf("%s",estado_civil);
    if ((sexo=='F'&&strcmp(estado_civil,"CASADA")==0))
    {
        printf("Digite o tempo de casamento: ");
        scanf("%d",&tempo_casamento);
    }
    return 0;
}