// main.cpp

#include <cstdlib>
#include <iostream>

#include "zlomek.h"

using namespace std;

int main() {
  Zlomek a(3,5), b(1), c;
  cout << a << ' ' << b << endl;
  c = a + b;
  cout << a+Zlomek(1) << endl;
  cout << "c=" <<  c << endl;
  c = a - b;
  cout << c << endl;
  cout << (a == b) << endl;
//system("PAUSE");
  return 0;
}
