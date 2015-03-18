#include <iostream>
#include "PR.h"
using namespace std;

int main()
{
	cout << "PR a, b;" << endl;
	PR a, b;
	cout << "a.add(2);" << endl;
	a.add(2);
	cout << "a.add(3);" << endl;
	a.add(3);
	cout << "a.add(4);" << endl;
	a.add(4);
	cout << "b.add(999);" << endl;
	b.add(999);
	cout << "b = a;" << endl;
	b = a;
	cout << "a.add(6);" << endl;
	a.add(6);
	cout << "PR c = a;" << endl;
	PR c = a;
	
	return 0;
}

