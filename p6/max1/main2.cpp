// main2.cpp

#include <cstdlib>
#include <iostream>
using namespace std;

template <class V, class T>
V maxi(T x, T y) {
  return x>y ? x : y;
}

int main() {
  int i = 10;
  char c = 'a';

  cout << maxi<char>(c, 'b') << endl;  // vypise b
  cout << maxi<int>(c, 'b') << endl;   // vypise 98
  cout << maxi<int,int>(i, c) << endl; // vypise 97
  //system("PAUSE");
  return 0;
}

