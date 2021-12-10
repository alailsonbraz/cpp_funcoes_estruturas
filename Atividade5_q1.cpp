#include <iostream>
using namespace std;

bool primo(int x){
	int contador=0;

	for (int i = 1; i <= x; i++) {
  		if (x % i == 0) { 
    	 contador++;
    	}
  	}
  	
  	if (contador == 2)
    	return true;
 	else
    	return false;
}

void imprime_vetor(int *vet, int tam_vet){
	for(int i=0; i<tam_vet; i++){
		if(*(vet+i)!=0){
			printf("%d\n", *(vet+i));
		}		
	}
}

int main() {
	
 setlocale(LC_CTYPE, "Portuguese");
  
  int n1, n2, tam, increm=0; 
  
  cout<<"Insira o primeiro número do intervalo: "<<endl;
  cin>>n1;
  
  cout<<"Insira o último número do intervalo: "<<endl;
  cin>>n2;
  
  tam=(n2-n1)+1;
  
  int vetPrimo[tam];
  
  while(n1<=n2){
  	if(primo(n1)){
  		vetPrimo[increm]=n1;		  	
  }else{
  		vetPrimo[increm]=0;
  }
  	increm++;
 	n1++;
}  
  imprime_vetor(vetPrimo, tam);
  return 0;
}

