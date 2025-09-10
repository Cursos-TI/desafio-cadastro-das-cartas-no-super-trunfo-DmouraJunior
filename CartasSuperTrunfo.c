#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //INICIALIZAÇÃO DA PRIMEIRA CARTA.

    printf("Desafio Do Super Trunfo\n");
    printf("   Nível Aventureiro\n");
           
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char estado2;
    char codigo[20];
    char codigo2[20];
    char cidade[20];
    char cidade2[20];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int npt;
    int npt2;
    float densidade_populacional;
    float pib_per_capta;
    float densidade_populacional2;
    float pib_per_capta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //DADOS DA PRIMEIRA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("digite a população geral: \n");
    scanf("%d", &populacao);

    printf("digite a área total: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt);

    densidade_populacional = (float)(populacao + area) / 2;
    pib_per_capta = (pib + area) / 2;

    // DADOS DA SEGUNDA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("digite a população geral: \n");
    scanf("%d", &populacao2);

    printf("digite a área total: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt2);

    densidade_populacional2 = (float)(populacao2 + area2) / 2;
    pib_per_capta2 = (pib2 + area2) / 2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("Pib Per Capta: %.2f\n", pib_per_capta);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("Pib Per Capta: %.2f\n", pib_per_capta2);

    return 0;

}
