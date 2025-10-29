#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis 
    char nome1[50], nome2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    int atributo1, atributo2;
    float valorCarta1Atrib1 = 0, valorCarta2Atrib1 = 0;
    float valorCarta1Atrib2 = 0, valorCarta2Atrib2 = 0;
    float soma1, soma2;

    //  Cadastros
    printf("Cadastro da Carta 1:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Contas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    //MENU 1
    printf("\nEscolha o PRIMEIRO atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    //  MENU 2 
    printf("\nEscolha o SEGUNDO atributo (tem que ser diferente do primeiro)\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Atributos iguais não são permitidos!\n");
        return 0;
    }
    
    if (atributo1 == 1) {
        valorCarta1Atrib1 = populacao1;
        valorCarta2Atrib1 = populacao2;
    } else if (atributo1 == 2) {
        valorCarta1Atrib1 = area1;
        valorCarta2Atrib1 = area2;
    } else if (atributo1 == 3) {
        valorCarta1Atrib1 = pib1;
        valorCarta2Atrib1 = pib2;
    } else if (atributo1 == 4) {
        valorCarta1Atrib1 = pontosTuristicos1;
        valorCarta2Atrib1 = pontosTuristicos2;
    } else if (atributo1 == 5) {
        valorCarta1Atrib1 = densidade1;
        valorCarta2Atrib1 = densidade2;
    } else if (atributo1 == 6) {
        valorCarta1Atrib1 = pibPerCapita1;
        valorCarta2Atrib1 = pibPerCapita2;
    }

    
    if (atributo2 == 1) {
        valorCarta1Atrib2 = populacao1;
        valorCarta2Atrib2 = populacao2;
    } else if (atributo2 == 2) {
        valorCarta1Atrib2 = area1;
        valorCarta2Atrib2 = area2;
    } else if (atributo2 == 3) {
        valorCarta1Atrib2 = pib1;
        valorCarta2Atrib2 = pib2;
    } else if (atributo2 == 4) {
        valorCarta1Atrib2 = pontosTuristicos1;
        valorCarta2Atrib2 = pontosTuristicos2;
    } else if (atributo2 == 5) {
        valorCarta1Atrib2 = densidade1;
        valorCarta2Atrib2 = densidade2;
    } else if (atributo2 == 6) {
        valorCarta1Atrib2 = pibPerCapita1;
        valorCarta2Atrib2 = pibPerCapita2;
    }

    //Comparação do atributo 1
    printf("\n Comparação 1 \n");
    printf("%s: %.4f | %s: %.4f\n", nome1, valorCarta1Atrib1, nome2, valorCarta2Atrib1);
    if (atributo1 == 5) { // Densidade menor vence
        if (valorCarta1Atrib1 < valorCarta2Atrib1)
            printf("Vencedor: %s\n", nome1);
        else if (valorCarta2Atrib1 < valorCarta1Atrib1)
            printf("Vencedor: %s\n", nome2);
        else
            printf("Empate!\n");
    } else {
        if (valorCarta1Atrib1 > valorCarta2Atrib1)
            printf("Vencedor: %s\n", nome1);
        else if (valorCarta2Atrib1 > valorCarta1Atrib1)
            printf("Vencedor: %s\n", nome2);
        else
            printf("Empate!\n");
    }

    // Comparação do atributo 2
    printf("\n Comparação 2 \n");
    printf("%s: %.4f | %s: %.4f\n", nome1, valorCarta1Atrib2, nome2, valorCarta2Atrib2);
    if (atributo2 == 5) { // Densidade menor vence
        if (valorCarta1Atrib2 < valorCarta2Atrib2)
            printf("Vencedor: %s\n", nome1);
        else if (valorCarta2Atrib2 < valorCarta1Atrib2)
            printf("Vencedor: %s\n", nome2);
        else
            printf("Empate!\n");
    } else {
        if (valorCarta1Atrib2 > valorCarta2Atrib2)
            printf("Vencedor: %s\n", nome1);
        else if (valorCarta2Atrib2 > valorCarta1Atrib2)
            printf("Vencedor: %s\n", nome2);
        else
            printf("Empate!\n");
    }

    // Soma de tudo
    soma1 = ((atributo1 == 5) ? (1 / valorCarta1Atrib1) : valorCarta1Atrib1) +
            ((atributo2 == 5) ? (1 / valorCarta1Atrib2) : valorCarta1Atrib2);
    soma2 = ((atributo1 == 5) ? (1 / valorCarta2Atrib1) : valorCarta2Atrib1) +
            ((atributo2 == 5) ? (1 / valorCarta2Atrib2) : valorCarta2Atrib2);

    printf("\nResultado\n");
    printf("%s - Soma total: %.4f\n", nome1, soma1);
    printf("%s - Soma total: %.4f\n", nome2, soma2);

    if (soma1 > soma2)
        printf("Vencedor FINAL: %s\n", nome1);
    else if (soma2 > soma1)
        printf("Vencedor FINAL: %s\n", nome2);
    else
        printf("EMPATE FINAL!\n");

    return 0;
}
