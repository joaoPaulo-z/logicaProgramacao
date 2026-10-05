#include <stdio.h>

int main(){
    char nome[40];
    printf("Digite seu nome: ");
    fgets(nome,50,stdin);
    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.",nome);

}