/*Fa�a um programa que verifique quantas vezes um n�mero � divis�vel por outro. A fun��o deve receber dois par�metros, 
o dividendo e o divisor. Ao ler o divisor, � importante verificar se ele � menor que o dividendo. No final imprima o resultado.*/
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
		//chama o procedimento a fun��o e imprime o resultado
		printf("O n�mero %d � divisivel por %d: %d vez(es)", dividendoInf, divisorInf, numDivisivel(dividendoInf, divisorInf));
	}else{
		cout<<"divisor n�o pode ser maior que o dividendo"<<endl;
	}
    system("pause");	
	return 0;
}
