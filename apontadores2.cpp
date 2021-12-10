#include <stdio.h>

int main(){
	int x, y;
	int *ptr;
	x = 5;
	y = 25;
	ptr = &x; // & endere�o de x
	printf("O valor da variavel X: %d\n", x);
	printf("O valor de *ptr: %d\n", *ptr);// derreferenciando um ponteiro
	printf("O valor de ptr: %d\n", ptr);
	printf("O endere�o da vari�vel x: %d\n", &x);
	*ptr = 10; // usando de referencia no "lado esquerdo" de uma atribui��o -> 	x = 10
	printf("Agora, *ptr vale: %d\n", *ptr);
	printf("Agora, X vale: %d\n", x);
	
	// Altera��o da posi��o de mem�ria apontada por ptr
	ptr = &y;
	printf("O valor de ptr: %d\n", ptr);
	*ptr = 100;
	printf("Agora, X vale: %d e Y vale: %d \n", x, y);		
}

