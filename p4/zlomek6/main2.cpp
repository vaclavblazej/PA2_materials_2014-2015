// main2.cpp

#include <cstdlib>
#include <iostream>

#include "zlomek.h"

using namespace std;

int main2() {
  Zlomek a(3,5), b;
  int i = 1;
  b = 2;
  cout << b << endl;
  b = a + i;
  cout << b << endl;
  b = 2 + a;
  cout << b << endl;
//system("PAUSE");
  return 0;
}
