#include <stdio.h>

int main() {
    // CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("== CADASTRO CARTA 1 ==\n");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    printf("\n== CADASTRO CARTA 2 ==\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // MENU PRIMEIRO ATRIBUTO
    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nomeAttr1[30], nomeAttr2[30];

    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n6. PIB per Capita\n7. Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    
    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1; valor1_carta2 = populacao2;
            sprintf(nomeAttr1, "Populacao");
            break;
        case 2:
            valor1_carta1 = area1; valor1_carta2 = area2;
            sprintf(nomeAttr1, "Area");
            break;
        case 3:
            valor1_carta1 = pib1; valor1_carta2 = pib2;
            sprintf(nomeAttr1, "PIB");
            break;
        case 4:
            valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2;
            sprintf(nomeAttr1, "Pontos Turisticos");
            break;
        case 5:
            valor1_carta1 = densidade1; valor1_carta2 = densidade2;
            sprintf(nomeAttr1, "Densidade Demografica");
            break;
        case 6:
            valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2;
            sprintf(nomeAttr1, "PIB per Capita");
            break;
        case 7:
            valor1_carta1 = superPoder1; valor1_carta2 = superPoder2;
            sprintf(nomeAttr1, "Super Poder");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    // MENU SEGUNDO ATRIBUTO - DINÂMICO
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
    printf("Atencao: nao pode repetir o primeiro atributo!\n");
    for (int i = 1; i <= 7; i++) {
        if (i!= opcao1) { // não mostra a opcao já escolhida
            switch (i) {
                case 1: printf("1. Populacao\n"); break;
                case 2: printf("2. Area\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turisticos\n"); break;
                case 5: printf("5. Densidade Demografica\n"); break;
                case 6: printf("6. PIB per Capita\n"); break;
                case 7: printf("7. Super Poder\n"); break;
            }
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    
    if (opcao2 == opcao1) {
        printf("Erro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

   
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; sprintf(nomeAttr2, "Populacao"); break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; sprintf(nomeAttr2, "Area"); break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; sprintf(nomeAttr2, "PIB"); break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; sprintf(nomeAttr2, "Pontos Turisticos"); break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; sprintf(nomeAttr2, "Densidade Demografica"); break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; sprintf(nomeAttr2, "PIB per Capita"); break;
        case 7: valor2_carta1 = superPoder1; valor2_carta2 = superPoder2; sprintf(nomeAttr2, "Super Poder"); break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // COMPARAÇÃO
    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    // Mostra valores individuais
    printf("%s: %.2f vs %.2f\n", nomeAttr1, valor1_carta1, valor1_carta2);
    printf("%s: %.2f vs %.2f\n\n", nomeAttr2, valor2_carta1, valor2_carta2);

    // Pontuação: densidade = menor vence, resto = maior vence
    
    int ponto1_attr1 = (opcao1 == 5)? (valor1_carta1 < valor1_carta2? 1 : 0) : (valor1_carta1 > valor1_carta2? 1 : 0);
    int ponto2_attr1 = (opcao1 == 5)? (valor1_carta2 < valor1_carta1? 1 : 0) : (valor1_carta2 > valor1_carta1? 1 : 0);

    int ponto1_attr2 = (opcao2 == 5)? (valor2_carta1 < valor2_carta2? 1 : 0) : (valor2_carta1 > valor2_carta2? 1 : 0);
    int ponto2_attr2 = (opcao2 == 5)? (valor2_carta2 < valor2_carta1? 1 : 0) : (valor2_carta2 > valor2_carta1? 1 : 0);

    int total1 = ponto1_attr1 + ponto1_attr2;
    int total2 = ponto2_attr1 + ponto2_attr2;

    printf("Placar: %s %d x %d %s\n", cidade1, total1, total2, cidade2);

    // Resultado final
    if (total1 > total2) {
        printf("\nVENCEDOR: %s!\n", cidade1);
    } else {
        if (total2 > total1) {
            printf("\nVENCEDOR: %s!\n", cidade2);
        } else {
            printf("\nEMPATE!\n");
            // Desempate pelo Super Poder usando ternário
            char *vencedorDesempate = (superPoder1 > superPoder2)? cidade1 : cidade2;
            printf("Desempate por Super Poder: %s vence!\n", vencedorDesempate);
        }
    }

    return 0;
}