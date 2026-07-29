#include <stdio.h>

int main() {

    // ==========================================================
    // DECLARAÇÃO DAS VARIÁVEIS - CARTA 1
    // ==========================================================

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;


    // ==========================================================
    // DECLARAÇÃO DAS VARIÁVEIS - CARTA 2
    // ==========================================================

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;


    // ==========================================================
    // VARIÁVEIS UTILIZADAS NOS MENUS
    // ==========================================================
    // opcao1 = primeiro atributo escolhido
    // opcao2 = segundo atributo escolhido
    // ==========================================================

    int opcao1;
    int opcao2;


    // ==========================================================
    // VARIÁVEIS PARA ARMAZENAR OS VALORES DOS ATRIBUTOS
    // ==========================================================
    // Os atributos escolhidos serão convertidos para float
    // para facilitar o cálculo da soma final.
    // ==========================================================

    float valor1Atributo1 = 0;
    float valor2Atributo1 = 0;

    float valor1Atributo2 = 0;
    float valor2Atributo2 = 0;

    float somaCarta1;
    float somaCarta2;


    // ==========================================================
    // CADASTRO DA CARTA 1
    // ==========================================================

    printf("====================================\n");
    printf("       CADASTRO DA CARTA 1\n");
    printf("====================================\n");

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


    // ==========================================================
    // CADASTRO DA CARTA 2
    // ==========================================================

    printf("\n====================================\n");
    printf("       CADASTRO DA CARTA 2\n");
    printf("====================================\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A02): ");
    scanf(" %3s", codigo2);

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


    // ==========================================================
    // CÁLCULO DA DENSIDADE POPULACIONAL
    // ==========================================================
    // Fórmula:
    //
    // Densidade = População / Área
    //
    // A conversão (float) garante que o cálculo seja realizado
    // utilizando números de ponto flutuante.
    // ==========================================================

    densidadePopulacional1 =
        (float) populacao1 / area1;

    densidadePopulacional2 =
        (float) populacao2 / area2;


    // ==========================================================
    // EXIBIÇÃO DAS CARTAS
    // ==========================================================

    printf("\n====================================\n");
    printf("              CARTA 1\n");
    printf("====================================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf(
        "Densidade Populacional: %.2f hab/km²\n",
        densidadePopulacional1
    );


    printf("\n====================================\n");
    printf("              CARTA 2\n");
    printf("====================================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf(
        "Densidade Populacional: %.2f hab/km²\n",
        densidadePopulacional2
    );


    // ==========================================================
    // PRIMEIRO MENU
    // ==========================================================
    // O jogador escolhe o primeiro atributo que será utilizado
    // na comparação.
    // ==========================================================

    printf("\n====================================\n");
    printf("     ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("====================================\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");

    printf("\nDigite a opcao: ");
    scanf("%d", &opcao1);


    // ==========================================================
    // SWITCH DO PRIMEIRO ATRIBUTO
    // ==========================================================
    // O switch identifica qual atributo foi escolhido e
    // armazena os valores correspondentes das duas cartas.
    //
    // Para densidade, armazenamos o inverso do valor porque
    // a MENOR densidade representa o melhor resultado.
    // ==========================================================

    switch (opcao1) {

        case 1:

            valor1Atributo1 = (float) populacao1;
            valor2Atributo1 = (float) populacao2;

            break;


        case 2:

            valor1Atributo1 = area1;
            valor2Atributo1 = area2;

            break;


        case 3:

            valor1Atributo1 = pib1;
            valor2Atributo1 = pib2;

            break;


        case 4:

            valor1Atributo1 = (float) pontosTuristicos1;
            valor2Atributo1 = (float) pontosTuristicos2;

            break;


        case 5:

            // Para densidade populacional, menor valor vence.
            // Utilizamos o inverso para que a soma final
            // mantenha essa regra.

            valor1Atributo1 =
                1.0f / densidadePopulacional1;

            valor2Atributo1 =
                1.0f / densidadePopulacional2;

            break;


        default:

            printf("\nOpcao invalida!\n");

            return 1;
    }


    // ==========================================================
    // SEGUNDO MENU DINÂMICO
    // ==========================================================
    // O segundo menu NÃO deve apresentar o atributo escolhido
    // anteriormente.
    //
    // Utilizamos if para verificar qual foi a primeira opção
    // e esconder essa opção do segundo menu.
    // ==========================================================

    printf("\n====================================\n");
    printf("     ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("====================================\n");


    if (opcao1 != 1) {
        printf("1 - Populacao\n");
    }

    if (opcao1 != 2) {
        printf("2 - Area\n");
    }

    if (opcao1 != 3) {
        printf("3 - PIB\n");
    }

    if (opcao1 != 4) {
        printf("4 - Pontos Turisticos\n");
    }

    if (opcao1 != 5) {
        printf("5 - Densidade Populacional\n");
    }


    printf("\nDigite a opcao: ");
    scanf("%d", &opcao2);


    // ==========================================================
    // VALIDAÇÃO DOS ATRIBUTOS
    // ==========================================================
    // Mesmo escondendo a opção no menu, verificamos se o jogador
    // tentou digitar novamente o mesmo número.
    //
    // Isso aumenta a confiabilidade do programa.
    // ==========================================================

    if (opcao1 == opcao2) {

        printf(
            "\nErro: voce nao pode escolher "
            "o mesmo atributo duas vezes!\n"
        );

        return 1;
    }


    // ==========================================================
    // SWITCH DO SEGUNDO ATRIBUTO
    // ==========================================================

    switch (opcao2) {

        case 1:

            valor1Atributo2 = (float) populacao1;
            valor2Atributo2 = (float) populacao2;

            break;


        case 2:

            valor1Atributo2 = area1;
            valor2Atributo2 = area2;

            break;


        case 3:

            valor1Atributo2 = pib1;
            valor2Atributo2 = pib2;

            break;


        case 4:

            valor1Atributo2 =
                (float) pontosTuristicos1;

            valor2Atributo2 =
                (float) pontosTuristicos2;

            break;


        case 5:

            // Novamente utilizamos o inverso porque,
            // para densidade, o menor valor é o vencedor.

            valor1Atributo2 =
                1.0f / densidadePopulacional1;

            valor2Atributo2 =
                1.0f / densidadePopulacional2;

            break;


        default:

            printf("\nOpcao invalida!\n");

            return 1;
    }


    // ==========================================================
    // SOMA DOS DOIS ATRIBUTOS
    // ==========================================================
    // Depois de selecionar os dois atributos, seus valores são
    // somados para determinar o resultado final da rodada.
    // ==========================================================

    somaCarta1 =
        valor1Atributo1 + valor1Atributo2;

    somaCarta2 =
        valor2Atributo1 + valor2Atributo2;


    // ==========================================================
    // RESULTADO DA COMPARAÇÃO
    // ==========================================================

    printf("\n====================================\n");
    printf("        RESULTADO DA BATALHA\n");
    printf("====================================\n");

    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);


    // ==========================================================
    // EXIBIÇÃO DO PRIMEIRO ATRIBUTO
    // ==========================================================

    printf("\nPrimeiro atributo:\n");

    switch (opcao1) {

        case 1:

            printf("Atributo: Populacao\n");
            printf(
                "%s: %d habitantes\n",
                cidade1,
                populacao1
            );

            printf(
                "%s: %d habitantes\n",
                cidade2,
                populacao2
            );

            break;


        case 2:

            printf("Atributo: Area\n");
            printf(
                "%s: %.2f km²\n",
                cidade1,
                area1
            );

            printf(
                "%s: %.2f km²\n",
                cidade2,
                area2
            );

            break;


        case 3:

            printf("Atributo: PIB\n");
            printf(
                "%s: %.2f bilhoes de reais\n",
                cidade1,
                pib1
            );

            printf(
                "%s: %.2f bilhoes de reais\n",
                cidade2,
                pib2
            );

            break;


        case 4:

            printf("Atributo: Pontos Turisticos\n");

            printf(
                "%s: %d pontos\n",
                cidade1,
                pontosTuristicos1
            );

            printf(
                "%s: %d pontos\n",
                cidade2,
                pontosTuristicos2
            );

            break;


        case 5:

            printf("Atributo: Densidade Populacional\n");

            printf(
                "%s: %.2f hab/km²\n",
                cidade1,
                densidadePopulacional1
            );

            printf(
                "%s: %.2f hab/km²\n",
                cidade2,
                densidadePopulacional2
            );

            break;
    }


    // ==========================================================
    // EXIBIÇÃO DO SEGUNDO ATRIBUTO
    // ==========================================================

    printf("\nSegundo atributo:\n");

    switch (opcao2) {

        case 1:

            printf("Atributo: Populacao\n");

            printf(
                "%s: %d habitantes\n",
                cidade1,
                populacao1
            );

            printf(
                "%s: %d habitantes\n",
                cidade2,
                populacao2
            );

            break;


        case 2:

            printf("Atributo: Area\n");

            printf(
                "%s: %.2f km²\n",
                cidade1,
                area1
            );

            printf(
                "%s: %.2f km²\n",
                cidade2,
                area2
            );

            break;


        case 3:

            printf("Atributo: PIB\n");

            printf(
                "%s: %.2f bilhoes de reais\n",
                cidade1,
                pib1
            );

            printf(
                "%s: %.2f bilhoes de reais\n",
                cidade2,
                pib2
            );

            break;


        case 4:

            printf("Atributo: Pontos Turisticos\n");

            printf(
                "%s: %d pontos\n",
                cidade1,
                pontosTuristicos1
            );

            printf(
                "%s: %d pontos\n",
                cidade2,
                pontosTuristicos2
            );

            break;


        case 5:

            printf("Atributo: Densidade Populacional\n");

            printf(
                "%s: %.2f hab/km²\n",
                cidade1,
                densidadePopulacional1
            );

            printf(
                "%s: %.2f hab/km²\n",
                cidade2,
                densidadePopulacional2
            );

            break;
    }


    // ==========================================================
    // EXIBIÇÃO DA SOMA
    // ==========================================================

    printf("\n------------------------------------\n");

    printf(
        "Soma da Carta 1 (%s): %.2f\n",
        cidade1,
        somaCarta1
    );

    printf(
        "Soma da Carta 2 (%s): %.2f\n",
        cidade2,
        somaCarta2
    );


    // ==========================================================
    // OPERADOR TERNÁRIO
    // ==========================================================
    // O operador ternário possui a seguinte estrutura:
    //
    // condição ? valor_se_verdadeiro : valor_se_falso
    //
    // Aqui ele é utilizado para indicar qual carta possui
    // a maior soma antes da decisão final.
    // ==========================================================

    printf(
        "\nMaior soma: %s\n",
        somaCarta1 > somaCarta2
            ? cidade1
            : somaCarta2 > somaCarta1
                ? cidade2
                : "Empate"
    );


    // ==========================================================
    // DECISÃO FINAL
    // ==========================================================
    // A carta com a maior soma dos dois atributos vence.
    // Caso as somas sejam iguais, a rodada termina empatada.
    // ==========================================================

    if (somaCarta1 > somaCarta2) {

        printf(
            "\nResultado: Carta 1 (%s) venceu a rodada!\n",
            cidade1
        );

    } else if (somaCarta2 > somaCarta1) {

        printf(
            "\nResultado: Carta 2 (%s) venceu a rodada!\n",
            cidade2
        );

    } else {

        printf("\nResultado: Empate!\n");
    }


    return 0;
}