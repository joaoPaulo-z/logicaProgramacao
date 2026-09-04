#include <stdio.h>
#include <string.h>

int main(){
    int numero_identificacao;
    float n1,n2,n3,media;
    char conceito;
    char situacao_final[20];
    
    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d",&numero_identificacao);
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    printf("Digite a media: ");
    scanf("%f",&media);
    float ma=(n1+n2*2+n3*3+media)/7;
    if(ma>=90){
        conceito=('A');
    }else if (ma>=75)
    {
        conceito=('B');
    }else if (ma>=60)
    {
        conceito=('C');
    }else if (ma>=40)
    {
        conceito=('D');
    }else{
        conceito=('E');
    }
    if(conceito==('A')||conceito==('B')||conceito==('C')){
        strcpy(situacao_final,"Aprovado");
    }else{
        strcpy(situacao_final, "Reprovado");
    }
    printf("\nAluno %d\nNotas %.1f, %.1f, %.1f\nMedia dos exercicios %.1f\nConceito %c\nMedia de aproveitamento %.1f\nO aluno foi %s",numero_identificacao,n1,n2,n3,media,conceito,ma,situacao_final);
    
}