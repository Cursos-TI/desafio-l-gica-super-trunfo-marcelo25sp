#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    printf("Desafio Super Trunfo\n");
    printf("--------------------\n");

    char estado1, estado2;
    char codigo1[8], codigo2[8];
    char nomeCidade1[30],nomeCidade2[30];
    int pontosTuristicos1, pontosTuristicos2, opcao;
    float pib1, pib2, area1, area2, densidade1, densidade2, pibPerCapita1, pibPerCapita2; 
    unsigned long int habitantes1, habitantes2;
    float superPoder1, superPoder2;

    // entrada dos dados da carta 1    
    printf("Entre com os dados da Carta 1:\n");
    printf("\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &habitantes1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float) habitantes1/area1; // calculando a densidade populacional  da Carta 1 utilizando o casting
    pibPerCapita1 = (float) pib1/habitantes1; // calculando o pib per capita da Carta 1 utilizando o casting
    
    // cálculo do Super Poder1: soma-se todos os atributos da carta e utlizando o casting para somar todos como float
    superPoder1 = (float) habitantes1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // exibindo dados da Carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // entrada dos dados da Carta 2
    printf("\n");
    printf("Entre com os dados da Carta 2:\n");
    printf("\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &habitantes2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float) habitantes2/area2; // calculando a densidade populacional da Carta 2 utilizando o casting
    pibPerCapita2 = (float) pib2/habitantes2; // calculando o pib per capita da Carta 2 utilizando o casting
    
    // cálculo do Super Poder2: soma-se todos os atributos da carta e utlizando o casting para somar todos como float
    superPoder2 = ((float) habitantes2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2));
    
    // exibindo dados da Carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // aqui está sendo criado o menu utilizando o switch - case
    printf("\n");
    printf("------------------------------\n");
    printf("Menu de Comparação das Cartas\n");
    printf("1- Nome da Cidade:\n");
    printf("2- População::\n");
    printf("3- Área:\n");
    printf("4- PIB:\n");
    printf("5- Número de pontos turísticos:\n");
    printf("6- Densidade demográfica:\n");

    switch (opcao)
    {
    case 1:
        printf("\nCarta 1: %s\n", nomeCidade1);
        printf("Carta 2: %s\n", nomeCidade2);
        break;
    case 2:
        printf("2- População:\n");
        if(habitantes1 > habitantes2){
            printf("Carta 1 venceu!\n");
        }else if(habitantes2 > habitantes1){
            printf("Carta 2 venceu!\n");
        }else{
            printf("Houve um empate!\n");
        }
        break;    
    default:
        break;
    }
    

    


    return 0;
}

