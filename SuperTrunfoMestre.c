#include <stdio.h>

int main() {

    // ================================
    // VARIAVEIS DA CARTA 1
    // ================================
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // ================================
    // VARIAVEIS DA CARTA 2
    // ================================
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // ================================
    // LEITURA DOS DADOS - CARTA 1
    // ================================
    printf("=== Carta 1 ===\n");

    printf("Estado (uma letra, ex: S para SP): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB em bilhoes: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ================================
    // LEITURA DOS DADOS - CARTA 2
    // ================================
    printf("\n=== Carta 2 ===\n");

    printf("Estado (uma letra, ex: R para RJ): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB em bilhoes: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // ================================
    // CALCULOS - CARTA 1
    // ================================

    // Densidade = quantas pessoas por km2
    densidade1 = (float)populacao1 / area1;

    // PIB per capita = riqueza dividida por pessoa
    pib_per_capita1 = pib1 / (float)populacao1;

    // Super Poder = soma de tudo
    // (1/densidade: menor densidade = mais poder)
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // ================================
    // CALCULOS - CARTA 2
    // ================================
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // ================================
    // EXIBICAO DOS DADOS
    // ================================
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // ================================
    // COMPARACOES
    // ================================
    printf("\nComparacao de Cartas:\n");

    // populacao1 > populacao2 retorna 1 (verdadeiro) ou 0 (falso)
    printf("Populacao: Carta %d venceu (%d)\n",
           populacao1 > populacao2 ? 1 : 2,
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
           area1 > area2 ? 1 : 2,
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
           pib1 > pib2 ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           pontos_turisticos1 > pontos_turisticos2 ? 1 : 2,
           pontos_turisticos1 > pontos_turisticos2);

    // Densidade: MENOR vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           densidade1 < densidade2 ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           pib_per_capita1 > pib_per_capita2 ? 1 : 2,
           pib_per_capita1 > pib_per_capita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
           super_poder1 > super_poder2 ? 1 : 2,
           super_poder1 > super_poder2);

    return 0;
}