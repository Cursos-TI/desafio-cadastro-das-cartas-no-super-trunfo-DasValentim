#include <stdio.h>

int main() {
    
    char cidade1[20], cod1[5];
    int pop1, tur1;
    float area1, pib1;

    printf("BEM VINDO AO CADASTRO DE CARTAS!\n");
    printf("Escreva o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Escreva o código da cidade:\n");
    scanf("%s", &cod1);
    printf("Escreva a população da cidade:\n");
    scanf("%d", &pop1);
    printf("Escreva a área da cidade:\n");
    scanf("%f", &area1);
    printf("Escreva o PIB da cidade:\n");
    scanf(" %f", &pib1);
    printf("Escreva a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &tur1);

    printf("CARTA:\n");
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", cod1);
    printf("População: %d\n", pop1);
    printf("Área: %.1f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", tur1);

    return 0;
}
