/* main.cpp */

#include <cstdlib>
#include <string>
#include <iostream>

#include "pole.h"

using namespace std;
 
int main() {
  Pole<string> a(5);
  cout << "pole a: " << a << ';' << endl;
  a[0] = "prvni";
  a[1] = "druhy";
  a[2] = "treti";
  a[3] = "ctvrty";
  a[4] = "paty";
  Pole<string> b = a;
  b[0] = "Prvni";
  cout << "pole a: " << a << ';' << endl;
  cout << "pole b: " << b << ';' << endl;
  //system("PAUSE");
  return 0;
}

