#include<iostream>
using namespace std;

void maxmin (int *vet, int *maior, int *menor){
	int maiorMenor[2];
	maiorMenor[0]=vet[0];
	maiorMenor[1]=vet[0];
	
		for(int i=0; i<5; i++){
			if(vet[i] > maiorMenor[0]){
			maiorMenor[0]=vet[i];	
			}
			if(vet[i] < maiorMenor[1]){
			maiorMenor[1]=vet[i];	
			}
		}
		*maior=maiorMenor[0];
		*menor=maiorMenor[1];
}


int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vetInt[5];
	int maiorValor, menorValor;
	
	
	cout<<"Informe 5 n�meros inteiros:"<<endl;
	for(int i=0; i<5; i++){
		cout<<"Informe o n�mero "<<i+1<<endl;
		cin>>vetInt[i];
	}
	
	maxmin(vetInt, &maiorValor, &menorValor);
	
	printf("O maior n�mero �: %d \n", maiorValor);
	printf("O menor n�mero �: %d \n", menorValor);
}
