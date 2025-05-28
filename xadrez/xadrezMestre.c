
#include <stdio.h>

/*
 * MATECHECK - JOGO DE XADREZ PROGRAMÁVEL
 * MÓDULO MESTRE: Técnicas Avançadas de Programação
 * 
 * Este programa implementa movimentos avançados usando:
 * - RECURSIVIDADE: Para Torre, Bispo e Rainha
 * - LOOPS COMPLEXOS: Para Cavalo com múltiplas variáveis/condições
 * - LOOPS ANINHADOS ESPECÍFICOS: Para Bispo (vertical externo + horizontal interno)
 */

// =================== PROTÓTIPOS DAS FUNÇÕES RECURSIVAS ===================
void mover_torre_recursivo(int casas_restantes);
void mover_bispo_recursivo(int casas_restantes);
void mover_rainha_recursivo(int casas_restantes);
void mover_bispo_loops_aninhados(int movimento_vertical, int movimento_horizontal);

// =================== FUNÇÕES RECURSIVAS ===================

/*
 * FUNÇÃO RECURSIVA: Movimento da Torre
 * Simula movimento para a direita usando recursividade
 * Caso base: quando casas_restantes == 0
 * Caso recursivo: imprime direção e chama função com casas_restantes - 1
 */
void mover_torre_recursivo(int casas_restantes) {
    // Caso base: parada da recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Direita\n");
    
    // Chamada recursiva: reduz o número de casas restantes
    mover_torre_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO RECURSIVA: Movimento do Bispo
 * Simula movimento diagonal (cima-direita) usando recursividade
 * Implementa o movimento diagonal como combinação de duas direções
 */
void mover_bispo_recursivo(int casas_restantes) {
    // Caso base: parada da recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento diagonal atual
    printf("Cima Direita\n");
    
    // Chamada recursiva: continua o movimento diagonal
    mover_bispo_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO RECURSIVA: Movimento da Rainha
 * Simula movimento para a esquerda usando recursividade
 * Demonstra flexibilidade da recursão para diferentes direções
 */
void mover_rainha_recursivo(int casas_restantes) {
    // Caso base: parada da recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva: prossegue com o movimento
    mover_rainha_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO COM LOOPS ANINHADOS: Movimento específico do Bispo
 * Loop externo: controla movimento vertical
 * Loop interno: controla movimento horizontal
 * Simula movimento diagonal através de componentes separados
 */
void mover_bispo_loops_aninhados(int movimento_vertical, int movimento_horizontal) {
    printf("=== BISPO COM LOOPS ANINHADOS ===\n");
    printf("Loop externo: movimento vertical | Loop interno: movimento horizontal\n");
    printf("Simulando diagonal através de componentes separados:\n");
    
    // Loop externo: controla as repetições verticais
    for (int vertical = 1; vertical <= movimento_vertical; vertical++) {
        printf("--- Ciclo Vertical %d ---\n", vertical);
        
        // Primeiro: movimento para cima
        printf("Cima\n");
        
        // Loop interno: movimento horizontal correspondente
        for (int horizontal = 1; horizontal <= movimento_horizontal; horizontal++) {
            printf("Direita\n");
        }
    }
}

// =================== FUNÇÃO PRINCIPAL ===================
int main() {
    printf("=== MATECHECK - SIMULADOR AVANÇADO DE XADREZ ===\n");
    printf("Nível: MESTRE\n");
    printf("Técnicas: Recursividade + Loops Complexos + Loops Aninhados\n");
    printf("Desenvolvido para MateCheck Games\n\n");

    // =================== TORRE COM RECURSIVIDADE ===================
    printf("=== MOVIMENTO DA TORRE (RECURSIVIDADE) ===\n");
    printf("Peça: Torre\n");
    printf("Movimento: 5 casas para a direita\n");
    printf("Técnica: RECURSIVIDADE\n");
    printf("Sequência de movimentos:\n");
    
    int casas_torre = 5;
    mover_torre_recursivo(casas_torre);
    
    printf("Torre completou o movimento recursivo!\n\n");

    // =================== BISPO COM RECURSIVIDADE ===================
    printf("=== MOVIMENTO DO BISPO (RECURSIVIDADE) ===\n");
    printf("Peça: Bispo\n");
    printf("Movimento: 5 casas na diagonal (cima-direita)\n");
    printf("Técnica: RECURSIVIDADE\n");
    printf("Sequência de movimentos:\n");
    
    int casas_bispo = 5;
    mover_bispo_recursivo(casas_bispo);
    
    printf("Bispo completou o movimento recursivo!\n\n");

    // =================== RAINHA COM RECURSIVIDADE ===================
    printf("=== MOVIMENTO DA RAINHA (RECURSIVIDADE) ===\n");
    printf("Peça: Rainha\n");
    printf("Movimento: 8 casas para a esquerda\n");
    printf("Técnica: RECURSIVIDADE\n");
    printf("Sequência de movimentos:\n");
    
    int casas_rainha = 8;
    mover_rainha_recursivo(casas_rainha);
    
    printf("Rainha completou o movimento recursivo!\n\n");

    // =================== CAVALO COM LOOPS COMPLEXOS ===================
    printf("=== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ===\n");
    printf("Peça: Cavalo\n");
    printf("Movimento: L invertido (2 casas para cima + 1 casa para a direita)\n");
    printf("Técnica: LOOPS ANINHADOS COM MÚLTIPLAS VARIÁVEIS E CONDIÇÕES\n");
    printf("Sequência de movimentos:\n");
    
    /*
     * LOOPS COMPLEXOS PARA O CAVALO:
     * - Múltiplas variáveis de controle
     * - Condições complexas com && e ||
     * - Uso de continue e break para controle de fluxo
     * - Simulação precisa do movimento em L invertido
     */
    
    int etapas_cavalo = 2;           // Duas etapas do movimento em L
    int casas_verticais = 2;         // Duas casas para cima
    int casas_horizontais = 1;       // Uma casa para a direita
    int movimento_completo = 0;      // Flag para controlar conclusão
    int casas_executadas = 0;        // Contador de casas movidas
    
    // Loop externo: controla as etapas e condições múltiplas
    for (int etapa = 1; etapa <= etapas_cavalo && !movimento_completo; etapa++) {
        
        // Variáveis de controle específicas para cada etapa
        int casas_atual_etapa = 0;
        int limite_etapa = (etapa == 1) ? casas_verticais : casas_horizontais;
        
        printf("--- Etapa %d do Movimento em L ---\n", etapa);
        
        // Loop interno com múltiplas condições
        while (casas_atual_etapa < limite_etapa && casas_executadas < 3) {
            
            // Condição complexa: determina tipo de movimento baseado na etapa
            if (etapa == 1 && casas_atual_etapa < casas_verticais) {
                printf("Cima\n");
                casas_atual_etapa++;
                casas_executadas++;
                
                // Condição para pular iterações desnecessárias
                if (casas_atual_etapa >= casas_verticais) {
                    break; // Sai do loop interno quando vertical completo
                }
                
            } else if (etapa == 2 && casas_atual_etapa < casas_horizontais) {
                printf("Direita\n");
                casas_atual_etapa++;
                casas_executadas++;
                
                // Marca movimento como completo
                movimento_completo = 1;
                
            } else {
                // Continue para próxima iteração se condições não atendidas
                continue;
            }
        }
        
        // Verificação adicional de segurança
        if (casas_executadas >= 3) {
            movimento_completo = 1;
        }
    }
    
    printf("Cavalo completou o movimento em L complexo!\n\n");

    // =================== BISPO COM LOOPS ANINHADOS ESPECÍFICOS ===================
    mover_bispo_loops_aninhados(3, 1); // 3 movimentos verticais, 1 horizontal cada
    printf("Bispo completou o movimento com loops aninhados específicos!\n\n");

    // =================== RESUMO FINAL COMPLETO ===================
    printf("=== RESUMO COMPLETO - TODOS OS MÓDULOS ===\n");
    printf("\nMÓDULO NOVATO (Estruturas Básicas):\n");
    printf("✓ Torre: FOR simples\n");
    printf("✓ Bispo: WHILE simples\n");
    printf("✓ Rainha: DO-WHILE simples\n");
    
    printf("\nMÓDULO AVENTUREIRO (Loops Aninhados):\n");
    printf("✓ Cavalo: FOR + WHILE aninhados\n");
    
    printf("\nMÓDULO MESTRE (Técnicas Avançadas):\n");
    printf("✓ Torre: RECURSIVIDADE otimizada\n");
    printf("✓ Bispo: RECURSIVIDADE + LOOPS ANINHADOS específicos\n");
    printf("✓ Rainha: RECURSIVIDADE elegante\n");
    printf("✓ Cavalo: LOOPS COMPLEXOS com múltiplas variáveis e condições\n");
    
    printf("\n🏆 PARABÉNS! Você dominou todas as técnicas avançadas da MateCheck!\n");
    printf("🎖️  Módulo Mestre concluído com excelência!\n");
    printf("🚀 Você está pronto para desafios de programação de alto nível!\n");

    return 0;
}