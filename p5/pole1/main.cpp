/* main.cpp */

#include <cstdlib>

#include "pole.h"

using namespace std;

int main1() {
  Pole a(5);
  for (int i=0; i<a.delka(); i++) a[i] = i;
  cout << "pole a: " << a << endl;  // [0 1 2 3 4]
  int soucet = 0;
  for (int i=0; i<a.delka(); i++) soucet += a[i];
  cout << "soucet prvku pole je " << soucet << endl;
//system("PAUSE");
  return 0;
}

