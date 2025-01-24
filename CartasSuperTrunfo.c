#include <stdio.h>

int main() {

    // Definição das variáveis
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float densidadePopulacional;
    float pib;
    float pibPerCapita;
    int pontosTuristicos;

    // Entrada de dados
    puts("Cadastro de Cartas");
    puts("Insira os dados.");

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);


    // Processamento de dados

    // Cálculo da densida populacional
    densidadePopulacional = (float) populacao / area;

    // Cálculo do PIB per carpita
    pibPerCapita = (float) pib / populacao;

    // Saída de dados
    puts("\nCarta cadastrada com sucesso");

    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("Densidade populacional: %f pessoas/Km²\n", densidadePopulacional);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per capita: %f reais\n", pibPerCapita);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}

