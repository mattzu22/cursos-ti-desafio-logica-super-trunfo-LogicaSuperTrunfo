#include <stdio.h>
#include <string.h>

/*
    Desafio Super Trunfo - Países
    Nível: aventureiro
*/

int main()
{
    // Variáveis para a Carta 1 e 2
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    double populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacao1, densidadePopulacao2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int opcao;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c limpa o buffer do teclado

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer antes do fgets
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o \n do final

    printf("População: ");
    scanf("%lf", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%lf", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculo da Densidade de População ---
    densidadePopulacao1 = populacao1 / area1;
    densidadePopulacao2 = populacao2 / area2;

    // --- Cálculo do PIB per Capita ---
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // --- Cálculo do Super Poder ---
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacao1);

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1.0f / densidadePopulacao2) + pibPerCapita2;

    // --- Exibição dos Dados ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0lf\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade de População: %.2f hab/km²\n", densidadePopulacao1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0lf\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade de População: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\nEscolha uma opção para comparar:\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Pontos Turísticos\n");
    printf("5 - Comparar Densidade de População\n");
    printf("6 - Comparar PIB per Capita\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%c): %.0lf\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %.0lf\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (area2 > area1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%c): %.2f bilhões\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões\n", cidade2, estado2, pib2);
        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);    
        }
        else if (pib2 > pib1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade de População):\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidadePopulacao1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidadePopulacao2);
        if (densidadePopulacao1 > densidadePopulacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (densidadePopulacao2 > densidadePopulacao1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 6:
        printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
        printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (pibPerCapita2 > pibPerCapita1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 7:
        printf("\nComparação de cartas (Atributo: Super Poder):\n");
        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, superPoder1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, superPoder2);
        if (superPoder1 > superPoder2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (superPoder2 > superPoder1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;     

    default:
        printf("Opção inválida!\n");
        break;
    }
    
    return 0;
}
