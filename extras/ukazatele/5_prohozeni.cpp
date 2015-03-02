#include <iostream>
using namespace std;
 
int main() {
    int a = 4;
    int b = 54;
	cout << "Hodnota promenne 'a, b' -> "<< a << ", " << b << endl;

	int c;
	c = b;
	b = a;
	a = c;

	cout << "Hodnota promenne 'a, b' -> "<< a << ", " << b << endl;

	int * p;
	p = &c;
	*p = b;
	b = a;
	a = *p;

	cout << "Hodnota promenne 'a, b' -> "<< a << ", " << b << endl;

	p = (int*)b;
	b = a;
	a = (long)p;

	cout << "Hodnota promenne 'a, b' -> "<< a << ", " << b << endl;

    return 0;
}