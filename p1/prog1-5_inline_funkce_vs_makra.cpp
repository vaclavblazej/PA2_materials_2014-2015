// prog1-5.cpp

/* inline funkce */

#include <cstdlib>
#include <iostream>

using namespace std;

inline int max(int x, int y) {
	return x >= y ? x : y;
}

#define MAX(x,y) ((x)>=(y) ? (x) : (y))

int main() {
  int a = 10;
  cout << max(a++, 4) << endl;
  cout << a << endl;
  a = 10;
  cout << MAX(a++, 4) << endl;
  cout << a << endl;
  return 0;
}
