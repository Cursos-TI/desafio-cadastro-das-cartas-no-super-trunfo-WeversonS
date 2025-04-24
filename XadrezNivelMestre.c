#include <stdio.h>
void MovimentoTorre(int t){ //Movimento da Torre em Recursão
if (t > 0){
    MovimentoTorre(t - 1);
    printf("Casa %d: Direita\n", t);}}
        
void MovimentoRainha(int r){ //Moviemtno da Rainha em Recursão
if (r > 0){
    MovimentoRainha(r - 1);
    printf("Casa %d: Esquerda\n", r);}}
void MovimentoBispo(){
    int p = 1;
    for(int b = 1; b <= 5; b++){
        while (p <= 5){
        printf("Casa %d: Cima, ", b);
        printf("Direita\n", p);
        p++;
break; } } }

void MovimentoCavalo() {
    int movimento = 1;

    for (int cima = 1; cima <= 2; cima++) { // Duas casas para cima
        printf("Casa %d: Cima\n", movimento);
        movimento++;

        for (int direita = 1; direita <= 1 && cima == 2; direita++) { // Uma casa para direita
            printf("Casa %d: Direita\n", movimento);
            movimento++;
        }
    }
}
int main() { //Abre main
int opcao, opcao2, numerot = 5, numeror = 8, i; //Variaveis

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
MovimentoBispo();

break;
case 2: printf("Você escolheu mover a Rainha\n"); 
        printf("Movendo Rainha para Esquerda 8 Vezes..\n");
MovimentoRainha(numeror);
break;

case 3: printf("Voce Escolheu Mover a Torre\n");
MovimentoTorre(numerot);

break;

case 4: printf("Você escolheu mover o Cavalo\n");
        printf("Movendo o Cavalo..\n");
MovimentoCavalo();

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
    printf("Opção inválida! Tente novamente\n"); }//Fechando switch principal
        
        }while (opcao != 3);// fechando do/while
        
        return 0;
}//Fecha main