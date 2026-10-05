#include <stdio.h>

int pergunta(){
    int escolha;
    printf("\n1. Consultar saldo\n2. Depositar\n3. Sacar\n4. Sair\nOque deseja fazer: ");
    scanf("%d",&escolha);

    return escolha;
}

int main(){
    float saldo=10000;
    int escolha=pergunta();
    scanf("%d",&escolha);
    while(escolha!=4){
        if(escolha==1){
            printf("O seu saldo atual e de: R$ %.2f\n",saldo);
        }else if(escolha==2){
            float deposito;
            printf("Quanto vc deseja depositar: \n");
            scanf("%f",&deposito);
            saldo=saldo+deposito;
        }else if(escolha==3){
            float sacar;
            printf("Quanto vc deseja sacar: \n");
            scanf("%f",&sacar);
            if(sacar>saldo){
                printf("Saldo insuficiente.\n");
            }else{
                saldo=saldo-sacar;
            }
        }
        escolha=pergunta();
    }
}