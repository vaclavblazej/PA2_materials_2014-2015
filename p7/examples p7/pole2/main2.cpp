/* main2.cpp */

#include <cstdlib>
#include <iostream>

#include "pole.h"
#include "zlomek.h"

using namespace std;

int main() {
  Pole<Zlomek> a(5);
  for (int i=0; i<a.delka(); i++) a[i] = i;
  cout << "pole a: " << a << endl;  
  Pole<Zlomek> b = a;
  b[1] = 10;
  cout << "pole a: " << a << endl;  
  cout << "pole b: " << b << endl;
  //system("PAUSE");  
  return 0;
}

