/* main.cpp */

#include <cstdlib>
#include <iostream>

#include "pole.h"

using namespace std;

int main1() {
  Pole<int> a(5);
  for (int i=0; i<a.delka(); i++) a[i] = i;
  cout << "pole a: " << a << endl;  // [0 1 2 3 4]
  Pole<int> b = a;
  b[1] = 10;
  cout << "pole a: " << a << endl;  // [0 1 2 3 4]
  cout << "pole b: " << b << endl;  // [0 10 2 3 4]
  Pole<double> c(5);
  c[1] = 20;
  cout << "pole c: " << c << endl;  // [0 20 0 0 0]
  Pole<double> d = c;
  d[2] = 30;
  cout << "pole d: " << d << endl;  // [0 20 30 0 0]
  //system("PAUSE");
  return 0;
}

