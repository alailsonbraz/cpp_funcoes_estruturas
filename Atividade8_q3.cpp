/*Fa�a um programa que leia o saldo e a percentagem de reajuste de uma aplica��o 
financeira e imprima o novo saldo ap�s o reajuste. O c�lculo deve ser feito por uma fun��o.*/
#include <iostream>
using namespace std;

#define MAX 2

//imprime os nomes dos associados com mais dependentes
float ajusteAplicacao(float saldo, float perc){
	return saldo + (saldo * perc/100);
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float saldoInf, percInf;
	
	cout<<"Informe o saldo:"<<endl;
	cin>>saldoInf;
	cout<<"Informe a porcentagem de reajuste:"<<endl;
	cin>>percInf;
	
	
	//chama o procedimento a fun��o e imprime o resultado
	cout<<"O novo saldo �: "<< ajusteAplicacao(saldoInf, percInf)<<endl;
	
    system("pause");	
	return 0;
}
