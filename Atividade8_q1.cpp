/*Um clube social com 37 associados deseja que voc� fa�a um programa para armazenar os dados pessoais desses associados. 
Os dados s�o: nome, dia, m�s e ano de nascimento, valor da mensalidade e quantidade de dependentes. 
O programa dever� ler os dados e imprimir depois os mesmos no ecr�. 
Dever� tamb�m mostrar o associado (ou os associados) com o maior n�mero de dependentes.*/
#include <iostream>
using namespace std;

#define MAX 100

struct associado{
	char nome[20];
	int dia;
	int mes;
	int ano;
	float valorMensalidade;
	int quantDependentes;
};
typedef struct associado Associado;

//imprime os nomes dos associados com mais dependentes
void associadosComMaisDependentes(int qtd, Associado assoc[MAX]){
	for(int i=0; i<MAX; i++){
		if(assoc[i].quantDependentes==qtd){
			printf("O(a) Associado(a) %s tem o maior n�mero de dependentes. \n", assoc[i].nome);
		}
	}
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	Associado socios[MAX];
	
	int maiorQtd=0;
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o nome do associado "<< i+1 <<endl;
		cin>>socios[i].nome;
		cout<<"Informe o dia de nascimento do associado "<< i+1 <<endl;
		cin>>socios[i].dia;
		cout<<"Informe o m�s de nascimento do associado "<< i+1 <<endl;
		cin>>socios[i].mes;
		cout<<"Informe o m�s de nascimento do associado "<< i+1 <<endl;
		cin>>socios[i].ano;
		cout<<"Informe o valor da mensalidade do associado "<< i+1 <<endl;
		cin>>socios[i].valorMensalidade;
		cout<<"Informe o n�mero de dependentes do associado "<< i+1 <<endl;
		cin>>socios[i].quantDependentes;
		//verifica se a quantidade de dependentes informada � a maior at� o momento
		if(socios[i].quantDependentes>maiorQtd){
			maiorQtd=socios[i].quantDependentes;
		}
	}
	
	//chama o procedimento q imprime os socios com maiores n�meros de dependentes passando como parametos a quantidade e o array struct socios
	associadosComMaisDependentes(maiorQtd, socios);
	
    system("pause");	
	return 0;
}
