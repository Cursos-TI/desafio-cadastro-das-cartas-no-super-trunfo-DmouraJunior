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
    
    char estado [20];
    char estado2 [20];
    char cidade[20];
    char cidade2[20];
    char codigo;
    char codigo2;
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

    printf("digite o nome do estado: \n");
    scanf("%s", estado);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("digite o codigo da carta: \n");
    scanf(" %c", &codigo);
    
    printf("digite a população geral: \n");
    scanf("%d", &populacao);

    printf("digite a área total: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt);

    printf("digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("digite o codigo da carta: \n");
    scanf(" %c", &codigo2);

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

    printf("o estado selecionado foi: %s\n", estado);
    printf("a cidade selecionada foi: %s\n", cidade);
    printf("o codigo da carta é: %c\n", codigo);
    printf("população geral: %d\n", populacao);
    printf("área total: %f\n", area);
    printf("pib: %f\n", pib);
    printf("numero de pontos turísticos: %d\n", npt);

    printf("o estado selecionado foi: %s\n", estado2);
    printf("a cidade selecionada foi: %s\n", cidade2);
    printf("o codigo da carta é: %c\n", codigo2);
    printf("população geral: %d\n", populacao2);
    printf("área total: %f\n", area2);
    printf("pib: %f\n", pib2);
    printf("numero de pontos turísticos: %d\n", npt2);

    return 0;

}
