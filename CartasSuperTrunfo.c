#include <stdio.h>

int main() {

    // =============================
    // Carta 1
    // =============================

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Novas propriedades calculadas
    float densidadePopulacional1;
    float pibPerCapita1;


    // =============================
    // Carta 2
    // =============================

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Novas propriedades calculadas
    float densidadePopulacional2;
    float pibPerCapita2;


    // ============================
    // Cadastro da Carta 1
    // ============================

   printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ============================
    // Cadastro da Carta 2
    // ============================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A02): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ============================
    // Cálculos da Carta 1
    // ============================

    densidadePopulacional1 = populacao1 / area1;

    pibPerCapita1 =
        (pib1 * 1000000000.0) / populacao1;


    // ============================
    // Cálculos da Carta 2
    // ============================

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita2 =
        (pib2 * 1000000000.0) / populacao2;


    // ============================
    // Exibição da Carta 1
    // ============================

    printf("\n==============================\n");
    printf("        CARTA 1\n");
    printf("==============================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n",
           densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n",
           pibPerCapita1);


    // ============================
    // Exibição da Carta 2
    // ============================

    printf("\n==============================\n");
    printf("        CARTA 2\n");
    printf("==============================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n",
           densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n",
           pibPerCapita2);

    return 0;
}