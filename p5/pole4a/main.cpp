/* main.cpp */

#include <cstdlib>

#include "pole.h"

using namespace std;

Pole ctiPole() {
  int pocet;
  cout << "pocet prvku pole: ";
  cin >> pocet;
  Pole pole(pocet);
  cout << "zadej " << pocet << " prvku pole" << endl;
  for (int i=0; i<pocet; i++) cin >> pole[i];
  return pole;
}

int soucet(Pole pole) {
  int s = 0;
  for (int i=0; i<pole.delka(); i++) s += pole[i];
  return s;
}

int main() {
  Pole a;
  cout << "ctiPole:" <<endl;
  a = ctiPole();
  cout << "konec ctiPole" << endl
       << "pole a: " << a << endl << "soucet:"<< endl;  // [0 1 2 3 4]
  cout << soucet(a) << endl;
  Pole b = a;
  b[1] = 10;
  cout << "konec soucet" << endl
       << "pole a: " << a << endl;  // [0 1 2 3 4]
  cout << "pole b: " << b << endl;  // [0 10 2 3 4]
//system("PAUSE");
  return 0;
}

