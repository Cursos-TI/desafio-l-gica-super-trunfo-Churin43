#include <stdio.h>
#include <string.h>

int main() {
    // Estrutura das cartas
    char estado1[3], codigo1[4], nome1[50];
    char estado2[3], codigo2[4], nome2[50];
    int pontosTuristicos1, pontosTuristicos2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    int opcao;

    // Cadastro das Cartas
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome do País: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome do País: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Contas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    //Menu
    printf("\nMENU DE COMPARAÇÃOn");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", nome1, nome2);

    // Comparação com switch
    switch (opcao) {
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao1 < populacao2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area1 < area2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib1 < pib2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontosTuristicos1);
            printf("%s: %d\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pontosTuristicos1 < pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            // Aqui a lógica inverte: vence a menor densidade
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (densidade1 > densidade2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("\nAtributo: PIB per Capita\n");
            printf("%s: %.2f\n", nome1, pibPerCapita1);
            printf("%s: %.2f\n", nome2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pibPerCapita1 < pibPerCapita2)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
