#include <stdio.h>

int main() {
    //Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    //Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    //Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    //Cadastro da Carta 2
    printf("\n Cadastro da Carta 2 \n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula densidade e PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Escolha do atributo para comparar 
 
    // População, Área, PIB, Densidade Populacional, PIB per Capita
    printf("\n Comparação de Cartas (Atributo: PIB per Capita)\n");

    //Comparação usando if / else
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nCarta 1 - %s (Estado %c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (Estado %c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nCarta 1 - %s (Estado %c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (Estado %c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else {
        printf("\nAs duas cartas têm o mesmo valor de PIB per Capita!\n");
    }

    return 0;
}
