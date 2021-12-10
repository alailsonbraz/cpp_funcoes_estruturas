#include <iostream>	
using namespace std;

int num1, num2, op;

float soma(float x, float y){
		return x + y;
}
float subtracao(float x, float y){
		return x - y;
}
float divisao(float x, float y){
		return x / y;
}
float multiplicacao(float x, float y){
		return x * y;
}

void menuOpcao(){
		cout<<"-----Selecione as opções-----"<<endl;
		cout<<"1 - SOMA"<<endl;
		cout<<"2 - SUBTRAÇÃO"<<endl;
		cout<<"3 - DIVISÃO"<<endl;
		cout<<"4 - MULTIPLICAÇÃO"<<endl;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	cout<<"Informe o primeiro número:"<<endl;
	cin>>num1;
	cout<<"Informe o segundo núumero:"<<endl;
	cin>>num2;
	
	menuOpcao();
	
	cout<<"Informe a operação:"<<endl;
	cin>>op;
	
	switch(op){
			case 1:
				cout<< soma(num1, num2)<<endl;
				break;
			case 2:
				cout<< subtracao(num1, num2)<<endl;
				break;
			case 3:
				cout<< divisao(num1, num2)<<endl;
				break;
			case 4:
				cout<< multiplicacao(num1, num2)<<endl;
				break;
			default:
				cout<<"Opção inválida!"<<endl;
				break;
		}

	system("pause");				
	return 0;
}
