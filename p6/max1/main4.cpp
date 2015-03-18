// main4.cpp

#include <cstdlib>
#include <cstring>

using namespace std;

#include <iostream>

template <class T>
T maxi(T x, T y) {
  cout<<" template maxi(" << x << "," << y <<") :";
  return x>y ? x : y;
}

char *maxi(char *x, char *y) {
  cout<<" muj maxi: ";
  return (strcmp(x,y)>0) ? x : y;
}

int main() {
  char a[] = "ahoj", b[] = "nazdar";

  cout << maxi(a, b) << endl;
  cout << maxi((void*)a, (void*)b) << endl;
  //system("PAUSE");
  return 0;
}


