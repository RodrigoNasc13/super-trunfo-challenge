#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // DECLARAÇÃO DE VARIAVEIS

    char pais1[255], pais2[255];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    int opcao;

    // ENTRADA DE DADOS

    printf("Digite os dados da Carta 1:\n");


    printf("Digite o nome do pais: \n");
    scanf("%s", pais1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    
    printf("\nDigite os dados da Carta 2:\n");


    printf("Digite o nome do pais: \n");
    scanf("%s", pais2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // CÁLCULOS

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // EXIBIÇÃO DO MENU DE COMPARAÇÃO

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - Exibir nomes dos países\n");
    printf("Digite sua opção: \n");
    scanf("%d", &opcao);

    // COMPARAÇÃO E RESULTADOS

     switch(opcao) {
        case 1:
            printf("\nPopulação: %s x %s\n", pais1, pais2);
            printf("Carta 1 (%s): %lu habitantes\n", pais1, populacao1);
            printf("Carta 2: (%s) %lu habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

        break;

        case 2:
            printf("\nÁrea: %s x %s\n", pais1, pais2);
            printf("Carta 1 (%s): %.2f km²\n", pais1, area1);
            printf("Carta 2 (%s): %.2f km²\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
        break;

        case 3:
            printf("\nPIB: %s x %s\n", pais1, pais2);
            printf("Carta 1 (%s): %.2f bilhões de reais\n", pais1, pib1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
        break;

        case 4:
            printf("\nPontos turísticos: %s x %s\n", pais1, pais2);
            printf("Carta 1 (%s): %d pontos\n", pais1, pontos_turisticos1);
            printf("Carta 2 (%s): %d pontos\n", pais2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
        break;

        case 5:
            printf("\nDensidade demográfica: %s x %s\n", pais1, pais2);
            printf("Carta 1 (%s): %.2f hab/km²\n", pais1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km²\n", pais2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
        break;

        case 6:
            printf("\nCarta 1: %s\n", pais1);
            printf("Carta 2: %s\n", pais2);
        
        break;

        default: printf("\nOpção inválida!\n");
    }

    return 0;
}