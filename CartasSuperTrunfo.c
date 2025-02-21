#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char cidade1[20], cidade2[20], cod1[5], cod2[5];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

    printf("CADASTRO DE CARTAS!\n");
    printf("\nCARTA 1:\n");
    printf("Escreva o nome da cidade:\n");
    fgets(cidade1, 20, stdin);
    printf("Escreva o código da cidade:\n");
    fgets(cod1, 5, stdin);
    printf("Escreva a população da cidade:\n");
    scanf("%d", &pop1);
    printf("Escreva a área da cidade:\n");
    scanf("%f", &area1);
    printf("Escreva o PIB da cidade:\n");
    scanf(" %f", &pib1);
    printf("Escreva a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &tur1);
    
    getchar();
    
	printf("\nCARTA 2:\n");
    printf("Escreva o nome da cidade:\n");
    fgets(cidade2, 20, stdin);
    printf("Escreva o código da cidade:\n");
    fgets(cod2, 5, stdin);
    printf("Escreva a população da cidade:\n");
    scanf("%d", &pop2);
    printf("Escreva a área da cidade:\n");
    scanf("%f", &area2);
    printf("Escreva o PIB da cidade:\n");
    scanf(" %f", &pib2);
    printf("Escreva a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &tur2);
    
    printf("\nResultados:\n");
    
	printf("1 CARTA:\n");
    printf("Cidade: %s", cidade1);
    printf("Código: %s", cod1);
    printf("População: %d\n", pop1);
    printf("Área: %.1f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", tur1);
    printf("\n");
    printf("2 CARTA:\n");
    printf("Cidade: %s", cidade2);
    printf("Código: %s", cod2);
    printf("População: %d\n", pop2);
    printf("Área: %.1f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", tur2);
    return 0;
}
