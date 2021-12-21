/*Faça um programa que leia o saldo e a percentagem de reajuste de uma aplicação 
financeira e imprima o novo saldo após o reajuste. O cálculo deve ser feito por uma função.*/
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
	
	
	//chama o procedimento a função e imprime o resultado
	cout<<"O novo saldo é: "<< ajusteAplicacao(saldoInf, percInf)<<endl;
	
    system("pause");	
	return 0;
}
