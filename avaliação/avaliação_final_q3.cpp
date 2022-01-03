#include <iostream>
using namespace std;

#define MAX 2

struct funcionario{
	int codigo;
	char nome[30];
	char morada[30];
	char telefone[20];
	float vencimento;
};

typedef struct funcionario Funcionario;


//calcula a m�dia dos vencimentos
float obterMediaVenimentos(float somaVenc){
	return somaVenc/MAX;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float somaVencimentos=0;
	
	Funcionario funcioVet[MAX];
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o c�digo do funcion�rio "<< i+1 <<endl;
		cin>>funcioVet[i].codigo;
		cout<<"Informe o nome do funcion�rio "<< i+1 <<endl;
		cin>>funcioVet[i].nome;
		cout<<"Informe a morada do funcion�rio "<< i+1 <<endl;
		cin>>funcioVet[i].morada;
		cout<<"Informe o telefone do funcion�rio "<< i+1 <<endl;
		cin>>funcioVet[i].telefone;
		cout<<"Informe o vencimento do funcion�rio "<< i+1 <<endl;
		cin>>funcioVet[i].vencimento;
	}
	
	for(int i=0; i<MAX; i++){
		somaVencimentos+=funcioVet[i].vencimento;
	}
	
	obterMediaVenimentos(somaVencimentos);

	for(int i=0; i<MAX; i++){
		cout<<"--------****--------"<<endl;
		cout<<"Nome do funcion�rio:"<<endl;
		cout<<funcioVet[i].nome<<endl;
		cout<<"C�digo do funcion�rio:"<<endl;
		cout<<funcioVet[i].codigo<<endl;
		cout<<"Morada do funcion�rio:"<<endl;
		cout<<funcioVet[i].morada<<endl;
		cout<<"Telefone do funcion�rio:"<<endl;
		cout<<funcioVet[i].telefone<<endl;
		cout<<"--------****--------"<<endl;
	}
	cout<<"Media dos Vencimentos: "<<obterMediaVenimentos(somaVencimentos)<<endl;

    system("pause");	
	return 0;
}
