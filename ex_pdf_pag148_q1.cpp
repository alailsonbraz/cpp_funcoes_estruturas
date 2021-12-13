#include <iostream>
using namespace std;

#define MAX 10

int main(){
	
	int a=10, b=20;
	
	if(&a > &b){
		cout<<&a<<endl;
	}else{
		cout<<&b<<endl;
	}
	return 0;
}
