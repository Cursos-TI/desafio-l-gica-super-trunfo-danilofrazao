#include <stdio.h>

int main() {

    // CARTA 1 - PORTO
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Porto";
    unsigned long int populacao1 = 231800;
    float area1 = 41.42;
    float pib1 = 18.0;
    int pontosTuristicos1 = 25;

    // CARTA 2 - MADRID
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Madrid";
    unsigned long int populacao2 = 3332000;
    float area2 = 604.30;
    float pib2 = 230.0;
    int pontosTuristicos2 = 40;

    // CÁLCULOS
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    int opcao;

    printf("=== SUPER TRUNFO - PAISES ===\n\n");

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    switch(opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if(populacao1 > populacao2)
                printf("Vencedora: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if(area1 > area2)
                printf("Vencedora: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if(pib1 > pib2)
                printf("Vencedora: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s\n", cidade1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            /* Menor valor vence */
            if(densidade1 < densidade2)
                printf("Vencedora: %s\n", cidade1);
            else if(densidade2 < densidade1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.8f\n", cidade1, pibPerCapita1);
            printf("%s: %.8f\n", cidade2, pibPerCapita2);

            if(pibPerCapita1 > pibPerCapita2)
                printf("Vencedora: %s\n", cidade1);
            else if(pibPerCapita2 > pibPerCapita1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}