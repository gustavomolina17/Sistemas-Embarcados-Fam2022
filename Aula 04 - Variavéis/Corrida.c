// %d --> inteiro
// %f --> float
// %c --> caracter
// %s --> String (vetor de caracter)
// %% --> Para exibir % na tela

#include <stdio.h>

int main(void){ //ponto de partida

int evento = 17;
char corrida = 'C';
float tempo = 18.9;	

printf("O tempo do vitorioso na eliminatoria %c",corrida);
printf("\nda competicao %d foi %.2f",evento,tempo);
	
return 1;	
}
