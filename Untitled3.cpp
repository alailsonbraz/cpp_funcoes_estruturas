#include void main( ) {

int i=5, *p;

p = &i;

cout << p << ‘\t’ << (*p+2) << ‘ \t’ << &i;

}
