#include <iostream>
#include "bag.h"
using namespace std;

int main() {
	Bag b1;
	b1.add(1);
	b1.add(3);
	b1.add(1);
	b1.add(2);
	cout << "b1 = " << b1 << endl;
	Bag b2 = b1;
	b1.remove(1);
	cout << "b1 = " << b1 << endl;
	cout << "b2 = " << b2 << endl;
	Bag b3;
	b3 = b1;
	b1.remove(1);
	cout << "b1 = " << b1 << endl;
	cout << "b3 = " << b3 << endl;
	return 0;
}