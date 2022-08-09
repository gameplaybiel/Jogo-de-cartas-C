#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
		 
int main()
{
   	int num, enter;
   	char jog;
	
	printf("========================\n");
	printf("|       Blackjack      |\n");
	printf("========================\n");
	
	printf("BEM VINDO AO JOGO DE CARTAS\n");
	
	printf("|==============================|\n");
	
	printf("Insira o nome do jogador: ");
	scanf("%c\n", &jog);
	
	printf("As instrucoes do jogo:\n");
	printf("Cada adversario deve jogar com determinadas cartas para atingir o objetivo do jogo.\n");
	printf("As cartas podem ser compradas com os limites da compra de carta.");
	printf("A carta deve gerar em qualquer valores aleatorios.\n");
	printf("A pontuacao que atinge 21 pontos, o adversario VENCE o jogo.\n");
	printf("Caso se a pontuacao ultrapasse 21 pontos, o adversario PERDE o jogo.\n");
	printf("Se a pontacao ultrapassar 21 pontos, o jogo se ENCERRA.\n");
	
	
	printf("Pressione o enter pra comecar\n", enter);
	 
	printf(" =================\n");
    printf("||               ||\n");                                                                                       
	printf("||               ||\n");   srand(time(NULL));                                                                    
	printf("||               ||\n");   char carta[24] = {'1', '2', '3', '4','5', '6','7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18','19','20','21', 'J', 'Q', 'K'};   
	printf("||               ||\n");   char naipes[24][2] = {"Espadas","Paus", "Copas", "Ouros"};                            
	printf("||               ||\n");   printf("A carta: %c\n", carta[rand()%24], naipes[rand()%2]);                          
	printf("||               ||\n");
	printf("||               ||\n");
	printf("||               ||\n");                                                                                                                                                                                                                                                                 
	printf(" =================\n\n");
	
	if(num < 21){
		printf("GANHOU o jogo!\n");
	}
	 if(num > 21) {
		printf("PERDEU o jogo!\n");
    }
    printf(" ====================\n");
	printf("||   FIM DO JOGO!   ||\n");
	printf(" ===================\n");
    
	
    return 0;
}
