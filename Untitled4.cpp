#include <iostream>
using namespace std;

// Verifica se um número é primo
bool primo(int num)
{
	int contador = 0, i;
	for (i = 1; i <= num; i++) {
		if (num % i == 0) { 
	    	contador++;
	    }
	}
	if(contador == 2)
		return true;
	else
		return false;
}

int main() { 
	int sup, inf;
	
	printf("Limite Inferior: ");
	scanf("%d", &inf);
	
	printf("Limite Superior: ");
	scanf("%d", &sup);
	while(inf <= sup)
	{
		primo(inf);
		// Se for primo insere num vetor
		inf++;	
  	}
  	
  return 0;
}

