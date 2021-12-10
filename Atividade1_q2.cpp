#include <iostream>	
using namespace std;

int num;

void numPar(int x){
	if(x%2==0){
		cout<<"O número é par"<<endl;	
	}else{
		cout<<"O número é ímpar"<<endl;
	}
	
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	cout<<"Informe um número"<<endl;
	cin>>(num);
	
	numPar(num);

	
	system("pause");				
	return 0;
}
