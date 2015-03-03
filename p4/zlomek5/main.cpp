// main.cpp

#include <cstdlib>
#include <iostream>

#include "zlomek.h"

using namespace std;

int main() {
  Zlomek a(3,5), b(1), c;
  a.vypis(); cout << ' '; b.vypis();
  cout << endl;
  c = a + b;
  c.vypis(); cout << endl;
  c = a - b;
  c.vypis(); cout << endl;
  cout << (a == b) << endl;
//system("PAUSE");
  return 0;
}
