#include <stdio.h>
#include <string.h>

int main(){
    float altura;
    char sexo[12];
    printf("Digite sua altura em metros: ");
    scanf("%f",&altura);
    printf("Digite o seu sexo tudo em minusculo: ");
    scanf("%s",sexo);
    if(strcmp(sexo,"masculino")==0){
        float peso_ideal=(72.7*altura)-58;
        printf("O seu peso ideal e: %.2f",peso_ideal);
    }else if (strcmp(sexo,"feminino")==0){
        float peso_ideal=(62.1*altura)-44.7;
        printf("O seu peso ideal e: %.2f",peso_ideal);
    }else{
        printf("Erro na digitacao");
    }
    
}