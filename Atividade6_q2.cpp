/*Escreva um programa para calcular 
(usando uma função) o comprimento 
da string (array char) usando um apontador*/

#include <iostream>
#include <cstring>
using namespace std;
#define MAX 500

int comprimentoString(char *plvr){
    int tamanho=0;
    while (*plvr) {
        tamanho += 1;
        plvr +=1;
    }
    return tamanho - 1;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char text[MAX];
	char *ptrText=text;
		
	cout<<"Insira uma palavra ou uma frase"<<endl;
	fflush(stdin);
	fgets(text, 500, stdin);
	
	cout<<comprimentoString(ptrText)<<endl;
    system("pause");	
	return 0;
}
