#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //INICIALIZAÇÃO DA PRIMEIRA CARTA.

    printf("Desafio Do Super Trunfo\n");
           
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char estado2;
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

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //DADOS DA PRIMEIRA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado);

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

    // DADOS DA SEGUNDA CARTA

    printf("digite o nome do estado: \n");
    scanf(" %c", &estado2);

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



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);

    return 0;

}
