/*Escreva um programa para mostrar o maior 
de dois números, utilizando uma função que
 recebe apontadores para esses 2 números e 
 retorna o apontador para o maior deles.*/
#include <iostream>
using namespace std;

int maiorNumero(int *n1, int *n2){
    if(&n1 > &n2){
    	return *n1;
	}else{
		return *n2;
	}
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int num1, num2;
	int *ptrNum1;
	int *ptrNum2;
	
	ptrNum1=&num1;
	ptrNum2=&num2;
	
	cout<<"Insira o primeiro número"<<endl;
	cin>>num1;
	cout<<"Insira o segundo número"<<endl;
	cin>>num2;
		
	cout<<"O maior número é "<<maiorNumero(ptrNum1, ptrNum2)<<endl;
	
    system("pause");	
	return 0;
}
