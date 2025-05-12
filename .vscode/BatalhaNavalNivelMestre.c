#include <stdio.h>
#define Tabuleiro 10
#define linhaCentro 2 //Cruz
#define colunaCentro  2 //Cruz
#define linhaCentro1 2 //Cone
#define colunaCentro1 7 //Cone
#define linhaCentro2 6 //Octaedro
#define colunaCentro2 7//Octaedro

int main(){
    char pergunta;
    char Cabecalho[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int NaviosHorizontal[3] = {3,3,3};
    int NaviosVertical[3] = {3,3,3};
    int NavioDiagonal1[3] = {3,3,3};
    int NavioDiagonal2[3] = {3,3,3};
    int tabuleiro[Tabuleiro][Tabuleiro] = {0};
    int Cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    int Cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
//Movimento dos Navios
    int linhaV = 0, colunaV = 3;// navio vertical
    int linhaH = 1, colunaH = 2;// navio horizontal
    int linhaD = 6, colunaD = 6;// navio diagonal 1
    int linhaG = 2, colunaG = 7;// navio diagonal 2
//Explicação
printf("1 - Área da habilidade Cruz\n");
printf("2 - Área da habilidade Cone\n");
printf("3 - Área da habilidade Octaedro\n");
printf("3 - Parte de navios comuns (no modo sem habilidade)\n");
printf("Deseja Utilizar as habilidades especiais?(s/n) \n");
scanf(" %c", &pergunta);

if(pergunta == 's' || pergunta == 'S'){

//Habilidades Especiais 
    //Movimento da Cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linhaTabuleiro = linhaCentro - 2 + i;
            int colunaTabuleiro = colunaCentro - 2 + j;
            
            if (linhaTabuleiro >= 0 && linhaTabuleiro < Tabuleiro &&
                colunaTabuleiro >= 0 && colunaTabuleiro < Tabuleiro &&
                Cruz[i][j] == 1) {
                tabuleiro[linhaTabuleiro][colunaTabuleiro] = 1; // Valor 1 para Cruz
            }
        }
    }
//Movimento do Cone
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        int linhaTabuleiro = linhaCentro1 - 2 + i;
        int colunaTabuleiro = colunaCentro1 - 2 + j;
        if (linhaTabuleiro >= 0 && linhaTabuleiro < Tabuleiro &&
            colunaTabuleiro >= 0 && colunaTabuleiro < Tabuleiro &&
            Cone[i][j] == 1) {
            tabuleiro[linhaTabuleiro][colunaTabuleiro] = 2; // Valor 2 para Cone
        }
    }
}
//Movimento do Octaedro
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        int linhaTabuleiro = linhaCentro2 - 2 + i;
        int colunaTabuleiro = colunaCentro2 - 2 + j;
        
        if (linhaTabuleiro >= 0 && linhaTabuleiro < Tabuleiro &&
            colunaTabuleiro >= 0 && colunaTabuleiro < Tabuleiro &&
            octaedro[i][j] == 1) {
            tabuleiro[linhaTabuleiro][colunaTabuleiro] = 3; // Valor 1 para Octaedro
        }
    }
}


        printf("----------------------------------Tabuleiro Naval--------------------------------\n");
        //Cabeçalho
        printf("\t");
        for(int i = 0; i < 10; i++){
            printf("%c\t", Cabecalho[i]);
        }
        printf("\n");
    
        //Primeiro Linha até 10
        for(int i = 0; i < Tabuleiro; i++){
        printf("%d\t", i + 1);
            for(int j = 0; j < Tabuleiro; j++){
                printf("%d\t", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }else{
          
    int linhaV = 4, colunaV = 7;// navio vertical
    int linhaH = 1, colunaH = 2;// navio horizontal
    int linhaD = 6, colunaD = 6;// navio diagonal 1
    int linhaG = 2, colunaG = 7;// navio diagonal 2

    //Navio Vertical
    if (linhaV + 3 <= Tabuleiro) {
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = NaviosVertical[i];}
    }else{printf("Navio Vertical Fora do Limite!\n"); return 0;}
    
    //Navio Horizontal
    if (linhaH + 3 <= Tabuleiro){
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = NaviosHorizontal[i];}
    }else{printf("Navio Horizontal Fora do Limite!\n"); return 0;}
    
    //Navio Diagonal 1
    if (linhaD + 3 <= Tabuleiro && colunaD + 3 <= Tabuleiro) {
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaD + i][colunaD + i] = NaviosHorizontal[i];}
    }else{printf("Navio Diagonal 1 Fora do Limite!\n"); return 0;}
  //Navio Diagonal 2
  if (linhaG + 3 <= Tabuleiro && colunaG + 3 <= Tabuleiro) {
  for(int i = 0; i < 3; i++){
    tabuleiro[linhaG + i][colunaG + i] = NaviosHorizontal[i];}
}else{printf("Navio Diagonal 2 Fora do Limite!\n"); return 0;}
    
        printf("                                  Tabuleiro Naval\n");
        //Cabeçalho
        printf("\t");
        for(int i = 0; i < 10; i++){
            printf("%c\t", Cabecalho[i]);
        }
        printf("\n");
    
        //Primeiro Linha até 10
        for(int i = 0; i < Tabuleiro; i++){
        printf("%d\t", i + 1);
            for(int j = 0; j < Tabuleiro; j++){
                printf("%d\t", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    }