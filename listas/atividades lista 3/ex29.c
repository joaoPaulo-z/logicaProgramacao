#include <stdio.h>

int main(){
    int senha_correta=1234;
    int senha_digitada;
    printf("Digite a senha: ");
    scanf("%d",&senha_digitada);
    while(senha_digitada!=senha_correta){
        printf("Senha incorreta.\nTente novamente.\n");
        printf("Digite a senha: ");
        scanf("%d",&senha_digitada);
    }
    printf("Acesso Autorizado.");
}