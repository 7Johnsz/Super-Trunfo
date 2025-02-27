#include <stdio.h>

int main() {
    // Valores para carta 1
    char estado[2], codigo_da_carta[5], nome_da_cidade[50];
    int pontos_turisticos, populacao;
    float area, pib, densidade_populacional, pib_per_capita;
    
    // Valores para carta 2
    char estado2[2], codigo_da_carta2[5], nome_da_cidade2[50];
    int pontos_turisticos2, populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Input dos valores para carta 1
    printf("Seja bem-vindo ao Super Trunfo!\nVamos criar a carta 1!\n\n");
    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade); // Ler o nome da cidade com espaços

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    
    printf("Digite a área: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Input dos valores para carta 2
    printf("\nAgora vamos criar a carta 2!\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2); // Ler o nome da cidade com espaços

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nComparando as cartas...\n");
    
    // Comparação de população
    printf("População: ");
    if (populacao > populacao2) {
        printf("Carta 1 vence! (1)\n");
    } else if (populacao < populacao2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    // Comparação de área
    printf("Área: ");
    if (area > area2) {
        printf("Carta 1 vence! (1)\n");
    } else if (area < area2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB
    printf("PIB: ");
    if (pib > pib2) {
        printf("Carta 1 vence! (1)\n");
    } else if (pib < pib2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    // Comparação de pontos turísticos
    printf("Pontos turísticos: ");
    if (pontos_turisticos > pontos_turisticos2) {
        printf("Carta 1 vence! (1)\n");
    } else if (pontos_turisticos < pontos_turisticos2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    // Comparação de densidade populacional
    printf("Densidade populacional: ");
    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;
    if (densidade_populacional < densidade_populacional2) {
        printf("Carta 1 vence! (1)\n");
    } else if (densidade_populacional > densidade_populacional2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB per capita
    printf("PIB per capita: ");
    pib_per_capita = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;
    if (pib_per_capita < pib_per_capita2) {
        printf("Carta 1 vence! (1)\n");
    } else if (pib_per_capita > pib_per_capita2) {
        printf("Carta 2 vence! (0)\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
