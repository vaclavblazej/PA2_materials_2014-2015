#include <iostream>
#include <queue>
using namespace std;

/*
Proc maji tyto kompilace jine vypisy?
g++ 7_silenost.cpp && ./a.out
g++ 7_silenost.cpp -O3 && ./a.out
*/

int main(){
	long a; // promenne a, b
	long b;
	a = (long)&a; // do promenne a ulozim jeji adresu
	b = (long)&a;
	cout << a << " " << &a << endl; // vypisu
	cout << b << " " << &b << endl;
	// pozn. adresa je hexadecimalne (defaultne)
	// ale vypsane hodnoty jsou stejne
	*(((long*)a)+1) = 20;
	cout << b << endl;
	cout << *(((long*)a)+1) << endl;
	// dereference a (presto ze to neni ukazatel)
	// protoze obsahuje svoji adresu, tak pracujeme
	// s promennou a, a+1 = b
	return 0;
}