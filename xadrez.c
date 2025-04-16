#include <stdio.h>
int main() { //Abre main
int opcao, opcao2, i = 1, t = 1, c = 1; //Variaveis

    printf("***Bem Vindo Ao Jogo De Xadrez***\n");

//Abrindo a Estrutura de Repetição
do { //Abre loop do/while
        printf("(1) Para Começar O Jogo\n");
        printf("(2) Para Ver As Regras\n");
        printf("(3) Para Sair\n");
        printf("Escolha Uma Opção: ");
        scanf("%d", &opcao);

switch (opcao) {//Abre Switch Principal
case 1:
        printf("Qual Peça Gostaria de Mover?\n");
        printf("(1) Para Mover o Bispo\n");
        printf("(2) Para Mover a Rainha\n");
        printf("(3) Para Mover a Torre\n");
        printf("(4) Para Mover o Cavalo\n");
        scanf("%d", &opcao2); 

if (opcao2 < 1 || opcao2 > 4) {
        printf("Opção de peça inválida!\n");
}else{//Caso a opção seja Valida
switch (opcao2) {// Switch das peças
case 1: printf("Você escolheu mover o Bispo\n"); 
        printf("Movendo Bispo Para Diagonal Direita 5 Vezes..\n");
while (i <= 5) {
    printf("Casa %d: Cima, Direita\n", i);
    i++;}
break;
case 2: printf("Você escolheu mover a Rainha\n"); 
        printf("Movendo Rainha para Esquerda 8 Vezes..\n");
for (int r = 1; r <= 8; r++) {
    printf("Casa %d: Esquerda\n", r);
} break;

case 3: printf("Você escolheu mover a Torre\n"); 
        printf("Movendo Torre 5 Casas para Direita..\n");
do {
    printf("Casa %d: Direita\n", t);
    t++;
}while (t <= 5); break;
case 4: printf("Você escolheu mover o Cavalo\n");
        printf("Movendo o Cavalo..\n");

for(int a = 1; a <= 2; a++){ //Imprimindo Dois Movimentos para Baixo utilizando loop externo
    printf("Casa %d: Baixo\n", a);
}

do {  

    printf("Casa %d: Esquerda\n", c); // Imprimindo um Movimento para Esquerda fechando loop interno e o movimento em L
c++;
 
}while (c <= 1);

        }  //Fecha Switch das Peças
            }   //Fecha else           
        
break;
case 2:
    printf("Regras do Jogo:\n");
    printf("- O Bispo anda nas diagonais.\n");
    printf("- A Rainha anda nas diagonais, linhas e colunas.\n");
    printf("- A Torre anda apenas em linhas e colunas.\n");
    printf("- O Cavalo Anda Em Movimento De L(Exemplo: Dois Movimentos para Cima e um Para Direita)\n");
break;
case 3:
    printf("Saindo do jogo...\n");
break;

default:
    printf("Opção inválida! Tente novamente.\n"); }//Fechando switch principal
        
        }while (opcao != 3);// fechando do/while
        




    
        return 0;
}//Fecha main