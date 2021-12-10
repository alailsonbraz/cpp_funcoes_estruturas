#include <iostream>	
using namespace std;

float tempC, tempF;

float converterTemperatura(float x){
		return tempF=1.8*x+32;
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	cout<<"Informe a temperatura em Celsius"<<endl;
	cin>>(tempC);
	
	printf("A temperatura correspondente em Farenheit é de °%.2f\n", converterTemperatura(tempC));

	system("pause");				
	return 0;
}
