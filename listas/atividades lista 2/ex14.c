#include <stdio.h>

int main(){
    int codigo;
    printf("Digite o codigo do prato que deseja: \n1- Hamburguer com fritas | R$ 28,00\n2- File de frango grelhado | R$ 32,00\n3- Lasanha a bolonhesa | R$ 35,00\n4- File de peixe com arroz | R$ 42,00\n5- Salada especial | R$ 25,00\nEscolha: ");
    scanf("%d",&codigo);
        switch(codigo){
        case 1:
            printf("Hamburguer com fritas | R$ 28,00");
            break;
        case 2:
            printf("File de frango grelhado | R$ 32,00");
            break;
        case 3:
            printf("Lasanha a bolonhesa | R$ 35,00");
            break;
        case 4:
            printf("File de peixe com arroz | R$ 42,00");
            break;
        case 5:
            printf("Salada especial | R$ 25,00");
            break;
        default:
            printf("Opcao invalida.");
            break;
    }

}