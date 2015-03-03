// main.cpp

#include <iostream>
#include <cstdlib>

#include "zlomek.h"

using namespace std;

///int nsd(int,int);

int main() {
  ///int ii=nsd(12,100);
  ///cout<<"ii: "<<ii<<endl;
  Zlomek a(3,-5), b(1), c;
  a.vypis(); cout << ' '; b.vypis();
  cout << endl;
  c = soucet(a, b);
  c.vypis(); cout << endl;
  b.vypis(); cout << endl;
  c = rozdil(a, b);
  ///c=rozdil(c,Zlomek(2,5));
  c.vypis(); cout << endl;
  cout << boolalpha <<rovno(a,b) << endl;
//system("PAUSE");
  return 0;
}
