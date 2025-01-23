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

    int populacao, turismo;
    float area;
    double pib;
    char estado;
    char opcao = 'Y';
    char cidade[50], codigo[3];

    printf("Olá, bem-vindo ao supertrunfo com temática 'países'\nPara jogar, basta adicionar as informações das cartas que serão solicitadas\nVoce deve declarar 8 estados, seus nomes serao A, B, C, D, E, F, G e H.\nCada estado possuirá 4 cartas com o nome de suas cidades, os nomes das cidades serão de sua escolha.\nTambém possuirão um código dado por você, que é a junção do estado mais a ordem que a carta apareceu.\nPodendo ser'A01', 'D04' e etc...\nPressione 'Y' para ver um exemplo.\n");
    scanf(" %c", &opcao);
    
    printf("\n\nEstado: A\nCódigo da Carta: A01\nNome da Cidade: Xique-xique\n\nEstado: A\nCódigo da Carta: A02\nNome da Cidade: Salvador.\n\nPressione 'Y' para começar.\n\n");
    scanf(" %c", &opcao);

    printf("Estado: \n");
    scanf("%c", &estado);
    
    printf("Código da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%.2f", &area);

    printf("PIB: \n");
    scanf("%2.f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    print("Estado: %c\n", estado);
    print("Código da carta: %s\n", codigo);
    print("Nome da cidade: %s\n", cidade);
    print("População: %2.f\n", populacao);
    print("Área: %d\n", area);
    print("PIB: %2.f\n", pib);        
    print("Número de pontos Turísticos: %d\n", turismo);


/*
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);*/

    return 0;
}
 /*Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50*/