/* main.cpp */

#include <cstdlib>

#include "pole.h"

using namespace std;

int main() {
  Pole a(5);
  for (int i=0; i<a.delka(); i++) a[i] = i;
  cout << "pole a: " << a << endl;  // [0 1 2 3 4]
  Pole b = a;
  b[1] = 10;
  cout << "pole a: " << a << endl;  // [0 10 2 3 4]
  cout << "pole b: " << b << endl;  // [0 10 2 3 4]
//system("PAUSE");
  return 0;
}

