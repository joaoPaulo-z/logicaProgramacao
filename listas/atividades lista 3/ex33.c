#include <stdio.h>

int pergunta(){
    int escolha;
    printf("\n1. Votar no candidato 1\n2. Votar no candidato 2\n3. Votar no candidato 3\n4. Sair\nEm quem deseja votar: ");
    scanf("%d",&escolha);

    return escolha;
}

int main(){
    int candidato1=0,candidato2=0,candidato3=0;
    int escolha=pergunta();
    while (escolha!=4){
        if (escolha==1){
            candidato1++;
            printf("Voto computado.\n");
        }else if(escolha==2){
            candidato2++;
            printf("Voto computado.\n");
        }else{
            candidato3++;
            printf("Voto computado.\n");
        }
        escolha=pergunta();
    }
    printf("A quantidade de votos de cada candidato foi: \ncandidato 1: %d.\ncandidato 2: %d.\ncandidato 3: %d.\n",candidato1,candidato2,candidato3);
    if(candidato1>candidato2&&candidato1>candidato3){
        printf("O candidato com mais votos foi candidato 1 com %d votos",candidato1);
    }else if(candidato2>candidato1&&candidato2>candidato3){
        printf("O candidato com mais votos foi candidato 2 com %d votos",candidato2);
    }else if(candidato1==candidato2&&candidato1==candidato3&&candidato2==candidato3){
        printf("Votacao empatada.");
    }else{
        printf("O candidato com mais votos foi o candidato 3 com %d votos",candidato3);
    }
    
}