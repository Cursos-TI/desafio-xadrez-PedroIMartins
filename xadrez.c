#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MoverBispo (int casas) {
    if (casas > 0)
    {
        for (int v = 0; v < 1; v++) // Vertical
        {
            for (int h = 0; h < 1; h++) // Horizontal
            {
                printf("Cima direita \n");
            }
        }
        MoverBispo(casas - 1);
    }
}

void MoverTorre (int casas) {
    if (casas > 0)
    {
        printf("Direita \n");
        MoverTorre(casas - 1);
    }
}

void MoverRainha (int casas) {
    if (casas > 0)
    {
        printf("Esquerda \n");
        MoverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int MovimentoBispo = 5, MovimentoTorre = 5, MovimentoRainha = 8;

    printf("\nMovimento do Bispo: \n");
    // Implementação de Movimentação do Bispo
    MoverBispo(MovimentoBispo);
    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


    printf("\nMovimento da Torre: \n");
    // Implementação de Movimentação da Torre
    MoverTorre(MovimentoTorre);

    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Rainha: \n");
    // Implementação de Movimentação da Rainha
    MoverRainha(MovimentoRainha);
    
    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento do Cavalo: \n");
    // Nível Aventureiro - Movimentação do Cavalo
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                break;
            }  
            printf("Cima \n");
        }
        printf("Direita \n");
    }

    return 0;
}
