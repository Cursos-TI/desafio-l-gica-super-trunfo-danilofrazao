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
    // MENU DE ESCOLHA
    // =========================
    int atributo1, atributo2;

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    // Não permite repetir atributo
    if (atributo1 == atributo2) {
        printf("\nErro: escolha dois atributos diferentes!\n");
        return 1;
    }

    // =========================
    // OBTENDO OS VALORES
    // =========================
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;

    switch (atributo1) {
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;
        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;
        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;
        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;
        case 5:
            valor1Carta1 = 1.0 / densidade1;
            valor1Carta2 = 1.0 / densidade2;
            break;
        case 6:
            valor1Carta1 = pibPerCapita1;
            valor1Carta2 = pibPerCapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    switch (atributo2) {
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;
        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;
        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;
        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;
        case 5:
            valor2Carta1 = 1.0 / densidade1;
            valor2Carta2 = 1.0 / densidade2;
            break;
        case 6:
            valor2Carta1 = pibPerCapita1;
            valor2Carta2 = pibPerCapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    // =========================
    // SOMA DOS ATRIBUTOS
    // =========================
    float somaCarta1 = valor1Carta1 + valor2Carta1;
    float somaCarta2 = valor1Carta2 + valor2Carta2;

    // =========================
    // EXIBIÇÃO DOS DADOS
    // =========================
    printf("\n=== CARTA 1 ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.8f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.8f\n", pibPerCapita2);

    // =========================
    // RESULTADO FINAL
    // =========================
    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    printf("%s: %.2f pontos\n", cidade1, somaCarta1);
    printf("%s: %.2f pontos\n", cidade2, somaCarta2);

    (somaCarta1 == somaCarta2)
        ? printf("Resultado: Empate!\n")
        : printf("Vencedora: %s\n",
                 somaCarta1 > somaCarta2 ? cidade1 : cidade2);

    return 0;
}