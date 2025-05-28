
#include <stdio.h>

/*
 * MATECHECK - JOGO DE XADREZ PROGRAMÁVEL
 * MÓDULO NOVATO + MÓDULO AVENTUREIRO
 * 
 * Este programa simula o movimento de quatro peças de xadrez:
 * - Torre: movimento horizontal/vertical usando FOR
 * - Bispo: movimento diagonal usando WHILE  
 * - Rainha: movimento em qualquer direção usando DO-WHILE
 * - Cavalo: movimento em "L" usando LOOPS ANINHADOS (FOR + WHILE)
 */

// =================== FUNÇÃO PRINCIPAL ===================
int main() {
    printf("=== MATECHECK - SIMULADOR DE MOVIMENTOS DE XADREZ ===\n");
    printf("Nível: NOVATO + AVENTUREIRO\n");
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

    // =================== MOVIMENTO DO CAVALO (MÓDULO AVENTUREIRO) ===================
    /*
     * CAVALO: Move-se em formato "L" (duas casas em uma direção + uma casa perpendicular)
     * Simulação: 2 casas para baixo + 1 casa para a esquerda
     * Estrutura utilizada: LOOPS ANINHADOS (FOR externo + WHILE interno)
     */
    printf("=== MOVIMENTO DO CAVALO ===\n");
    printf("Peça: Cavalo\n");
    printf("Movimento: 2 casas para baixo + 1 casa para a esquerda (formato L)\n");
    printf("Estrutura utilizada: LOOPS ANINHADOS (FOR + WHILE)\n");
    printf("Sequência de movimentos:\n");
    
    // Definindo as duas etapas do movimento em L do cavalo
    int etapas_movimento = 2; // Duas etapas: primeiro vertical, depois horizontal
    int casas_verticais = 2;  // Duas casas para baixo
    int casas_horizontais = 1; // Uma casa para a esquerda
    
    /*
     * LOOP ANINHADO PARA MOVIMENTO EM "L":
     * - Loop FOR externo: controla as etapas do movimento (vertical e horizontal)
     * - Loop WHILE interno: executa os movimentos dentro de cada etapa
     */
    for(int etapa = 1; etapa <= etapas_movimento; etapa++) {
        
        if(etapa == 1) {
            // PRIMEIRA ETAPA: Movimento vertical (2 casas para baixo)
            printf("--- Etapa %d: Movimento Vertical ---\n", etapa);
            int contador_vertical = 1;
            
            // Loop WHILE interno para a primeira etapa (movimento vertical)
            while(contador_vertical <= casas_verticais) {
                printf("Baixo\n");
                contador_vertical++;
            }
            
        } else if(etapa == 2) {
            // SEGUNDA ETAPA: Movimento horizontal (1 casa para a esquerda)
            printf("--- Etapa %d: Movimento Horizontal ---\n", etapa);
            int contador_horizontal = 1;
            
            // Loop WHILE interno para a segunda etapa (movimento horizontal)
            while(contador_horizontal <= casas_horizontais) {
                printf("Esquerda\n");
                contador_horizontal++;
            }
        }
    }
    
    printf("Cavalo completou o movimento em L!\n\n");

    // =================== RESUMO FINAL ===================
    printf("=== RESUMO DOS MOVIMENTOS EXECUTADOS ===\n");
    printf("MÓDULO NOVATO:\n");
    printf("1. Torre: 5 movimentos para a direita (estrutura FOR)\n");
    printf("2. Bispo: 5 movimentos na diagonal cima-direita (estrutura WHILE)\n");
    printf("3. Rainha: 8 movimentos para a esquerda (estrutura DO-WHILE)\n");
    printf("\nMÓDULO AVENTUREIRO:\n");
    printf("4. Cavalo: Movimento em L (2 baixo + 1 esquerda) usando LOOPS ANINHADOS\n");
    printf("   - Loop FOR externo: controla as etapas do movimento\n");
    printf("   - Loop WHILE interno: executa movimentos em cada etapa\n");
    printf("\nTodos os movimentos foram executados com sucesso!\n");
    printf("=== FIM DO SIMULADOR ===\n");
    
    return 0;
}