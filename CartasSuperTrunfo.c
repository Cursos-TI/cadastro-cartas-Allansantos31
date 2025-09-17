#include <stdio.h>

int main() {
    int populacao, pontosturisticos;
    float PIB, area;
    char estado[3]; // 2 letras + '\0'
    char codigo[20];
    char nome[50];
    
    // Inicio do codigo
    // Carta n1
    printf("Primeira Carta \n");

    printf("Selecione uma letra de A a H: \n");
    scanf("%2s", estado);

    printf("Digite o codigo do seu estado: \n");
    scanf("%19s", codigo);

    printf("Digite o nome da sua cidade \n");
    scanf(" %[^\n]", nome); //permite ler nomes com espaços

    printf("Qual a populacao da sua cidade? \n");
    scanf("%d", &populacao);

    printf("Digite a area da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB de sua cidade \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos existem na sua cidade? \n");
    scanf("%d", &pontosturisticos);

    printf("Dados:\n");

    // Exibicao dos dados 1

    printf("CARTA 1\n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f km² \n", area);
    printf("PIB: %.2f bilhoes de reais \n",PIB);
    printf("Pontos turísticos: %d \n", pontosturisticos);
    
    printf("\n");

    // CARTA n2

    printf("Selecione uma letra de A a H: \n");
    scanf("%2s", estado);

    printf("Digite o codigo do seu estado: \n");
    scanf("%19s", codigo);

    printf("Digite o nome da sua cidade \n");
    scanf(" %[^\n]", nome); // permite ler nomes com espaços

    printf("Qual a populacao da sua cidade? \n");
    scanf("%d", &populacao);

    printf("Digite a area da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB de sua cidade \n");
    scanf("%f" , &PIB);

    printf("Quantos pontos turisticos existem na sua cidade? \n");
    scanf("%d" , &pontosturisticos);

    printf("Dados:\n");

    // Exibicao dos dados 2

    printf("CARTA 2\n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f km² \n", area);
    printf("PIB: %.2f bilhoes de reais \n", PIB);
    printf("Pontos turísticos: %d \n", pontosturisticos);

    printf("\n");


    return 0;
}
