#include <iostream>
using namespace std;

#define MAX 10

int* f1(int *valores)
{
    int array_temp[MAX];
	
	for(int i = 0; i < MAX; i++)
    {
    	array_temp[i] = *(valores +i) * 2;
	}
	
	int *arr = array_temp;
	
	return arr; // Retorno de um apontador para o vator arr 
}

int * max(int *pa, int *pb) {
   	if(*pa > *pb)
	{
   		// Se *pa > *pb, multiplica *pa (variável i na função main), multiplica *pa por 2 (multiplicar i por 2)
		*pa = *pa * 2;
   		printf("\n PA %d", pa);
        return pa;
	}
	else
        return pb;  
}

int main()
{
    int nums[MAX] = {2,3,7,57,39,45,10,19,25,100};
	int *p, i = 10, j = 5;
	
	int *ptr = f1(nums); // receção de um apontador para o vetor
    printf("\n i (antes) -> %d", i);
	printf("\n %d %d", ptr[0], ptr[1]);
    p = max(&i,&j);
    printf("\n P -> %d", p);
    printf("\n i (depois) -> %d", i);
    
    return 0;
}

