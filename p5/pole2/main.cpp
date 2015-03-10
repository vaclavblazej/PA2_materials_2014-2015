/* main2.cpp */

#include <cstdlib>

#include "pole.h"

using namespace std;

void funkce() {
  Pole a(5);
  for (int i=0; i<a.delka(); i++) a[i] = i;
  cout << "pole a: " << a << endl;  // [0 1 2 3 4]
  Pole b(3);
  b = a;
  b[1] = 10;
  cout << "pole a: " << a << endl;  // [0 10 2 3 4]
  cout << "pole b: " << b << endl;  // [0 10 2 3 4]
/* zde vypise napr.
dealokace pole na adrese 0x3d3e98 
dealokace pole na adrese 0x3d3e98 
*/
}
  
int main() {
  funkce();
//system("PAUSE");
  return 0;
}

