#include <stdio.h>
int main(){
//Definir As Variaveis
char nomedacidade[50], nomedacidade2[50], estado1[20], estado2[20], codigodacarta1[10], codigodacarta2[10];
int  pontosturis1, pontosturis2;
double area1, PIB1, populacao1, pibpercapita1, densidadepopulacional1;
double area2, PIB2, populacao2, pibpercapita2, densidadepopulacional2;


printf("Bem-Vindo ao Super-Trunfo \n");
printf("Não Coloque Espaço entre os Caracteres \n");
printf("Insira uma Letra para Cada Estado e Um Codigo para Cada Cidade \n");
printf("---Super-Trunfo--- \n");

//Dados da Carta 1
printf("Carta 1 \n");
printf("Insira os Dados da Carta 1: \n");
printf("Insira Uma Letra entre A-H para Definir um Estado: \n");
scanf("%s", estado1);
printf("Nome da Cidade \n");
scanf("%s", nomedacidade);
printf("Defina o Codigo da Carta, entre 01-04: \n");
scanf("%s",codigodacarta1);
printf("População de %s\n", nomedacidade);
scanf("%lf", &populacao1);
printf("Quantos Pontos Turisticos? \n");
scanf("%d", &pontosturis1);
printf("Tamanho da Area de %s\n", nomedacidade);
scanf("%lf", &area1);
printf("PIB de %s\n", nomedacidade);
scanf("%lf", &PIB1);

//Calculos
pibpercapita1 = PIB1 / populacao1;
densidadepopulacional1 = populacao1 / area1;

//Exibição das Cartas
printf("Carta 1 \n");
printf("Estado: %s\n", estado1);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("Codigo da Carta: %s\n", codigodacarta1);
printf("População: %.0lf\n", populacao1);
printf("Pontos Turisticos: %d\n", pontosturis1);
printf("Área: %.0lf km2 \n", area1);
printf("PIB: %.0lf\n", PIB1);
printf("PIB Per Capita da Cidade: %.0lf reais\n", pibpercapita1);
printf("Densidade Populacional de %s: %.0lf hab/km² \n", nomedacidade, densidadepopulacional1);



//Dados da Carta 2
printf("Carta 2 \n");
printf("Insira os Dados da Carta 2: \n");
printf("Insira Uma Letra entre A-H para Definir um Estado: \n");
scanf("%s", estado2);
printf("Nome da Cidade \n");
scanf(" %s", nomedacidade2);
printf("Defina o Codigo da Carta, entre 01-04: \n");
scanf("%s",codigodacarta2);
printf("População de %s\n", nomedacidade2);
scanf("%lf", &populacao2);
printf("Quantos Pontos Turisticos? \n");
scanf("%d", &pontosturis2);
printf("Tamanho da Area de %s\n", nomedacidade2);
scanf("%lf", &area2);
printf("PIB de %s\n", nomedacidade2);
scanf("%lf", &PIB2);

//Calculos
pibpercapita2 = PIB2 / populacao2;
densidadepopulacional2 = populacao2 / area2;

//Exibição das Cartas 2
printf("Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Nome da Cidade: %s\n", nomedacidade2);
printf("Codigo da Carta: %s\n", codigodacarta2);
printf("População: %.0lf\n", populacao2);
printf("Pontos Turisticos: %d\n", pontosturis2);
printf("Área: %.0lf km2 \n", area2);
printf("PIB: %.0lf\n", PIB2);
printf("PIB Per Capita da Cidade: %.0lf reais\n", pibpercapita2);
printf("Densidade Populacional de %s: %.0lf hab/km²\n", nomedacidade2, densidadepopulacional2);



return 0;

}