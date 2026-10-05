#include <stdio.h>

int main(){
    int q_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&q_alunos);
    int i;
    float nota1;
    float soma=0;

    for(i=0;i<q_alunos;i++){
        printf("Nota: ");
        scanf("%f",&nota1);
        soma=soma+nota1;
    }
    nota1=soma/q_alunos;
    printf("A media dos alunos e: %.2f",nota1);
}