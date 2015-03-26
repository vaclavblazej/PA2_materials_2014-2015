/* main.cpp */

#include <cstdlib>
#include <iostream>

#include "pole.h"
#include "string.h"

using namespace std;
 
int main() {
  Pole<String> a(5);
  cout << "0000000000000000000000000000" <<endl;
  cout << "pole a: " << a << ';' << endl;
  cout << "1111111111111111111111111111" <<endl;
  a[0] = "prvni";
  a[1] = "druhy";
  a[2] = "treti";
  a[3] = "ctvrty";
  a[4] = "paty";
  cout << "2222222222222222222222222222" <<endl;
  Pole<String> b = a;
  cout << "3333333333333333333333333333" <<endl;
  b[0] = "Prvni";
  cout << "pole a: " << a << ';' << endl;
  cout << "pole b: " << b << ';' << endl;
  //system("PAUSE");
  return 0;
}

