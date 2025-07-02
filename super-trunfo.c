#include <stdio.h>
#include <windows.h>

#define BILHAO 1000000000.0
#define KM 1000.0             
#define KM_QUADRADO 1000000.0  

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // DECLARAÇÃO DE VARIAVEIS

    char pais1[255], pais2[255];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    int opcao1, opcao2;
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    float soma1, soma2;
    int vencedor_attr1, vencedor_attr2;

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

    densidade1 = populacao1 / (area1 * KM_QUADRADO); ;
    densidade2 = populacao2 / (area2 * KM_QUADRADO);

    // ESCOLHA DO PRIMEIRO ATRIBUTO
    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    // ESCOLHA DO SEGUNDO ATRIBUTO (MENU DINÂMICO)
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Número de pontos turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // VALIDAÇÃO PARA EVITAR ATRIBUTOS IGUAIS
    while (opcao2 == opcao1) {
    printf("Você não pode escolher o mesmo atributo! Escolha outro: ");
    scanf("%d", &opcao2);
    }

    // COMPARAÇÃO DO PRIMEIRO ATRIBUTO
    printf("\n=== COMPARAÇÃO DOS ATRIBUTOS ===\n");
    
    switch(opcao1) {
        case 1:
            printf("1º Atributo - População:\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            valor1_attr1 = (float)populacao1;
            valor2_attr1 = (float)populacao2;
            vencedor_attr1 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2:
            printf("1º Atributo - Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            valor1_attr1 = area1 * KM_QUADRADO;
            valor2_attr1 = area2 * KM_QUADRADO;
            vencedor_attr1 = (area1 > area2) ? 1 : (area2 > area1) ? 2 : 0;
            break;
        case 3:
            printf("1º Atributo - PIB:\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);
            valor1_attr1 = pib1 * BILHAO; 
            valor2_attr1 = pib2 * BILHAO;
            vencedor_attr1 = (pib1 > pib2) ? 1 : (pib2 > pib1) ? 2 : 0;
            break;
        case 4:
            printf("1º Atributo - Pontos Turísticos:\n");
            printf("%s: %d pontos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos\n", pais2, pontos_turisticos2);
            valor1_attr1 = (float)pontos_turisticos1;
            valor2_attr1 = (float)pontos_turisticos2;
            vencedor_attr1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5:
            printf("1º Atributo - Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            vencedor_attr1 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1) ? 2 : 0;
            break;
    }

    printf("Vencedor do 1º atributo: %s\n", 
           (vencedor_attr1 == 1) ? pais1 : (vencedor_attr1 == 2) ? pais2 : "Empate");

    // COMPARAÇÃO DO SEGUNDO ATRIBUTO
    switch(opcao2) {
        case 1:
            printf("\n2º Atributo - População:\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            valor1_attr2 = (float)populacao1;
            valor2_attr2 = (float)populacao2;
            vencedor_attr2 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2:
            printf("\n2º Atributo - Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            valor1_attr2 = area1 * KM_QUADRADO;
            valor2_attr2 = area2 * KM_QUADRADO;
            vencedor_attr2 = (area1 > area2) ? 1 : (area2 > area1) ? 2 : 0;
            break;
        case 3:
            printf("\n2º Atributo - PIB:\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n", pais2, pib2);
            valor1_attr2 = pib1 * BILHAO; 
            valor2_attr2 = pib2 * BILHAO;
            vencedor_attr2 = (pib1 > pib2) ? 1 : (pib2 > pib1) ? 2 : 0;
            break;
        case 4:
            printf("\n2º Atributo - Pontos Turísticos:\n");
            printf("%s: %d pontos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos\n", pais2, pontos_turisticos2);
            valor1_attr2 = (float)pontos_turisticos1;
            valor2_attr2 = (float)pontos_turisticos2;
            vencedor_attr2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5:
            printf("\n2º Atributo - Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            vencedor_attr2 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1) ? 2 : 0;
            break;
    }

    printf("Vencedor do 2º atributo: %s\n", 
           (vencedor_attr2 == 1) ? pais1 : (vencedor_attr2 == 2) ? pais2 : "Empate");

    // SOMA DOS ATRIBUTOS E RESULTADO FINAL
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\nVENCEDOR: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVENCEDOR: %s!\n", pais2);
    } else {
        printf("\nEMPATE!\n");
    }

    return 0;
}