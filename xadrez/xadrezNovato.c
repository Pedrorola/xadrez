#include <stdio.h>

/*
 * MATECHECK - JOGO DE XADREZ PROGRAMÁVEL
 * MÓDULO NOVATO: Movimentação básica das peças
 * 
 * Este programa simula o movimento de três peças de xadrez:
 * - Torre: movimento horizontal/vertical usando FOR
 * - Bispo: movimento diagonal usando WHILE  
 * - Rainha: movimento em qualquer direção usando DO-WHILE
 */

// =================== FUNÇÃO PRINCIPAL ===================
int main() {
    printf("=== MATECHECK - SIMULADOR DE MOVIMENTOS DE XADREZ ===\n");
    printf("Nível: NOVATO\n");
    printf("Desenvolvido para MateCheck Games\n\n");

    // =================== MOVIMENTO DA TORRE ===================
    /*
     * TORRE: Move-se em linha reta (horizontal ou vertical)
     * Simulação: 5 casas para a direita
     * Estrutura utilizada: FOR
     */
    printf("=== MOVIMENTO DA TORRE ===\n");
    printf("Peça: Torre\n");
    printf("Movimento: 5 casas para a direita\n");
    printf("Estrutura utilizada: FOR\n");
    printf("Sequência de movimentos:\n");
    
    int casas_torre = 5; // Número de casas que a torre irá mover
    
    // Loop FOR para simular o movimento da torre
    for(int casa = 1; casa <= casas_torre; casa++) {
        printf("Direita\n");
    }
    
    printf("Torre completou o movimento!\n\n");

    // =================== MOVIMENTO DO BISPO ===================
    /*
     * BISPO: Move-se na diagonal
     * Simulação: 5 casas na diagonal (cima e direita)
     * Estrutura utilizada: WHILE
     */
    printf("=== MOVIMENTO DO BISPO ===\n");
    printf("Peça: Bispo\n");
    printf("Movimento: 5 casas na diagonal (cima e direita)\n");
    printf("Estrutura utilizada: WHILE\n");
    printf("Sequência de movimentos:\n");
    
    int casas_bispo = 5; // Número de casas que o bispo irá mover
    int contador_bispo = 1; // Contador para o loop while
    
    // Loop WHILE para simular o movimento diagonal do bispo
    while(contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++; // Incrementa o contador
    }
    
    printf("Bispo completou o movimento!\n\n");

    // =================== MOVIMENTO DA RAINHA ===================
    /*
     * RAINHA: Move-se em qualquer direção (horizontal, vertical, diagonal)
     * Simulação: 8 casas para a esquerda
     * Estrutura utilizada: DO-WHILE
     */
    printf("=== MOVIMENTO DA RAINHA ===\n");
    printf("Peça: Rainha\n");
    printf("Movimento: 8 casas para a esquerda\n");
    printf("Estrutura utilizada: DO-WHILE\n");
    printf("Sequência de movimentos:\n");
    
    int casas_rainha = 8; // Número de casas que a rainha irá mover
    int contador_rainha = 1; // Contador para o loop do-while
    
    // Loop DO-WHILE para simular o movimento da rainha
    do {
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador
    } while(contador_rainha <= casas_rainha);
    
    printf("Rainha completou o movimento!\n\n");

    // =================== RESUMO FINAL ===================
    printf("=== RESUMO DOS MOVIMENTOS EXECUTADOS ===\n");
    printf("1. Torre: 5 movimentos para a direita (estrutura FOR)\n");
    printf("2. Bispo: 5 movimentos na diagonal cima-direita (estrutura WHILE)\n");
    printf("3. Rainha: 8 movimentos para a esquerda (estrutura DO-WHILE)\n");
    printf("\nTodos os movimentos foram executados com sucesso!\n");

    return 0;
}