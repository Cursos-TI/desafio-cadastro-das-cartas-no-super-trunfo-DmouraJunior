#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //INICIALIZAÇÃO DA PRIMEIRA CARTA.

    printf("Desafio Do Super Trunfo\n");
    printf("Recife-Pe\n");
           
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao;
    float area;
    float pib;
    int npt;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite a população geral: \n");
    scanf("%d", &populacao);

    printf("digite a área total: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turísticos: \n");
    scanf("%d", &npt);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("população geral: %d\n", populacao);
    printf("área total: %f\n", area);
    printf("pib: %f\n", pib);
    printf("numero de pontos turísticos: %d\n", npt);

    

    return 0;
}
