#include <stdio.h>

int main(){

  // Área Destinada a Variaveis do Sistema
  
char estado1, estado2;
char codigo1[3], codigo2[3];
char cidade1[50], cidade2[50];
int populacao1, pturistico1, populacao2, pturistico2;
float area1, pib1, area2, pib2;

  // Área para entrada de dados

  printf("Bem Vindo a Tela de cadastro de cartas do jogo - SUPER TRUNFO.\n");
  printf("\nCarta: 1\n");

  printf("Digite a sigla do Estado (A - H): ");
    scanf(" %c", &estado1);
  printf("Digite o Codigo da Carta (Ex.:P01): ");
    scanf("%s", codigo1);
  printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);
  printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
  printf("Digite a Area (km2): ");
    scanf("%f", &area1);
  printf("Digite o PIB(Bi): ");
    scanf("%f", &pib1);
  printf("Digite o numero de pontos Turisticos: ");
    scanf("%d", &pturistico1);

  printf("\nCadastro concluido\n");

  printf("\nCarta: 2\n");

  printf("Digite a sigla do Estado (A - H): ");
    scanf(" %c", &estado2);
  printf("Digite o Codigo da Carta (Ex.:P01): ");
    scanf("%s", codigo2);
  printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);
  printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
  printf("Digite a Area (km2): ");
    scanf("%f", &area2);
  printf("Digite o PIB(Bi): ");
    scanf("%f", &pib2);
  printf("Digite o numero de pontos Turisticos: ");
    scanf("%d", &pturistico2);
  
  printf("\nCadastro concluido\n");

  // Área para exibição dos dados das Cartas

  printf("\n----------------------------------------------------\n");
  printf("\nAs Seguintes Cartas foram Cadastradas:\n");

  printf("\nCarta: 1\n");

  printf("Estado: %c\n",estado1);
  printf("Codigo da Carta: %s\n",codigo1);
  printf("Cidade: %s\n",cidade1);
  printf("Populacao: %d\n",populacao1);
  printf("Area (km2): %.2f\n",area1);
  printf("PIB: %.2f\n",pib1);
  printf("Pontos Turisticos: %d\n",pturistico1);

  printf("\nCarta: 2\n");

  printf("Estado: %c\n",estado2);
  printf("Codigo da Carta: %s\n",codigo2);
  printf("Cidade: %s\n",cidade2);
  printf("Populacao: %d\n",populacao2);
  printf("Área (km2): %.2f\n" ,area2);
  printf("PIB: %.2f\n",pib2);
  printf("Pontos Turisticos: %d\n",pturistico2);

  printf("\n----------------------------------------------------\n");

return 0;
}
