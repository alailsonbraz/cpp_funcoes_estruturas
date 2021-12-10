#include<iostream>
using namespace std;

int maior (int *vet){
	int maior=vet[0];
	for(int i=0; i<5; i++){
		if(vet[i] > maior){
			maior=vet[i];
		}
	}
	return maior;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vetInt[5];
	
	cout<<"Informe 5 números inteiros:"<<endl;
	for(int i=0; i<5; i++){
		cout<<"Informe o número "<<i+1<<endl;
		cin>>vetInt[i];
	}
	
	cout<<"O maior número é: "<<maior(vetInt)<<endl;
}
