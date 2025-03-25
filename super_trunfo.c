#include <stdio.h>
int main(){
//Definir As Variaveis
char nomedacidade[50], nomedacidade2[50], codigodacarta[50], estado[20];
int  pontosturis;
float area, PIB, populacao;

//Definindo Os Dados Das Cartas

printf("Bem-Vindo ao Super-Trunfo \n");
printf("Não Coloque Espaço entre os Caracteres \n");
printf("Carta 1 \n");
printf("Insira os Dados da Carta 1: \n");
printf("Insira Uma Letra entre A-H para Definir um Estado: \n");
scanf("%s", estado);
printf("Nome da Cidade \n");
scanf(" %s", nomedacidade);
printf("Defina o Codigo da Carta, entre 01-04: \n");
scanf("%s",codigodacarta);
printf("População de %s\n", nomedacidade);
scanf("%f", &populacao);
printf("Quantos Pontos Turisticos? \n");
scanf("%d", &pontosturis);
printf("Tamanho da Area de %s\n", nomedacidade);
scanf("%f", &area);
printf("PIB em Bilhões de %s\n", nomedacidade);
scanf("%f", &PIB);

printf("Carta 1 \n");
printf("Estado: %s\n", estado);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("Codigo da Carta: %s%s\n", estado, codigodacarta);
printf("População: %.0f\n", populacao);
printf("Pontos Turisticos: %d\n", pontosturis);
printf("Área: %.0f km2 \n", area);
printf("PIB: %.2f bilhoes\n", PIB);

//Dados da Carta 2

printf("Carta 2 \n");
printf("Insira os Dados da Carta 2: \n");
printf("Insira Uma Letra entre A-H para Definir um Estado: \n");
scanf("%s", estado);
printf("Nome da Cidade \n");
scanf(" %s", nomedacidade2);
printf("Defina o Codigo da Carta, entre 01-04: \n");
scanf("%s",codigodacarta);
printf("População de %s\n", nomedacidade2);
scanf("%f", &populacao);
printf("Quantos Pontos Turisticos? \n");
scanf("%d", &pontosturis);
printf("Tamanho da Area de %s\n", nomedacidade2);
scanf("%f", &area);
printf("PIB em Bilhões de %s\n", nomedacidade2);
scanf("%f", &PIB);

printf("Carta 2 \n");
printf("Estado: %s\n", estado);
printf("Nome da Cidade: %s\n", nomedacidade2);
printf("Codigo da Carta: %s%s\n", estado, codigodacarta);
printf("População: %.0f\n", populacao);
printf("Pontos Turisticos: %d\n", pontosturis);
printf("Área: %.0f km2 \n", area);
printf("PIB: %.2f bilhoes\n", PIB);

return 0;

}