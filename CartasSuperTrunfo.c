#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para armazenar os dados do Super Trunfo
    // As variáveis foram definidas de acordo com o contexto do jogo Super Trunfo
    // Carta 1
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Limpa a tela e exibe o cabeçalho do programa
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Solicita ao usuário que insira os dados da primeira carta
    printf("Carta 1:\n");

    printf("Por favor, digite o Estado, \n");
    printf("sendo uma letra de 'A' a 'H': \n");
    scanf("%1s", &estado1);

    printf("Por favor, digite um código de 2 dígitos,\n");
    printf("sendo um número de 01 a 04: \n");
    scanf("%2s", codigo1);

    printf("Por favor, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);  // Lê até o final da linha, permitindo espaços

    printf("Por favor, digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Por favor, digite a área da cidade (em Km2): \n");
    scanf("%f", &area1);

    printf("Por favor, digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Por favor, digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Limpa a tela e exibe o cabeçalho novamente
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Solicita os dados da segunda carta
    printf("Carta 2:\n");

    printf("Por favor, digite o Estado, \n");
    printf("sendo uma letra de 'A' a 'H': \n");
    scanf("%1s", &estado2);

    printf("Por favor, digite um código de 2 dígitos,\n");
    printf("sendo um número de 01 a 04: \n");
    scanf("%2s", codigo2);

    printf("Por favor, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2); // Lê até o final da linha, permitindo espaços

    printf("Por favor, digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Por favor, digite a área da cidade (em Km2): \n");
    scanf("%f", &area2);

    printf("Por favor, digite o PIB da cidade (em bilhões de Reais): \n");
    scanf("%f", &pib2);

    printf("Por favor, digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Limpa a tela e exibe o cabeçalho para listar as cartas
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Exibe os dados da primeira carta
    printf("Carta 1:\n");   
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);    
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos1);

    // Exibe os dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
