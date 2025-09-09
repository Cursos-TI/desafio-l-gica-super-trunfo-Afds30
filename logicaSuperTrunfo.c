#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar uma carta de cidade
typedef struct {
    char nome[50];
    long populacao;
    float area;
    double pib;
} Carta;

// Função para exibir o menu de atributos e retornar a escolha do usuário
int exibirMenu() {
    int escolha;
    printf("\n--- Escolha um Atributo para Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

// Função para realizar a comparação e determinar o vencedor
void compararCartas(Carta cartaA, Carta cartaB) {
    int escolha1, escolha2;

    printf("\n--- Escolha de Atributos ---\n");
    escolha1 = exibirMenu();
    escolha2 = exibirMenu();
    while (escolha1 == escolha2) {
        printf("Nao e possivel escolher o mesmo atributo duas vezes. Por favor, escolha outro.\n");
        escolha2 = exibirMenu();
    }

    int vitoriasA = 0;
    int vitoriasB = 0;

    // Lógica de comparação para o primeiro atributo
    switch (escolha1) {
        case 1: // Populacao
            if (cartaA.populacao > cartaB.populacao) {
                vitoriasA++;
            } else if (cartaB.populacao > cartaA.populacao) {
                vitoriasB++;
            }
            break;
        case 2: // Area
            if (cartaA.area > cartaB.area) {
                vitoriasA++;
            } else if (cartaB.area > cartaA.area) {
                vitoriasB++;
            }
            break;
        case 3: // PIB
            if (cartaA.pib > cartaB.pib) {
                vitoriasA++;
            } else if (cartaB.pib > cartaA.pib) {
                vitoriasB++;
            }
            break;
    }

    // Lógica de comparação para o segundo atributo
    switch (escolha2) {
        case 1: // Populacao
            if (cartaA.populacao > cartaB.populacao) {
                vitoriasA++;
            } else if (cartaB.populacao > cartaA.populacao) {
                vitoriasB++;
            }
            break;
        case 2: // Area
            if (cartaA.area > cartaB.area) {
                vitoriasA++;
            } else if (cartaB.area > cartaA.area) {
                vitoriasB++;
            }
            break;
        case 3: // PIB
            if (cartaA.pib > cartaB.pib) {
                vitoriasA++;
            } else if (cartaB.pib > cartaA.pib) {
                vitoriasB++;
            }
            break;
    }

    // Uso de operador ternário para determinar o resultado final
    const char *resultado = (vitoriasA > vitoriasB) ? cartaA.nome : 
                           (vitoriasB > vitoriasA) ? cartaB.nome : "Empate";

    printf("\n--- Resultado da Partida ---\n");
    printf("Vitorias de %s: %d\n", cartaA.nome, vitoriasA);
    printf("Vitorias de %s: %d\n", cartaB.nome, vitoriasB);
    printf("O vencedor e: %s\n", resultado);
    
    if (strcmp(resultado, "Empate") != 0) {
        printf("Parabens, %s, voce venceu!\n", resultado);
    }
}

int main() {
    Carta cartaA, cartaB;

    // Cadastro das Cartas
    printf("--- Cadastro da Primeira Cidade ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", cartaA.nome);
    printf("Populacao (em milhoes): ");
    scanf("%ld", &cartaA.populacao);
    printf("Area (em km^2): ");
    scanf("%f", &cartaA.area);
    printf("PIB (em bilhoes de USD): ");
    scanf("%lf", &cartaA.pib);

    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", cartaB.nome);
    printf("Populacao (em milhoes): ");
    scanf("%ld", &cartaB.populacao);
    printf("Area (em km^2): ");
    scanf("%f", &cartaB.area);
    printf("PIB (em bilhoes de USD): ");
    scanf("%lf", &cartaB.pib);

    // Inicia a comparação
    compararCartas(cartaA, cartaB);

    return 0;
}