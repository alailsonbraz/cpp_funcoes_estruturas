/*Crie um programa que contenha umvetor de inteiros com tamanho 5. Utilizando
apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o
dobro de cada valor lido*/

#include <iostream>
using namespace std;

#define MAX 5

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vetInf[MAX];
	
	int *ptrVet=vetInf;
		
	for(int i=0; i<MAX; i++){
		cout<<"Informe o numero da posição " << i<<endl;
		cin>>*(ptrVet + i);
		
	}
	
	for(int i=0; i<MAX; i++){
		cout<<*(ptrVet +i) * 2<< " ";
	}

	return 0;
}
