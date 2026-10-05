#include <stdio.h>

int main(){
    int q_alunos=10;
    int i;
    float nota1;
    int a=0;
    int r=0;

    for(i=0;i<q_alunos;i++){
        printf("Nota: ");
        scanf("%f",&nota1);
        if(nota1>=7){
            a++;
        }else{
            r++;
        }
    }
    printf("A quantidade de alunos aprovados e: %d\nA quantidade de alunos reprovados e: %d\nA taxa de aprovacao e: %d%%",a,r,a*10);
}