/*Crie um programa que guarde num array 10 n�meros inteiros recebidos 
do utilizador e que por interm�dio de uma fun��o, copie para um novo array apenas as posi��es 
�mpares do array inicial. Imprima os dois arrays no ecr�. Nota: Utilize apenas apontadores para manipular os arrays*/
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
		cout<<"Informe um n�mero da posi��o "<<i<<endl;
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
