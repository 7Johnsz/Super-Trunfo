#include <stdio.h>

int main() {
    // Valores para carta 1
    char estado[2], codigo_da_carta[5], nome_da_cidade[50];
    int pontos_turisticos, populacao;
    float area, pib;
    
    // Valores para carta 2
    char estado2[2], codigo_da_carta2[5], nome_da_cidade2[50];
    int pontos_turisticos2, populacao2;
    float area2, pib2;

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
    
    // Imprimir as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", populacao/area);
    printf("PIB per capita: %.2f reais\n", pib/populacao);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", populacao2/area2);
    printf("PIB per capita: %.2f reais\n", pib2/populacao2);

    return 0;
}
