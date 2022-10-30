#include <iostream>



int main(int argc, char** argv) {
	
	int numerosecreto = 50;
	int chute;
	
	printf("\n \n*********************************************");
	printf("\n \n** Ola, seja bem vindo ao jogo de adivinha **");
	printf("\n \n*********************************************");
	
	printf("\n Qual e  o seu chute? ");
	scanf("%d", &chute);
	
	printf("\n Seu chute foi %d.", chute);
	
	if(chute == numerosecreto){
			printf("\n Parabens, voce ganhou");
	}else{
		printf("\n Ops!!, voce errou!!");
	}
	
	

	
	
	return 0;
}
