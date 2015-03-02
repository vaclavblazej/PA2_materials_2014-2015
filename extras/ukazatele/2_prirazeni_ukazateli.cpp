#include <iostream>
using namespace std;
 
int main() {
    int a = 4;
	cout << "Adresa promenne 'a' = "<< &a << endl;
	cout << "Hodnota promenne 'a' = "<< a << endl;
	cout << endl;

	int * p;
	p = &a;
	cout << "Adresa promenne 'p' = "<< &p << endl;
	cout << "Hodnota promenne 'p' = "<< p << endl;

    return 0;
}