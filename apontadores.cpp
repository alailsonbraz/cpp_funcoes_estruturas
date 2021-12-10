#include<iostream>
using namespace std;

int main()								
{
    int a;
    int b;
    int c;
    int *ptr;       //decl de um apontador
    a= 90;
    b = 2;
    c= 3;
    ptr = &a;//endereço de memória da var a
    printf ("Valor de ptr %p, conteudo de ptr %d TESTE: %d\n ", ptr, *ptr, &ptr);
    printf ("B: %d, C: %d\n", b,c);
}
