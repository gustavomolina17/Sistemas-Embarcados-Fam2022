# include <stdio.h>

int main(){ // ponto de partida do meu programa

// Declaração das variáveis

int dia,mes,ano;

printf("Digite a data do seu nascimento (dd/mm/aa): "); // Interação com o usuário

scanf("%d%d%d", &dia, &mes,&ano); // Utilizamos %d (3 vezes) para indicar que utilizaremos 3 variáveis do tipo inteiro

printf("Voce nasceu em %d/%d/%d\n",dia,mes,ano);
	
		
	
}
