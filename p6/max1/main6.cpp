// main6.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

struct S {
  int a;
};

/* pridame-li tuto definici, chyba zmizi
bool operator>(S x, S y) {
  return x.a > y.a;
}
*/
int main() {
  S x = {1}, y = {2}, z;

  z = maxi(x, y);   // chyba pri prekladu
  cout << z.a << endl;
  //system("PAUSE");
  return 0;
}
