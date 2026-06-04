#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int CasasBispo = 5, CasasTorre = 5, CasasRainha = 8;
    unsigned int b, t = 0, r = 0;

    printf("\nMovimento do Bispo: \n");
    // Implementação de Movimentação do Bispo
    for (b = 0; b < CasasBispo; b++)
    {
        printf("Cima direita \n");
    }
    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


    printf("\nMovimento da Torre: \n");
    // Implementação de Movimentação da Torre
    while (t < CasasTorre)
    {
        printf("Direita \n");
        t++;
    }

    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha: \n");
    do
    {
        printf("Esquerda \n");
        r++;
    } while (r < CasasRainha);
    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
