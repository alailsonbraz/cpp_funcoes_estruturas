#include<iostream>
using namespace std;

void trocaNumeros (float *numA, float *numB){
	float numTemp;
	numTemp=*numA;
	*numA=*numB;
	*numB=numTemp;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float n1, n2;
	
	cout<<"Insira o primeiro número"<<endl;
	cin>>n1;
	
	cout<<"Insira o segundo número"<<endl;
	cin>>n2;
	
	trocaNumeros(&n1, &n2);
	
	cout<<"Após a troca: "<<endl;
	cout<<"numero1 = "<< n1<<endl;
	cout<<"numero2 = "<< n2<<endl;
}
