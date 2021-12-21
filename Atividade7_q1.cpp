/*Crie uma estrutura representando um aluno de uma disciplina. 
Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Defina também um tipo para esta estrutura. Agora, escreva um programa
que leia os dados de cinco alunos e os armazena nessa estrutura. 
Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.*/
#include <iostream>
using namespace std;

#define MAX 5

struct aluno{
	int matricula;
	char nome[20];
	float n[3];
	float mediaGeral;
};

typedef struct aluno Aluno;


//calcula a média de cada aluno
float obterMediaGeral(float nota1, float nota2, float nota3){
	return (nota1 + nota2 + nota3)/3;
}

//retorna a posição do aluno com maior media geral
int melhorAluno(Aluno aln[MAX]){
	int indice=0;
	float maior=0;
	for(int i=0; i<MAX; i++){
		if(aln[i].mediaGeral>maior){
			maior=aln[i].mediaGeral;
			indice=i;
		}
	}
	return indice;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	Aluno alunos[MAX];
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o nome do aluno "<< i+1 <<endl;
		cin>>alunos[i].nome;
		cout<<"Informe a matricula do aluno "<< i+1 <<endl;
		cin>>alunos[i].matricula;
		
		int cont=0;
		while(cont<3){
			cout<<"Informe a nota "<< cont+1 << " do aluno "<< i+1 <<endl;
			scanf("%f", &alunos[i].n[cont]);
			cont++;
		}
	}
	
	for(int i=0; i<MAX; i++){
		alunos[i].mediaGeral = obterMediaGeral(alunos[i].n[0], alunos[i].n[1], alunos[i].n[2]);
	}
	
	cout<<"O(a) aluno(a) " <<alunos[melhorAluno(alunos)].nome << " obteve a maior média geral."<<" Notas: ";
	int cont=0;
	while(cont<3){
		printf("%.2f ", alunos[melhorAluno(alunos)].n[cont]);
		cont++;
		}	
    system("pause");	
	return 0;
}
