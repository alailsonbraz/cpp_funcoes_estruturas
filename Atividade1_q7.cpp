// Este programa verifica se um n�mero � primo
// Um n�mero primo, � um n�mero inteiro positivo, que s� � divis�vel por ele pr�prio e por 1 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int contador=0;

bool primo(int x){
	for (int i = 1; i <= x; i++) {
  		if (x % i == 0) { 
    	 contador++;
    	}
  	}
  	if (contador == 2)
    	return true;
 	else
    	return false;
}

int main() {
	
 setlocale(LC_CTYPE, "Portuguese");
  
  int n; 
  
  printf("Insira um n�mero inteiro positivo: ");
  scanf("%d", &n);

  if(primo(n)){
  	printf("O n�mero � Primo!");
  }else{
  	printf("O n�mero n�o � Primo!");
  }

  return 0;
}
