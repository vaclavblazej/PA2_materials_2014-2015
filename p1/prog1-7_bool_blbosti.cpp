/* prog1-7.cpp */

/* blbustky s typem bool */

#include <typeinfo> // typeid(x)
#include <iostream>

using namespace std;


int main() {
  //bool a=true, b=false;
  bool a=100, b=100; // vyzkosejte misto predchoziho radku
  int i = 100, j = 0;
  cout << "a=" << a << ", b=" << b << endl;
  cout << "a||b=" << (a||b) << endl;
  cout << "a+b=" << a+b << endl;
  a = i; b = j;
  cout << "a=" << a << ", b=" << b << endl;
  //system("PAUSE");
  return 0;
}

/*
jak zjistit typ promenne?
#include <typeinfo>
cout << typeid(b).name() << endl;
neni dokonale, neni dano standardem co se vrati
 na nektere platforme dostanete 'int' a jinde jenom 'i'
*/
