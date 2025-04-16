#include <stdio.h>

int main() {

    // Desafio Super Trunfo Iniciante
    char estados;
    char estado2;
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50]; 
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ponto;
    int ponto2;
    float densidade1;
    float densidade2;
    float percapita1;
    float percapita2;
    

    // 1ª Carta
    printf("Carta 1! \n");
    
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estados);  
    printf("Digite uma letra de um estado e um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto);

    // 2ª Carta
    printf("Preencha agora a segunda carta! \n");
    printf("CARTA 2! \n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2); 
    printf("Digite uma letra de um estado e um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Resultados

    densidade1 = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    percapita1 = (float) pib / populacao;
    percapita2 = (float) pib2 / populacao2;

    // Impressão
    printf("Carta 1: \n");
    printf("Estado: %c \n", estados);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto);
    printf("Desinsidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita cidade: %.2f reais \n", percapita1);
    printf("\n");

    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto2);
     printf("Desinsidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita cidade: %.2f reais \n", percapita2);

    return 0;
    
}