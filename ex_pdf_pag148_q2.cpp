#include <iostream>
using namespace std;

#define MAX 10

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float vetInf[MAX];
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o numero da posi��o " << i<<endl;
		cin>> vetInf[i];
	}
	
	for(int i=0; i<MAX; i++){
		cout<< &vetInf[i]<< " ";
	}

	return 0;
}
