// main.cpp

#include <cstdlib>
#include <iostream>

#include "sablony.h"

using namespace std;

int main() {
  int a[] = {1,-3,30,20,-4,5,111,23,4,30,22,99,-2};
  const int delka_a = sizeof(a)/sizeof(int);
  char b[] = {'z','a','r','f','t','y','6','g','+','t'};
  const int delka_b = sizeof(b)/sizeof(char);

  sort(a, delka_a);
  cout << "pole a:" << endl;
  vypis(a, delka_a);
  cout << endl;
  cout << "pole b:" << endl;
  sort(b, delka_b);
  vypis(b, delka_b);
  //system("PAUSE");
  return 0;
}

