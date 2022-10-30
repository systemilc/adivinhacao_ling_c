#include <iostream>



int main(int argc, char** argv) {
	
	int numerosecreto = 50;
	int chute;
	

	
	printf("\n \n*********************************************");
	printf("\n \n** Ola, seja bem vindo ao jogo de adivinha **");
	printf("\n \n*********************************************");
	
	for(int i = 1; i<=3; i++){
		printf("\n Tentativa %d de 3\n", i);
		printf("\n Qual e  o seu chute? ");
		scanf("%d", &chute);
		
		printf("\n Seu chute foi %d.", chute);
		int acertou = chute == numerosecreto;
			if(acertou){
			printf("\n Parabens, voce ganhou");
			}
		
			else{
			int maior = chute > numerosecreto;
			if(maior){
			printf("\n Ops!!, voce errou!!");
			printf("\n seu chute foi maior que o numero secreto");
			} else{
			printf("\n Ops!!, voce errou!!");
			printf("\n seu chute foi menor que o numero secreto ***");
			}
		
			}
	}
	

	
	

	
	
	return 0;
}
