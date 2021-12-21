/*Faça um programa que verifique quantas vezes um número é divisível por outro. A função deve receber dois parâmetros, 
o dividendo e o divisor. Ao ler o divisor, é importante verificar se ele é menor que o dividendo. No final imprima o resultado.*/
#include <iostream>
using namespace std;

int numDivisivel(int dividendo, int divisor){
	int contador=1;
	while(dividendo%divisor>0){
		dividendo=dividendo%divisor;
		cout<<dividendo;
		contador++;
	}
	return contador;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int dividendoInf, divisorInf;
	
	cout<<"Informe o dividendo:"<<endl;
	cin>>dividendoInf;
	cout<<"Informe o divisor:"<<endl;
	cin>>divisorInf;
	if(divisorInf<=dividendoInf){
		//chama o procedimento a função e imprime o resultado
		printf("O número %d é divisivel por %d: %d vez(es)", dividendoInf, divisorInf, numDivisivel(dividendoInf, divisorInf));
	}else{
		cout<<"divisor não pode ser maior que o dividendo"<<endl;
	}
    system("pause");	
	return 0;
}
