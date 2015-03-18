// main.cpp

#include <cstdlib>
#include <iostream>

#include "max.h"

using namespace std;

int main() {
  int a = 10, b = 20, c = 30;
  char z = 'a';

  cout << maxi(a, b) << endl;
  cout << maxi(a, b, c) << endl;
  cout << maxi(z, 'b') << endl; 
  //system("PAUSE");
  return 0;
}
