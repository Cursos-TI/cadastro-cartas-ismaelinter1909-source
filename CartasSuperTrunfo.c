#include <stdio.h>

int main() {

    // =============================
    // Carta 1
    // =============================

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;


    // =============================
    // Carta 2
    // =============================

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;


    // =============================
    // Resultados das comparações
    // =============================

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;


    // =============================
    // Cadastro da Carta 1
    // =============================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // =============================
    // Cadastro da Carta 2
    // =============================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A02): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // =============================
    // Cálculos da Carta 1
    // =============================

    densidadePopulacional1 =
        (float) populacao1 / area1;

    pibPerCapita1 =
        (pib1 * 1000000000.0f) / (float) populacao1;

    superPoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        (float) pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidadePopulacional1);


    // =============================
    // Cálculos da Carta 2
    // =============================

    densidadePopulacional2 =
        (float) populacao2 / area2;

    pibPerCapita2 =
        (pib2 * 1000000000.0f) / (float) populacao2;

    superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        (float) pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidadePopulacional2);


    // =============================
    // Comparação das cartas
    // =============================

    // Nos atributos abaixo, o MAIOR valor vence.
    resultadoPopulacao =
        populacao1 > populacao2;

    resultadoArea =
        area1 > area2;

    resultadoPib =
        pib1 > pib2;

    resultadoPontosTuristicos =
        pontosTuristicos1 > pontosTuristicos2;

    resultadoPibPerCapita =
        pibPerCapita1 > pibPerCapita2;

    resultadoSuperPoder =
        superPoder1 > superPoder2;


    // Na densidade populacional, o MENOR valor vence.
    resultadoDensidade =
        densidadePopulacional1 < densidadePopulacional2;


    // =============================
    // Exibição da Carta 1
    // =============================

    printf("\n==============================\n");
    printf("        CARTA 1\n");
    printf("==============================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf(
        "Densidade Populacional: %.2f hab/km²\n",
        densidadePopulacional1
    );

    printf(
        "PIB per Capita: %.2f reais\n",
        pibPerCapita1
    );

    printf(
        "Super Poder: %.2f\n",
        superPoder1
    );


    // =============================
    // Exibição da Carta 2
    // =============================

    printf("\n==============================\n");
    printf("        CARTA 2\n");
    printf("==============================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf(
        "Densidade Populacional: %.2f hab/km²\n",
        densidadePopulacional2
    );

    printf(
        "PIB per Capita: %.2f reais\n",
        pibPerCapita2
    );

    printf(
        "Super Poder: %.2f\n",
        superPoder2
    );


    // =============================
    // Resultado das comparações
    // =============================

    printf("\n==============================\n");
    printf("     COMPARACAO DE CARTAS\n");
    printf("==============================\n");

    printf(
        "Populacao: Carta %d venceu (%d)\n",
        resultadoPopulacao ? 1 : 2,
        resultadoPopulacao
    );

    printf(
        "Area: Carta %d venceu (%d)\n",
        resultadoArea ? 1 : 2,
        resultadoArea
    );

    printf(
        "PIB: Carta %d venceu (%d)\n",
        resultadoPib ? 1 : 2,
        resultadoPib
    );

    printf(
        "Pontos Turisticos: Carta %d venceu (%d)\n",
        resultadoPontosTuristicos ? 1 : 2,
        resultadoPontosTuristicos
    );

    printf(
        "Densidade Populacional: Carta %d venceu (%d)\n",
        resultadoDensidade ? 1 : 2,
        resultadoDensidade
    );

    printf(
        "PIB per Capita: Carta %d venceu (%d)\n",
        resultadoPibPerCapita ? 1 : 2,
        resultadoPibPerCapita
    );

    printf(
        "Super Poder: Carta %d venceu (%d)\n",
        resultadoSuperPoder ? 1 : 2,
        resultadoSuperPoder
    );


    return 0;
}