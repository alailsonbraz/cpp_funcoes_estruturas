/*Crie um programa com uma estrutura para simular uma agenda de contactos telefónicos, com até 100 registros. 
Nessa agenda deve constar o nome, sobrenome, número de telefone, e e-mail. O programa deverá fazer a leitura e, após isso, mostrar os dados no ecrã.*/
#include <iostream>
using namespace std;

#define MAX 2
struct contactoAgenda{
	char nome[20];
	char sobrenome[20];
	char numTelefone[20];
	char email[20];
	;
};
typedef struct contactoAgenda ContactoAgenda;

//imprime os nomes dos associados com mais dependentes
void mostrarAgenda(ContactoAgenda contacto[MAX]){
	for(int i=0; i<MAX; i++){
		printf("Nome: %s \n Sobrenome: %s \n nº de telefone: %s \n E-mail: %s \n",
		 contacto[i].nome, contacto[i].sobrenome, contacto[i].numTelefone, contacto[i].email);
	}
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	ContactoAgenda contact[MAX];
	
	int maiorQtd=0;
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o nome "<< i+1 <<endl;
		cin>>contact[i].nome;
		cout<<"Informe sobrenome "<< i+1 <<endl;
		cin>>contact[i].sobrenome;
		cout<<"Informe telefone "<< i+1 <<endl;
		cin>>contact[i].numTelefone;
		cout<<"Informe e-mail "<< i+1 <<endl;
		cin>>contact[i].email;
	}
	
	//chama o procedimento q imprime os contactos da agenda
	mostrarAgenda(contact);
	
    system("pause");	
	return 0;
}
