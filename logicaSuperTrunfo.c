#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float SuperPoder1;

    printf("==Cadastro da Carta1==\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1); 
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("\n==Carta1==\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float SuperPoder2;

    printf("\n==Cadastro da Carta2==\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2); 
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n==Carta2==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Menu Interativo
    int opcao;
    printf("\n== Comparação das Cartas: ==\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turisticos\n");
    printf("5. Comparar Densidade Populacional\n");
    printf("6. Comparar PIB per Capita\n");
    printf("7. Comparar Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Rodada ---\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2); 

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 Vence!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            } // CORRIGIDO: faltava fechar o if
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Carta 1 Vence!\n");
            } else if (area2 > area1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            } // CORRIGIDO: faltava fechar o if
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Carta 1 Vence!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 Vence!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // IF-ELSE ANINHADO - Regra: menor densidade vence
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidadePopulacional2);

            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Carta 1 Vence!\n");
                printf("Regra: Menor densidade vence!\n");
            } else {
                if (densidadePopulacional2 < densidadePopulacional1) { // aninhado
                    printf("Carta 2 Vence!\n");
                    printf("Regra: Menor densidade vence!\n");
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Carta 1 Vence!\n");
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, SuperPoder1);
            printf("%s: %.2f\n", cidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2) {
                printf("Carta 1 Vence!\n");
            } else if (SuperPoder2 > SuperPoder1) {
                printf("Carta 2 Vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }
    return 0;
}