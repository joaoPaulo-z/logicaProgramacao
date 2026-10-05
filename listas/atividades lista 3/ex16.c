#include <stdio.h>

int main(){
    float n1,n2;
    printf("Digite as duas notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    float media=(n1+n2)/2;
    if(media>=7){
        printf("Aprovado");
    }else if (media>=5&&media<7){
        printf("Recuperacao");
    }else{
        printf("Reprovado");
    }
}