#include<iostream>
using namespace std;

void troca (float *a, float *b){
	float c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float n1, n2;
	
	cout<<"Insira o primeiro numerio"<<endl;
	cin>>n1;
	
	cout<<"Insira o segundo numerio"<<endl;
	cin>>n2;
	
	troca(&n1, &n2);
	
	cout<<"Após a troca: "<< n1<<endl;
	cout<<"n1 = "<< n1<<endl;
	cout<<"n2 = "<< n2<<endl;
}
