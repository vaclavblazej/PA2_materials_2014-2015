// main.cpp

#include <cstdlib>
#include <iostream>

#include "array.h"

using namespace std;

int main() {
  Array<int> a1;
  cout << a1 << endl;
  a1[1] = 1;
  cout << a1 << endl;
  Array<int> a2 = a1;
  a1.extend(20);
  cout << a1 << endl;
  cout << a2 << endl;
  a2[5] = 5;
  cout << a2 << endl;
  a2 = a1;
  cout << a2 << endl;
  //system("PAUSE");
  return 0;
}

  
