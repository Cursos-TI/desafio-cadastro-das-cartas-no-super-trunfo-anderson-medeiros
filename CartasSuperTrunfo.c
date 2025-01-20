#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nCadastro de Cartas\n");
    printf("------------------\n");

    printf("Código: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados Cadastrados\n");
    printf("-----------------\n");

    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
