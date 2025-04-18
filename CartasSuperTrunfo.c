#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Variáveis para os dados da primeira carta
        char estado1;
        char codigo1[5];
        char cidade1[100];
        int populacao1;
        float area1, pib1;
        int pontosturisticos1;
        
    // Variáveis para os dados da segunda carta
        char estado2;
        char codigo2[5];
        char cidade2[100];
        int populacao2;
        float area2, pib2;
        int pontosturisticos2;

        // Leitura dos dados para a carta 1
        printf("Digite os dados da carta 1: \n");
        printf("Estado A-H: ");
        scanf(" %c", &estado1);
        printf("Codigo da carta (ex: A01, B01): ");
        scanf("%s", codigo1);
        printf("Nome da Cidade: ");
        scanf("%s", cidade1);
        printf("População: ");
        scanf("%d", &populacao1);
        printf("Área em km²: ");
        scanf("%f", &area1);
        printf("PIB: ");
        scanf("%f", &pib1);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosturisticos1);
        
        // Leitura dos dados para a carta 2
        printf("\nDigite os dados da carta 2: \n");
        printf("Estado A-H: ");
        scanf(" %c", &estado2);
        printf("Codigo da carta (ex: A01, B01): ");
        scanf("%s", codigo2);
        printf("Nome da Cidade: ");
        scanf("%s", cidade2);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área em km²: ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosturisticos2);

        // Exibição dos dados da carta 1
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

        // Exibição dos dados da carta 1
        printf("\nCarta 1A\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

        // Exibição dos dados da carta 2
        printf("\nCarta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
        

    return 0;
}
