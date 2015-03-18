// main5.cpp

#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

template int maxi(int, int);   // vytvori instanci
template char maxi(char,char);

int main() {
  int i = 10, j = 20;
  char c = 'a';

  cout << maxi(i, j) << endl;
  cout << maxi((char)i, c) << endl;
  //cout << maxi(i, c) << endl; // chyba
  //system("PAUSE");
  return 0;
}

