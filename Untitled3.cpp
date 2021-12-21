#include <iostream>
using namespace std;

#define MAX 4

int* numerosImpares(int *a){
	int i,arrayB[MAX/2];
	for (i=0; i<MAX; i++) { 
	    if (a[i] %2==1) {
	        arrayB[i]=a[i];		
	    }
	}
	return arrayB;
}
int main(){
	int i,arrayA[MAX],*arrayB;
	for (i=0;i<MAX;i++){
		cout<<"Insira o valor da posicao "<<i<<": ";
		cin>>arrayA[i];
	}
		cout<<"Array introduzido: ";
	for (i=0;i<MAX;i++){
		cout<<arrayA[i]<<" | ";
	}
	cout<<"\nNumeros impares: ";
	A
	arrayB=numerosImpares(arrayA);
	cout<<arrayB[0];
	return 0;	
}

