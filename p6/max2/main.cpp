// main.cpp

#include "zlomek.h"

using namespace std;

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

int main() {
  Zlomek a(3,5), b(1), c;
  
  cout << maxi(a, b) << endl;
  cout << maxi(a, Zlomek(4,5)) << endl;
  //system("PAUSE");
  return 0;
}
