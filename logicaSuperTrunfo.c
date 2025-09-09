#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    double pibA, pibB;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("--- Cadastro da Primeira Cidade ---\n");
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", nomeA);
    printf("Digite a populacao da cidade 1 (em milhoes): ");
    scanf("%d", &populacaoA);
    printf("Digite a area da cidade 1 (em km^2): ");
    scanf("%f", &areaA);
    printf("Digite o PIB da cidade 1 (em bilhoes de USD): ");
    scanf("%lf", &pibA);

    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", nomeB);
    printf("Digite a populacao da cidade 2 (em milhoes): ");
    scanf("%d", &populacaoB);
    printf("Digite a area da cidade 2 (em km^2): ");
    scanf("%f", &areaB);
    printf("Digite o PIB da cidade 2 (em bilhoes de USD): ");
    scanf("%lf", &pibB);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    // Comparação de Cartas
    printf("\n--- Resultados da Comparacao ---\n");

    // Comparação de População
    printf("\nComparando populacao...\n");
    if (populacaoA > populacaoB) {
        printf("A cidade com maior populacao e: %s\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("A cidade com maior populacao e: %s\n", nomeB);
    } else {
        printf("As cidades tem a mesma populacao.\n");
    }

    // Comparação de Área
    printf("\nComparando area...\n");
    if (areaA > areaB) {
        printf("A cidade com maior area e: %s\n", nomeA);
    } else if (areaB > areaA) {
        printf("A cidade com maior area e: %s\n", nomeB);
    } else {
        printf("As cidades tem a mesma area.\n");
    }

    // Comparação de PIB
    printf("\nComparando PIB...\n");
    if (pibA > pibB) {
        printf("A cidade com maior PIB e: %s\n", nomeA);
    } else if (pibB > pibA) {
        printf("A cidade com maior PIB e: %s\n", nomeB);
    } else {
        printf("As cidades tem o mesmo PIB.\n");
    }

    return 0;
}
