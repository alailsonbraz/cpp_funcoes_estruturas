#include <iostream>
#include <string>
using namespace std;

#define MAX 5

int maior(int max, int valores[]){
	int maiorV=valores[0];
	for(int i=0; i<max; i++){
		if(valores[i]>maiorV){
			maiorV=valores[i];
		}
	}
	return maiorV;
}

// Função de Ordenação por Inserção
// Insertion sort function
void insertion_sort(int valores[])
{
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++)
 {
  tmp = valores[i];
  for(j = i-1; j >= 0 && tmp < valores[j]; j--)
  {
   valores[j+1] = valores[j];
  }
  valores[j+1] = tmp;
 }
 for(int i=0; i<MAX; i++){
 	printf("%d\n", valores[i]);
 }
}


int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int numRecebido[MAX];
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o inteiro da posição "<<i<<endl;
		cin>>numRecebido[i];
	}
	
	cout<<"O maior valor é: "<< maior(MAX, numRecebido)<<endl;
	
	insertion_sort(numRecebido);
	
	system("pause");				
	return 0;
}

