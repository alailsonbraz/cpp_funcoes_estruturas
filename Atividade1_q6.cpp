#include <iostream>	
using namespace std;

int idadeInf, doencaInf;

int idade(int x){
	if(x>=65){
		return 1;
	}else if((x>=18)&&(x<65)){
		return 2;
	}else{
		return 0;
	}
}

bool doenca(int y){
	if(y >=1 && y <=5 || y==99){
		return true;	
	}
		return false;	
	}

void menuOpcao(){
		cout<<"-----Selecione as op��es-----"<<endl;
		cout<<"1 - pulmonar"<<endl;
		cout<<"2 - Card�aca"<<endl;
		cout<<"3 - Mental"<<endl;
		cout<<"4 - metab�lica"<<endl;
		cout<<"5 - Digestiva"<<endl;
		cout<<"6 - outras"<<endl;		
}

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	cout<<"Informe a idade:"<<endl;
	cin>>idadeInf;
	
	menuOpcao();
	
	cout<<"Informe a doen�a:"<<endl;
	cin>>doencaInf;
	
	if(idade(idadeInf)==1 && doenca(doencaInf)){
		cout<<"Escal�o et�rio: Senior"<<endl;
		cout<<"Sofre de doen�a cr�nica: Sim"<<endl;
		}else if(idade(idadeInf)==2 && doenca(doencaInf)){
		cout<<"Escal�o et�rio: Adulto"<<endl;
		cout<<"Sofre de doen�a cr�nica: Sim"<<endl;
		}else if(idade(idadeInf)==1 && doenca(!doencaInf)){
		cout<<"Escal�o et�rio: Senior"<<endl;
		cout<<"Sofre de doen�a cr�nica: N�o"<<endl;
		}else if(idade(idadeInf)==2 && doenca(!doencaInf)){
		cout<<"Escal�o et�rio: Adulto"<<endl;
		cout<<"Sofre de doen�a cr�nica: N�o"<<endl;
	}
	else{
		cout<<"A idade informada n�o est� definida em nenhum escal�o predefinido!"<<endl;
	}

	system("pause");				
	return 0;
}
