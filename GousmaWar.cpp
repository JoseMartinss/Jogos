#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// informações de cada gosma




int furia [4] = {1,1,1,1}; //posi 0 e 1:( J1) posi 2 e 3:( J2), tipo os dedos
int ativa [4] = {1,1,1,1}; //0 e 1 (J1), 2 e 3 (J2), tipo as mãos


//função p/ verificar se tem alguma destruida ou não
void verificarDestruicao (int furia[], int ativa []){
	
	if (furia[0]>5 && ativa[0]==1){
		ativa [0] = 0;
		printf(" Gousma 1 do jogador 1 foi Destruída! \n");
	}
	if (furia [1]>5 && ativa [1]==1){
		ativa [1] = 0;
		printf(" Gousma 2 do jogador 1 foi Destruída! \n");
	}
	if (furia[2]>5 && ativa [2] == 1){
		ativa [2] = 0;
		printf(" Gousma 1 do jogador 2 foi Destruída! \n");
	}
	if (furia [3]> 5 && ativa [3] == 1){
		ativa [3] = 0;
		printf(" Gousma 2 do jogador 3 foi Destruída! \n");
	}
}

//função p mostrar na tela a Furia e o estada de cada Gousma
void exibirEstado (int furia[], int ativa[]){
	
	printf("\n+======================+\n");
    printf("  |   ESTADO DO JOGO     |\n");
    printf("  +======================+\n");
    
    
// para o jogador 1
if (ativa[0] == 1)
	printf(" Jogador 1 - Gousma 1: Fúria %d \n", furia [0]);
else
	printf(" Jogador 1 - Gousma 1: DESTRUÍDA \n");

if (ativa[1] == 1)
	printf(" Jogador 1 - Gousma 2: Fúria %d \n", furia [1]);
else
	printf(" Jogador 1 - Gousma 2: DESTRUÍDA \n");

printf("\n 0--------------------------------------------0 \n");

// para o jogador 2
if (ativa[2] == 1)
	printf(" Jogador 2 - Gousma 1: Fúria %d \n", furia [2]);
else
	printf(" Jogador 2 - Gousma 1: DESTRUÍDA \n");

if (ativa[3] == 1)
	printf(" Jogador 2 - Gousma 2: Fúria %d \n", furia [3]);
else
	printf(" Jogador 2 - Gousma 2: DESTRUÍDA \n");
	

printf("\n ========================================= \n\n");

}


