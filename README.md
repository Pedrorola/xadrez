# 🏆 MateCheck - Jogo de Xadrez Programável

![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Version](https://img.shields.io/badge/Version-1.0.0-blue.svg)
![Status](https://img.shields.io/badge/Status-Complete-success.svg)

> **Um jogo revolucionário onde você programa os movimentos das peças de xadrez usando diferentes estruturas de repetição em C!**

## 📖 Sobre o Projeto

**MateCheck** é um simulador educacional inovador desenvolvido para ensinar programação através do xadrez. Em vez de mover peças manualmente, você escreve código para controlar cada movimento, explorando desde estruturas básicas até técnicas avançadas de programação.

### 🎯 Objetivos de Aprendizado

- ✅ **Estruturas de Repetição Simples**: `for`, `while`, `do-while`
- ✅ **Loops Aninhados**: Controle de fluxos complexos
- ✅ **Recursividade**: Funções que chamam a si mesmas
- ✅ **Algoritmos Avançados**: Múltiplas variáveis e condições

## 🚀 Funcionalidades

### 📋 Módulos Implementados

| Módulo | Nível | Técnicas | Peças |
|--------|-------|----------|-------|
| **Novato** | Básico | `for`, `while`, `do-while` | Torre, Bispo, Rainha |
| **Aventureiro** | Intermediário | Loops Aninhados | Cavalo |
| **Mestre** | Avançado | Recursividade + Loops Complexos | Todas as peças |

### 🎮 Peças e Movimentos

#### 🏰 **Torre**
- **Movimento**: Linear (horizontal/vertical)
- **Técnica**: Recursividade
- **Exemplo**: 5 casas para a direita

#### ⛪ **Bispo**
- **Movimento**: Diagonal
- **Técnica**: Recursividade + Loops Aninhados
- **Exemplo**: 5 casas diagonal cima-direita

#### 👑 **Rainha**
- **Movimento**: Qualquer direção
- **Técnica**: Recursividade
- **Exemplo**: 8 casas para a esquerda

#### 🐴 **Cavalo**
- **Movimento**: Formato "L"
- **Técnica**: Loops Complexos com múltiplas condições
- **Exemplo**: 2 casas para cima + 1 para a direita

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C (ANSI C)
- **Paradigmas**: Programação Procedural + Recursividade
- **Estruturas**: Loops, Funções, Condicionais
- **Compilador**: GCC (compatível com qualquer compilador C)

## 📥 Instalação e Uso

### Pré-requisitos

```bash
# Ubuntu/Debian
sudo apt-get install gcc

# CentOS/RHEL
sudo yum install gcc

# macOS
xcode-select --install

# Windows
# Instale MinGW ou use WSL
```

### Compilação e Execução

```bash
# Clone o repositório
git clone https://github.com/seu-usuario/matecheck.git
cd matecheck

# Compile o programa
gcc -o matecheck matecheck.c

# Execute o simulador
./matecheck
```

### Exemplo de Saída

```
=== MATECHECK - SIMULADOR AVANÇADO DE XADREZ ===
Nível: MESTRE
Técnicas: Recursividade + Loops Complexos + Loops Aninhados

=== MOVIMENTO DA TORRE (RECURSIVIDADE) ===
Peça: Torre
Movimento: 5 casas para a direita
Técnica: RECURSIVIDADE
Sequência de movimentos:
Direita
Direita
Direita
Direita
Direita
Torre completou o movimento recursivo!

=== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ===
--- Etapa 1 do Movimento em L ---
Cima
Cima
--- Etapa 2 do Movimento em L ---
Direita
Cavalo completou o movimento em L complexo!
```

## 📚 Estrutura do Código

### 🧩 Arquitetura

```
matecheck.c
├── Cabeçalhos e Definições
├── Protótipos das Funções
├── Funções Recursivas
│   ├── mover_torre_recursivo()
│   ├── mover_bispo_recursivo()
│   └── mover_rainha_recursivo()
├── Funções com Loops Aninhados
│   └── mover_bispo_loops_aninhados()
├── Função Principal (main)
│   ├── Movimentos com Recursividade
│   ├── Movimentos com Loops Complexos
│   └── Resumo Completo
└── Documentação Técnica
```

### 🔧 Técnicas Implementadas

#### 1. **Recursividade**
```c
void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) return;    // Caso base
    printf("Direita\n");                 // Ação
    mover_torre_recursivo(casas_restantes - 1); // Recursão
}
```

#### 2. **Loops Complexos**
```c
for (int etapa = 1; etapa <= etapas && !completo; etapa++) {
    while (atual < limite && total < max) {
        if (condicao_complexa && outra_condicao) {
            // Lógica avançada com continue/break
        }
    }
}
```

#### 3. **Loops Aninhados**
```c
for (int vertical = 1; vertical <= movimentos_v; vertical++) {
    for (int horizontal = 1; horizontal <= movimentos_h; horizontal++) {
        // Movimento coordenado
    }
}
```

## 🎓 Valor Educacional

### 📈 Progressão de Aprendizado

1. **Iniciante**: Estruturas básicas (`for`, `while`, `do-while`)
2. **Intermediário**: Loops aninhados e controle de fluxo
3. **Avançado**: Recursividade e algoritmos complexos
4. **Expert**: Otimização e boas práticas

### 🏢 Aplicações no Mercado

- **Desenvolvimento de Jogos**: Lógica de movimento e IA
- **Sistemas Embarcados**: Controle de loops eficientes
- **Algoritmos**: Estruturas recursivas e iterativas
- **Automação**: Sequências de comandos programáveis

## 🤝 Contribuindo

### Como Contribuir

1. **Fork** o projeto
2. Crie uma **branch** para sua feature (`git checkout -b feature/nova-funcionalidade`)
3. **Commit** suas mudanças (`git commit -m 'Adiciona nova funcionalidade'`)
4. **Push** para a branch (`git push origin feature/nova-funcionalidade`)
5. Abra um **Pull Request**

### 💡 Ideias para Contribuições

- [ ] Implementar movimento do Rei e Peão
- [ ] Adicionar validação de posições no tabuleiro
- [ ] Criar interface gráfica simples
- [ ] Implementar modo interativo
- [ ] Adicionar testes unitários
- [ ] Criar versão em outras linguagens

## 📊 Estatísticas do Projeto

- **Linhas de Código**: ~400
- **Funções**: 5
- **Técnicas Implementadas**: 6
- **Peças Simuladas**: 4
- **Níveis de Dificuldade**: 3

## 🏆 Conquistas

| Conquista | Descrição | Status |
|-----------|-----------|--------|
| 🥉 **Novato** | Dominar estruturas básicas | ✅ |
| 🥈 **Aventureiro** | Implementar loops aninhados | ✅ |
| 🥇 **Mestre** | Aplicar recursividade e loops complexos | ✅ |
| 🏆 **Arquiteto** | Código limpo e bem documentado | ✅ |

## 📄 Licença

Este projeto está licenciado sob a **MIT License** - veja o arquivo [LICENSE](LICENSE) para detalhes.

## 👨‍💻 Autor

**Desenvolvido para MateCheck Games**

- 📧 Email: contato@matecheck.com
- 🌐 Website: [www.matecheck.com](https://www.matecheck.com)
- 💼 LinkedIn: [MateCheck Games](https://linkedin.com/company/matecheck)

## 🙏 Agradecimentos

- **Comunidade C**: Pelas melhores práticas e padrões
- **Jogadores de Xadrez**: Pela inspiração nos movimentos
- **Educadores**: Pela metodologia de ensino progressivo
- **Desenvolvedores**: Pelas contribuições e feedback

---

<div align="center">

### 🎯 **Domine a Programação Jogando Xadrez!**

**[⭐ Deixe sua estrela](https://github.com/seu-usuario/matecheck)** • **[🍴 Fork o projeto](https://github.com/seu-usuario/matecheck/fork)** • **[🐛 Reporte bugs](https://github.com/seu-usuario/matecheck/issues)**

**Feito com ❤️ e muito ☕ para a comunidade de programadores**

</div>
