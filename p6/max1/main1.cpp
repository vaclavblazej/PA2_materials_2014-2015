// main1.cpp

#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

int main() {
  int i = 10, j = 20;
  char c = 'a';
  unsigned u = 40;

  cout << maxi(i,20) << endl;  // vytvori se int max(int,int)
  cout << maxi(i,j) << endl;  // pouzije se jiz vytvorena int max(int,int)
  cout << maxi(c,'b') << endl; // vytvori se char max(char,char)
//  cout << maxi(i,c) << endl;  // chyba, nejednoznacny typ
//  cout << maxi(i,u) << endl;  // chyba, nejednoznacny typ
  cout << maxi<char>(i,c) << endl;  // pouzije je char max(char,char)
  cout << maxi<int>(i,u) << endl;   // pouzije se int max(int,int)
  //system("PAUSE");
  return 0;
}
