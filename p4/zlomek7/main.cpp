// main.cpp

#include <cstdlib>

#include "zlomek.h"

using namespace std;

int main() {
  Zlomek a(2,5);
  cout << a << endl;       // vypise (2/5)
  cout << ++a << endl;     // vypise (7/5)
  cout << a++ << endl;     // vypise (7/5)
  cout << a << endl;       // vypise (12/5)
  Zlomek x(3,4), y(1,8);
  x += y;
  cout << x << endl;       // vypise (7/8)
 
  //new
  Zlomek w,z;
  z=w=x;
  cout<<z<<" "<<w<<" "<<x<<endl;
  // viz int
  int p=0,q=1,r=2;
  p=q=r;
  cout<<p<<" "<<q<<" "<<r<<endl;
 
//system("PAUSE");
  return 0;
}
