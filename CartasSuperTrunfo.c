#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: José Rubens Dos Santos Oliveira 


#include <stdio.h>

int main () {

    // DECLARAÇÃO VARIAVEL CARTA 01
    char PIB__01[200];
    char area__01[200];
    char estado__01[2];
    char codigo__01[4];
    char nome_da_cidade__01[200];
    int populacao__01, numero_pontos_turisticos__01;

    // DECLARAÇÃO VARIAVEL CARTA 02
    char PIB__02[200];
    char area__02[200];
    char estado__02[2];
    char codigo__02[4];
    char nome_da_cidade__02[200];
    int populacao__02, numero_pontos_turisticos__02;
   
    
    // ENTRADA DE DADOS CARTA 001
    printf("Insira os dados da CARTA 01 \n\n");
    
    printf("Insira o estado: ");
    scanf("%s", estado__01);

    printf("Insira o código: ");
    scanf("%s", codigo__01);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_da_cidade__01);

    printf("Insira a população: ");
    scanf("%i", &populacao__01);

    printf("Insira a área: ");
    scanf("%s", area__01);

    printf("Insira o PIB: ");
    scanf("%s", PIB__01);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%i", &numero_pontos_turisticos__01);


    // ENTRADA DE DADOS CARTA 002
    printf("\n\nInsira os dados da CARTA 02 \n\n");
    
    printf("Insira o estado: ");
    scanf("%s", estado__02);

    printf("Insira o código: ");
    scanf("%s", codigo__02);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_da_cidade__02);

    printf("Insira a população: ");
    scanf("%i", &populacao__02);

    printf("Insira a área: ");
    scanf("%s", area__02);

    printf("Insira o PIB: ");
    scanf("%s", PIB__02);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%i", &numero_pontos_turisticos__02);

    printf("-------------------------------------");

    // SAIDA DE DADOS CARTA 01
    printf("\nCarta 01\n");
    printf("Estado: %s\n", estado__01);
    printf("Código: %s\n", codigo__01);
    printf("Nome da cidade: %s\n", nome_da_cidade__01);
    printf("População: %i\n", populacao__01);
    printf("Área: %s\n", area__01);
    printf("PIB: %s\n", PIB__01);
    printf("Número de pontos túristicos: %i\n\n", numero_pontos_turisticos__01);
    printf("-------------------------------------");

    // SAIDA DE DADOS CARTA 02
    printf("\n\nCarta 02\n");
    printf("Estado: %s\n", estado__02);
    printf("Código: %s\n", codigo__02);
    printf("Nome da cidade: %s\n", nome_da_cidade__02);
    printf("População: %i\n", populacao__02);
    printf("Área: %s\n", area__02);
    printf("PIB: %s\n", PIB__02);
    printf("Número de pontos túristicos: %i\n", numero_pontos_turisticos__02);
    
}