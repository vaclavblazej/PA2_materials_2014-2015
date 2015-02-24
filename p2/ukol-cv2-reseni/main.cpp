/* main.cpp */
#include <iostream>
using namespace std;
#include "complex.h"

int main(void) {
 Complex x(1,1), y(2,2), z;
 float a;
 cout << "x="; x.print(); cout << endl;
 cout << "y="; y.print(); cout << endl;
 z = add(x, y);
// z.add(x);
 cout << "x+y="; z.print(); cout << endl;
 z = diff(x, y);
// z.diff(x);
 cout << "x-y="; z.print(); cout << endl;
 a = x.abs();
 cout << "abs(x)=" << a << endl;
 return 0;
}
