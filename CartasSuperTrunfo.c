#include <stdio.h>

int main() {

    // Definição das variáveis
    char c1_estado, c2_estado;
    char c1_codigo[3], c2_codigo[3];
    char c1_cidade[50], c2_cidade[50];
    unsigned long int c1_populacao, c2_populacao;
    float c1_area, c2_area;
    float c1_densidadePopulacional ,c2_densidadePopulacional;
    float c1_pib, c2_pib;
    float c1_pibPerCapita, c2_pibPerCapita;
    int c1_pontosTuristicos, c2_pontosTuristicos;
    float c1_superPoder, c2_superPoder;

    // Limpar a tela e posiciona o cursor na primeira linha
    printf("\033[2J\033[H");



    // Tabela para exibição dos dados
    puts("        CADASTRO DE CARTAS        ");
    puts("                                  ");
    puts("DADOS                  │          ");
    puts("───────────────────────┼──────────");
    puts("Estado                 │          ");
    puts("Código                 │          ");
    puts("Cidade                 │          ");
    puts("População              │          ");
    puts("Área                   │          ");
    puts("Densidade Populacional │          ");
    puts("PIB                    │          ");
    puts("PIB per capita         │          ");
    puts("Pontos Turísticos      │          ");
    puts("Super Poder            │          ");

    // Cadastro Carta 1
    printf("\033[3;26HCarta 1");
    printf("\033[5;26H");
    scanf("%c", &c1_estado);
    printf("\033[6;26H%c", c1_estado);
    scanf("%s", c1_codigo);
    printf("\033[7;26H");
    scanf(" %[^\n]", c1_cidade);
    printf("\033[8;26H");
    scanf("%lu", &c1_populacao);
    printf("\033[9;26H");
    scanf("%f", &c1_area);

    // Cálculo da densidade populacional
    c1_densidadePopulacional = (float) c1_populacao / c1_area;
    printf("\033[10;26H%.5f hab/km²", c1_densidadePopulacional);

    printf("\033[11;26HR$ ");
    scanf("%f", &c1_pib);

    // Cálculo do PIB per capita
    c1_pibPerCapita = (float) c1_pib / c1_populacao;
    printf("\033[12;26HR$ %.2f", c1_pibPerCapita);

    printf("\033[13;26H");
    scanf("%d", &c1_pontosTuristicos);

    // Cálculo do Super Poder
    c1_superPoder = (float) c1_populacao + c1_area + c1_pib + c1_pibPerCapita +
                    (-c1_densidadePopulacional) + c1_pontosTuristicos;

    printf("\033[14;26H%f\n", c1_superPoder);


    // Limpa todos os campos da tabela
    for(int i = 5; i < 15; i++) {
        printf("\033[%d;26H\033[K", i);
    }

    // Cadastro Carta 2
    printf("\033[3;26HCarta 2");
    printf("\033[5;26H");
    scanf(" %c", &c2_estado);
    printf("\033[6;26H%c", c2_estado);
    scanf("%s", c2_codigo);
    printf("\033[7;26H");
    scanf(" %[^\n]", c2_cidade);
    printf("\033[8;26H");
    scanf("%lu", &c2_populacao);
    printf("\033[9;26H");
    scanf("%f", &c2_area);

    // Cálculo da densidade populacional
    c2_densidadePopulacional = (float) c2_populacao / c2_area;
    printf("\033[10;26H%.5f hab/km²", c2_densidadePopulacional);

    printf("\033[11;26HR$ ");
    scanf("%f", &c2_pib);

    // Cálculo do PIB per capita
    c2_pibPerCapita = (float) c2_pib / c2_populacao;
    printf("\033[12;26HR$ %.2f", c2_pibPerCapita);

    printf("\033[13;26H");
    scanf("%d", &c2_pontosTuristicos);

    // Cálculo do Super Poder
    c2_superPoder = (float) c2_populacao + c2_area + c2_pib + c2_pibPerCapita +
                    (-c2_densidadePopulacional) + c2_pontosTuristicos;

    printf("\033[14;26H%f", c2_superPoder);


    // Limpa todos os campos da tabela
    for(int i = 5; i < 15; i++) {
        printf("\033[%d;26H\033[K", i);
    }

    // Remove os campos estado, código e cidade da tabela
    printf("\033[5;1H\033[M");
    printf("\033[6;1H\033[M");
    printf("\033[7;1H\033[M");


    // Mostra na tabela o resultado da comparação das propriedades das cartas
    printf("\033[1;1H      COMPARAÇÃO DAS CARTAS       ");
    printf("\033[3;26HRESULTADO");
    printf("\033[5;26H%d", c1_populacao > c2_populacao);
    printf("\033[6;26H%d", c1_area > c2_area);
    printf("\033[7;26H%d", c1_densidadePopulacional < c2_densidadePopulacional); 
    printf("\033[8;26H%d", c1_pib > c2_pib);
    printf("\033[9;26H%d", c1_pibPerCapita > c2_pibPerCapita);
    printf("\033[10;26H%d", c1_pontosTuristicos > c2_pontosTuristicos);
    printf("\033[11;26H%d", c1_superPoder > c2_superPoder);


    printf("\n");



    return 0;

}


