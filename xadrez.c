#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#define movimento_rainha 8 

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int rainha = 0;
    int bispo = 0;
    int torre;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo andar 5 casas na diagonal a direita! \n");
    printf("Bispo ... \n");
    while (bispo <= 5){
        printf("Cima e direita\n"); //movimento do bispo em diagonal
        bispo++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre andar 5 casas para direita\n");
    printf("Torre...");
    for(torre = 0; torre < 5; torre++ ){
        printf("Direita\n");//movimento da torre para direita 5 casas 
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //pedir para usuário escolher a movimentação da rainha
    do{
        printf("Digite 8 para rainha andar 8 casas para esquerda: \n");
        scanf("%d", &rainha);

        if(rainha > movimento_rainha){
            printf("Erro. A rainha só pode se movimentar %d casas, tente novamente!\n", movimento_rainha);
        }
        
    }while (rainha > movimento_rainha || rainha < 1);

    printf("A rainha andou %d casas para esquerda!\n", rainha);// movimento da rainha para esquerda, om ajuda do usuário


   
    

    

    return 0;
}
