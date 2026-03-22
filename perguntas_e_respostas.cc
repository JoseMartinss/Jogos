#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	
	//jogo perguntas e respostas
	
	
	int resposta; //var para ler a resposta do jogador
	int continuar; //var para limpar a tela apos apertar enter
	int dnv; //var para jogar novamente
	
//criando a repeticao p/ jogar novamente

do{
	
	printf("  +--------------------------------------+\n");
    printf("  ¦         PERGUNTAS E RESPOSTAS         ¦\n");
    printf("  +--------------------------------------+\n\n");
	
	
	printf("          === DESCRIÇÃO === \n");
	printf(" Neste jogo será apresentado 5 perguntas, cada uma com 4 alternativas \n você deve digitar o número da alternativa correta e tentar acertar o máximo de perguntas!\n\n");
	
	// Para limpar a tela apos pressionar Enter:
	
	
	printf("\nPressione Enter para continuar\n");
	scanf("%c", &continuar);
	system ("cls");

	//primeira pergunta.
	
	printf("  +--------------------------------------+\n");
    printf("  ¦           PRIMEIRA PERGUNTA          ¦\n");
    printf("  +--------------------------------------+\n\n");
    
    printf(" Em Star Wars, qual é o nome da estação espacial capaz de destruir planetas?\n");
    printf(" 1 - Star Forge \n 2 - Eclipse \n 3 - Estrela da Morte \n 4 - Base Starkiller \n");
    printf("\nDigite o número da sua resposta: ");
    scanf("%d", &resposta);
    
    	if(resposta == 3){
			printf("\n RESPOSTA CORRETA! Pelo visto alguém assitiu Star Wars. \n \n");
		}
		else if (resposta < 1 || resposta > 4){
			printf(" \n RESPOSTA INCORRETA! \n Pelo visto temos um delinquente querendo indicar números diferentes! \n Que bom que eu não deixei você escapar! \n Resposta certa: Estrela da Morte \n \n");
		}
		else {
			printf(" \n *RESPOSTA INCORRETA!* \n\n  Resposta certa: Estrela da Morte \n\n Alguém não assistiu ao filme... \n \n");
			
		}
		
		
	//para limpar a tela e ir pra prox. pergunta
	printf("\nPressione ' c ' para continuar\n");
	scanf(" %c", &continuar);
	system("cls");	
			
		
		//segunda pergunta
	
	printf("  +--------------------------------------+\n");
    printf("  ¦            SEGUNDA PERGUNTA          ¦\n");
    printf("  +--------------------------------------+\n\n");
    
    printf(" Segundo a creepypasta original, quem seria o Herobrine?\n");
    printf(" 1 - O Notch \n 2 - Um NPC secreto da Mojang \n 3 - Um bug do servidor \n 4 - O suposto irmão falecido de Notch \n");
    printf("\nDigite o número da sua resposta: ");
    scanf("%d", &resposta);
    
    	if(resposta == 4){
			printf("\n RESPOSTA CORRETA! Época boa né?. \n \n");
		}
		else if (resposta < 1 || resposta > 4){
			printf(" \n RESPOSTA INCORRETA! \n Pelo visto temos um delinquente querendo indicar números diferentes! \n Que bom que eu não deixei você escapar! \n Resposta certa: Estrela da Morte \n \n");
		}
		else {
			printf(" \n RESPOSTA INCORRETA! \n  Resposta certa: O suposto irmão falecido de Notch \n *Provavelmente voce nasceu antes de 2006 ou depois de 2010.* \n \n");
			
		}
		
			//para limpar a tela e ir pra prox. pergunta
	printf("\nPressione ' c ' para continuar\n");
	scanf(" %c", &continuar);
	system("cls");	
		
			//terceira pergunta
	
	printf("  +--------------------------------------+\n");
    printf("  ¦           TERCEIRA PERGUNTA          ¦\n");
    printf("  +--------------------------------------+\n\n");
    
    printf(" Sobre a série Sandman, Qual é o verdadeiro nome do personagem conhecido como Sonho na série?\n");
    printf(" 1 - Somnium \n 2 - Morfeus \n 3 - Dream \n 4 - Azazel \n");
    printf("\nDigite o número da sua resposta: ");
    scanf("%d", &resposta);
    
    	if(resposta == 2){
			printf("\n RESPOSTA CORRETA! Série muito boa!. \n \n");
		}
		else if (resposta < 1 || resposta > 4){
			printf(" \n RESPOSTA INCORRETA! \n Pelo visto temos um delinquente querendo indicar números diferentes! \n Que bom que eu não deixei você escapar! \n Resposta certa: Estrela da Morte \n \n");
		}
		else {
			printf(" \n RESPOSTA INCORRETA! \n  Resposta certa: Morfeus \n *Recomendo assistir* \n \n");
			
		}
		
			//para limpar a tela e ir pra prox. pergunta
	printf("\nPressione ' c ' para continuar\n");
	scanf(" %c", &continuar);
	system("cls");	
		
			//quarta pergunta
	printf("  +--------------------------------------+\n");
    printf("  ¦           QUARTA PERGUNTA            ¦\n");
    printf("  +--------------------------------------+\n\n");
    
    printf(" Comendo determinado número de bananas você morre por radiação, que número é esse?\n");
    printf(" 1 - 100000000 \n 2 - 80000000 \n 3 - meio bananão grosso \n 4 - 18000 \n");
    printf("\nDigite o número da sua resposta: ");
    scanf("%d", &resposta);
    
    	if(resposta == 2){
			printf("\n RESPOSTA CORRETA! Temos um especialista em bananas aqui!. \n \n");
		}
		else if (resposta < 1 || resposta > 4){
			printf(" \n RESPOSTA INCORRETA! \n Pelo visto temos um delinquente querendo indicar números diferentes! \n Que bom que eu não deixei você escapar! \n Resposta certa: Estrela da Morte \n \n");
		}
		else {
			printf(" \n RESPOSTA INCORRETA! \n  Resposta certa: 80000000  \n \n");
			
		}
		
			//para limpar a tela e ir pra prox. pergunta
	printf("\nPressione ' c ' para continuar\n");
	scanf(" %c", &continuar);
	system("cls");	
		
			//quinta pergunta
	printf("  +--------------------------------------+\n");
    printf("  ¦           QUINTA PERGUNTA            ¦\n");
    printf("  +--------------------------------------+\n\n");
    
    printf("Qual personagem dos quadrinhos escolheu seu proprio ator nos cinemas?\n");
    printf(" 1 - Homem Aranha \n 2 - Batman \n 3 - Nick Fury \n 4 - Superman \n");
    printf("\nDigite o número da sua resposta: ");
    scanf("%d", &resposta);
    
    	if(resposta == 3){
			printf("\n RESPOSTA CORRETA! Muito bem!!. \n \n");
		}
		else if (resposta < 1 || resposta > 4){
			printf(" \n RESPOSTA INCORRETA! \n Pelo visto temos um delinquente querendo indicar números diferentes! \n Que bom que eu não deixei você escapar! \n Resposta certa: Estrela da Morte \n \n");
		}
		else {
			printf(" \n RESPOSTA INCORRETA! \n  Resposta certa: Nick Fury \n\n");
			
		}
		
			//para limpar a tela e ir pra prox. pergunta
	printf("\nPressione ' c ' para continuar\n");
	scanf(" %c", &continuar);
	system("cls");	

	printf("\n ** DESEJA JOGAR NOVAMENTE? **\n");
	printf("\n      1- SIM         2- NÃO      \n"    );
	printf("Escolha: ");
	scanf("%d", &dnv);
	
}
	while(dnv != 2);


	
	return 0;

}
