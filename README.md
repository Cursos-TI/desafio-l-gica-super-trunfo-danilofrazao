# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

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
---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck
