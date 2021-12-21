/*Crie um programa que guarde num array 10 números inteiros recebidos 
do utilizador e que por intermédio de uma função, copie para um novo array apenas as posições 
ímpares do array inicial. Imprima os dois arrays no ecrã. Nota: Utilize apenas apontadores para manipular os arrays*/
#include <iostream>
using namespace std;
#define MAX 10

void numImpar(int *vetA, int *vetB){
	int j=0;
	for(int i=1; i<MAX; i+=2){
		*(vetB + j) = *(vetA + i);
		j++;	
		}
	}	

int main(){
	setlocale(LC_CTYPE, "Portuguese");
		
	int vetInf[MAX], vetImpar[5];
	
	int *ptrVet=vetInf;
	int *ptrVetImp=vetImpar;
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe um número da posição "<<i<<endl;
		cin>>vetInf[i];
	}
	
	numImpar(ptrVet, ptrVetImp);
	
	cout<<"Vetor informado"<<endl;
	for(int i=0; i<MAX; i++){
		cout<< *(ptrVet + i)<< " ";
	}
	cout<<""<<endl;
	cout<<"Vetor Impar"<<endl;
	for(int i=0; i<5; i++){
		cout<< *(ptrVetImp + i)<< " ";
	}
	
    system("pause");	
	return 0;
}
