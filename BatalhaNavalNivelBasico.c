#include <stdio.h>
int main(){
//Variaveis
char Cabecalho[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Cabeçalho
int tabuleiro[10][10] = {0}; //todos com 0 posição agua
int navioHorizontal[3] = {3, 3, 3};
int navioVertical[3] = {3, 3, 3};

//Linhas e Colunas
int linhaL = 4, colunaL = 6; //Horizontal
int linhaP = 1, colunaP = 8; //Vertical

//Posição dos Navios/Navio Horizontal
for(int i = 0; i < 3; i++){
    tabuleiro[linhaL][colunaL + i] = navioHorizontal[i];
}

//Navio Vertical
for(int i = 0; i < 3; i++){
    tabuleiro[linhaP + i][colunaP] = navioVertical[i];
}

printf("                            ***Tabuleiro Naval***\n");

//Criação do Cabeçalho
printf("\n\t");
    for (int i = 0; i < 10; i++) {
        printf("%c\t", Cabecalho[i]);
    }
    printf("\n");

//Criação do Tabuleiro
for(int i = 0; i < 10; i++){
    printf("%d\t", i + 1);
    for(int j = 0; j < 10; j++){
    printf("%d\t", tabuleiro[i][j]);
}
printf("\n");
}

    return 0;
}