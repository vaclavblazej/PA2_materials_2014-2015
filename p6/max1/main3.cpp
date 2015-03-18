// main3.cpp

#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

template <class T>
T maxi(T x, T y, T z) {
  return x>y ? (x>z ? x : z) : (y>z ? y : z);
}

int main() {
  int a = 10, b = 20, c = 30;

  cout << maxi(a,b) << endl;   // vypise 20
  cout << maxi(a,b,c) << endl; // vypise 30
  //system("PAUSE");
  return 0;
}
