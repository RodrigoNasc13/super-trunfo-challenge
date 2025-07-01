#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // DECLARAÇÃO DE VARIAVEIS

    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char nome_cidade1[255], nome_cidade2[255];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // ENTRADA DE DADOS


    printf("Digite os dados da Carta 1:\n");

    printf("Digite o estado: \n");
    scanf(" %2s", estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %4s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    
    printf("\nDigite os dados da Carta 2:\n");

    printf("Digite o estado: \n");
    scanf(" %2s", estado2);

    printf("Digite o código da carta (ex: B02): \n");
    scanf(" %4s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

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
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;

    // CÁLCULO DO SUPER PODER

    super_poder1 =  populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade1;
    super_poder2 =  populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - densidade2;

    // COMPARAÇÃO DE CARTAS POR ATRIBUTO

    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome_cidade2, estado2, populacao2);
    printf("Resultado: Carta %d (%s) venceu!\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? nome_cidade1 : nome_cidade2);

    return 0;
}