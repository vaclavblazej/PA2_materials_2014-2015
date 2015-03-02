#include <iostream>
using namespace std;
 
int main() {
    int a = 4;
	cout << "Hodnota promenne 'a' -> "<< a << endl;

	int * p;
	p = &a;
	*p = 42;

	cout << "Hodnota promenne 'a' -> "<< a << endl;

    return 0;
}