#include <stdio.h>

int main() {

    // =========================
    // CARTA 1 - PORTO
    // =========================
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Porto";
    unsigned long int populacao1 = 231800;
    float area1 = 41.42;
    float pib1 = 18.0;
    int pontosTuristicos1 = 25;

    // =========================
    // CARTA 2 - MADRID
    // =========================
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Madrid";
    unsigned long int populacao2 = 3332000;
    float area2 = 604.30;
    float pib2 = 230.0;
    int pontosTuristicos2 = 40;

    // =========================
    // CÁLCULOS
    // =========================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================

    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.8f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.8f\n", pibPerCapita2);

    // =========================
    // COMPARAÇÃO
    // =========================
    // Atributo escolhido: População

    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo escolhido: Populacao\n");

    if (populacao1 > populacao2) {
        printf("Vencedora: Carta 1 - %s\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: Carta 2 - %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}