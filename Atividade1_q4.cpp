#include <iostream>	
using namespace std;

int ano;

bool bissexto(int x){
		if((x%400==0)||(x%4==0)&&(ano%100!=0)){
			return true;
		}else{
			return false;
		}
}

void imprime(int y){
	if(bissexto(y)){
		cout<<"Bissexto!"<<endl;
	}else{
		cout<<"Não bissexto!"<<endl;
	}
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	cout<<"Informe o ano:"<<endl;
	cin>>ano;
	
	imprime(ano);

	system("pause");				
	return 0;
}
