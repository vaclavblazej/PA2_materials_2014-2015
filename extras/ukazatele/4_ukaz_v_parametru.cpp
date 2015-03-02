#include <iostream>
using namespace std;

int funkce1(int b){
	b = 42;
}

int funkce2(int *p){
	*p = 42;
}
 
int main() {
    int a = 4;
	cout << "Hodnota promenne 'a' -> "<< a << endl;

	funkce1(a);
	cout << "Hodnota promenne 'a' -> "<< a << endl;

	funkce2(&a);
	cout << "Hodnota promenne 'a' -> "<< a << endl;

    return 0;
}