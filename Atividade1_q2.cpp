#include <iostream>	
using namespace std;

int num;

void numPar(int x){
	if(x%2==0){
		cout<<"O n�mero � par"<<endl;	
	}else{
		cout<<"O n�mero � �mpar"<<endl;
	}
	
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	cout<<"Informe um n�mero"<<endl;
	cin>>(num);
	
	numPar(num);

	
	system("pause");				
	return 0;
}
