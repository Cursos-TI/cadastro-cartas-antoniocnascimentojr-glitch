#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[10];
  char Estado2[10];
  char codigo[10];
  char codigo2[10];
  char Cidade[10];
  char Cidade2[10];
  float Populacao;
  float Populacao2;
  float Area;
  float Area2;
  float PIB;
  float PIB2;
  int NumPontosTuristicos;
  int NumPontosTuristicos2;

  // Área para entrada de dados
  printf("Digite o estado: ");
  scanf("%9s", Estado);

  printf("Digite o código: ");
  scanf("%9s", codigo);

  printf("Digite a cidade: ");
  scanf("%9s", Cidade);

  printf("Digite a população: ");
  scanf("%f", &Populacao);

  printf("Digite a área: ");
  scanf("%f", &Area);

  printf("Digite o PIB: ");
  scanf("%f", &PIB);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &NumPontosTuristicos);
  printf("\n\n");

  // Área para entrada de dados da segunda cidade
  printf("Digite o estado2: ");
  scanf("%9s", Estado2);

  printf("Digite o código2: ");
  scanf("%9s", codigo2);

  printf("Digite a cidade: ");
  scanf("%9s", Cidade2);

  printf("Digite a população2: ");
  scanf("%f", &Populacao2);

  printf("Digite a área2: ");
  scanf("%f", &Area2);

  printf("Digite o PIB2: ");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos2: ");
  scanf("%d", &NumPontosTuristicos2);
  printf("\n\n");


  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %s\n", Estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %.2f\n", Populacao);
  printf("Área: %.2f %s\n", Area, "Km²");
  printf("PIB: R$ %.2f\n", PIB);
  printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos);
  printf("\n");

  // Área para exibição dos dados da segunda cidade
  printf("Carta 2: \n");
  printf("Estado: %s\n", Estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %.2f\n", Populacao2);
  printf("Área: %.2f %s\n", Area2, "Km²");
  printf("PIB: R$ %.2f\n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos2);
  printf("\n");

return 0;
}
