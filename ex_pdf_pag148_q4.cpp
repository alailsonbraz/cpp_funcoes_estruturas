/*Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de umvetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações.*/
#include <iostream>
using namespace std;
#define MAX 5

void atualizaValor(int *vet, int a){

	for(int i=0; i<MAX; i++){
		*(vet + i) = a;
	}	
}

int main(){
	setlocale(LC_CTYPE, "Portuguese");
		
	int vetInf[MAX]={1,2,3,4,5}, numInf;
	
	int *ptrVet=vetInf;
		
	cout<<"Informe um número"<<endl;
	cin>>numInf;
	
	atualizaValor(ptrVet, numInf);
	
	for(int i=0; i<MAX; i++){
		cout<< vetInf[i]<< " ";
	}

    system("pause");	
	return 0;
}
