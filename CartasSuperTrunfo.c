#include <stdio.h>

int main(){

  // Área Destinada a Variaveis do Sistema
  
char estado1, estado2;
char codigo1[50], codigo2[50];
char cidade1[50], cidade2[50];
int populacao1, pturistico1, populacao2, pturistico2;
double area1, pib1, area2, pib2;

  // Área para entrada de dados

  printf("Bem Vindo a Tela de cadastro de cartas do jogo - SUPER TRUNFO.\n");
  printf("\nCarta: 1\n");

  printf("Digite a sigla do Estado (Ex.: P,N,H): ");
    scanf("%c", &estado1);
  printf("Digite o Codigo da Carta (Ex.:P01): ");
    scanf("%s", codigo1);
  printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);
  printf("Digite a Populacao: ");
    scanf("%i", &populacao1);
  printf("Digite a Area (km²): ");
    scanf("%f", &area1);
  printf("Digite o PIB: ");
    scanf("%f", &pib1);
  printf("Digite o numero de pontos Turisticos: ");
    scanf("%i", &pturistico1);

  printf("\nCadastro concluido\n");

  printf("\nCarta: 2\n");

  printf("Digite a sigla do Estado (Ex.: P,N,H): ");
    scanf(" %c", &estado2);
  printf("Digite o Codigo da Carta (Ex.:P01): ");
    scanf("%s", codigo2);
  printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade2);
  printf("Digite a Populacao: ");
    scanf("%i", &populacao2);
  printf("Digite a Area (km²): ");
    scanf("%f", &area2);
  printf("Digite o PIB: ");
    scanf("%f", &pib2);
  printf("Digite o numero de pontos Turisticos: ");
    scanf("%i", &pturistico2);
  
  printf("\nCadastro concluido\n");

  // Área para exibição dos dados da cidade

  printf("\n----------------------------------------------------\n");
  printf("\nAs Seguintes Cartas foram Cadastradas:\n");

  printf("\nCarta: 1\n");

  printf("Estado: %c\n",estado1);
  printf("Codigo da Carta: %s\n",codigo1);
  printf("Cidade: %s\n",cidade1);
  printf("Populacao: %i\n",populacao1);
  printf("Area (km²): %lf\n",area1);
  printf("PIB: %lf\n",pib1);
  printf("Pontos Turisticos: %i\n",pturistico1);

  printf("\nCarta: 2\n");

  printf("Estado: %c\n",estado2);
  printf("Codigo da Carta: %s\n",codigo2);
  printf("Cidade: %s\n",cidade2);
  printf("Populacao: %i\n",populacao2);
  printf("Área (km²): %lf\n" ,area2);
  printf("PIB: %lf\n",pib2);
  printf("Pontos Turisticos: %i\n",pturistico2);

  printf("\n----------------------------------------------------\n");

return 0;
}
