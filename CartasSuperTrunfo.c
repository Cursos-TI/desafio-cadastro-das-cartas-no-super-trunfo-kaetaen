// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: José Rubens Dos Santos Oliveira

/*
Documentação: o prefixo __numero das variaveis representa o numero da carta
Por exemplo: a variável codigo__01 representa o codigo da carta de n° 01
*/
#include <stdio.h>

int main () {

    // DECLARAÇÃO VARIAVEL CARTA 01
    float PIB__01;
    float area__01;
    char estado__01[2];
    char codigo__01[4];
    char nome_da_cidade__01[200];
    unsigned long int populacao__01;
    int numero_pontos_turisticos__01;
    float densidadePopulacional__01;
    float pibPerCapta__01;
    float super_poder__01;

    // DECLARAÇÃO VARIAVEL CARTA 02
    float PIB__02;
    float area__02;
    char estado__02[2];
    char codigo__02[4];
    char nome_da_cidade__02[200];
    unsigned long int populacao__02;
    int numero_pontos_turisticos__02;
    float densidadePopulacional__02;
    float pibPerCapta__02;
    float super_poder__02;
    
    // ENTRADA DE DADOS CARTA 001
    printf("Insira os dados da CARTA 01 \n\n");
    
    printf("Insira o estado: ");
    scanf("%s", estado__01);

    printf("Insira o código: ");
    scanf("%s", codigo__01);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_da_cidade__01);

    printf("Insira a população: ");
    scanf("%li", &populacao__01);

    printf("Insira a área: ");
    scanf("%f", &area__01);

    printf("Insira o PIB: ");
    scanf("%f", &PIB__01);

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
    scanf("%li", &populacao__02);

    printf("Insira a área: ");
    scanf("%f", &area__02);

    printf("Insira o PIB: ");
    scanf("%f", &PIB__02);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%i", &numero_pontos_turisticos__02);

    // Calculo densidade populacional e PIB percapta CARTA 01
    densidadePopulacional__01 = populacao__01 / area__01;
    pibPerCapta__01           = PIB__01 / populacao__01;
    
    // Calculo do super poder CARTA 01
    super_poder__01 = (float)numero_pontos_turisticos__01 + populacao__01 + PIB__01 + area__01 + pibPerCapta__01 + (1 / densidadePopulacional__01);

    // Calculo densidade populacional e PIB percapta CARTA 02
    densidadePopulacional__02 = populacao__02 / area__02;
    pibPerCapta__02           = PIB__02 / populacao__02;

    // Calculo do super poder CARTA 02
    super_poder__02 = (float)numero_pontos_turisticos__02 + populacao__02 + PIB__02 + area__02 + pibPerCapta__02 + (1 / densidadePopulacional__01);

    printf("-------------------------------------\n");
    printf("Comparação de Cartas: \n");
    printf("-------------------------------------\n");

    if (populacao__01 > populacao__02){
        printf("População: Carta 1 venceu \n");
    } else {
        printf("População: Carta 2 venceu \n");
    }
    
    if (area__01 > area__02){
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }
    
    if (PIB__01 > PIB__02){
        printf("PIB: Carta 1 venceu \n");
    } else {
        printf("PIB: Carta 2 venceu \n");
    }
    
    if (numero_pontos_turisticos__01 > numero_pontos_turisticos__02){
        printf("Pontos Turisticos: Carta 1 venceu \n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu \n");
    }

    if (densidadePopulacional__01 < densidadePopulacional__02){
        printf("Densidade Populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu \n");
    }

    if (pibPerCapta__01 > pibPerCapta__02){
        printf("PIB Per Capta: Carta 1 venceu \n");
    } else {
        printf("PIB Per Capta: Carta 2 venceu \n");
    }

    if (super_poder__01 > super_poder__02){
        printf("Superpoder: Carta 1 venceu \n");
    } else {
        printf("Superpoder: Carta 2 venceu \n");
    }   
}