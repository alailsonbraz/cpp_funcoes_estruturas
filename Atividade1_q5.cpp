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
		cout<<"-----Selecione as op��es-----"<<endl;
		cout<<"1 - SOMA"<<endl;
		cout<<"2 - SUBTRA��O"<<endl;
		cout<<"3 - DIVIS�O"<<endl;
		cout<<"4 - MULTIPLICA��O"<<endl;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	cout<<"Informe o primeiro n�mero:"<<endl;
	cin>>num1;
	cout<<"Informe o segundo n�umero:"<<endl;
	cin>>num2;
	
	menuOpcao();
	
	cout<<"Informe a opera��o:"<<endl;
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
				cout<<"Op��o inv�lida!"<<endl;
				break;
		}

	system("pause");				
	return 0;
}
