#include <stdio.h>

int main(){
	int x, y;
	int *ptr;
	x = 5;
	y = 25;
	ptr = &x; // & endereço de x
	printf("O valor da variavel X: %d\n", x);
	printf("O valor de *ptr: %d\n", *ptr);// derreferenciando um ponteiro
	printf("O valor de ptr: %d\n", ptr);
	printf("O endereço da variável x: %d\n", &x);
	*ptr = 10; // usando de referencia no "lado esquerdo" de uma atribuição -> 	x = 10
	printf("Agora, *ptr vale: %d\n", *ptr);
	printf("Agora, X vale: %d\n", x);
	
	// Alteração da posição de memória apontada por ptr
	ptr = &y;
	printf("O valor de ptr: %d\n", ptr);
	*ptr = 100;
	printf("Agora, X vale: %d e Y vale: %d \n", x, y);		
}

