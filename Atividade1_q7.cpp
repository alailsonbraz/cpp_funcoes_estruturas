// Este programa verifica se um número é primo
// Um número primo, é um número inteiro positivo, que só é divisível por ele próprio e por 1 
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
  
  printf("Insira um número inteiro positivo: ");
  scanf("%d", &n);

  if(primo(n)){
  	printf("O número é Primo!");
  }else{
  	printf("O número não é Primo!");
  }

  return 0;
}
