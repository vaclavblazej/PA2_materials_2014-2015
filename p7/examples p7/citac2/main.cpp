/* main.cpp */

#include <cstdlib>
#include <iostream>
#include "citac.h"
using namespace std;

int main()
{  Citac<int> icitac(0);
   Citac<char> zcitac('A');

   cout << "Genericky citac\n";
   cout << "\nCitac<int>\n";
   cout << icitac.hodnota() << endl;
   icitac.zvetsit();
   cout << icitac.hodnota() << endl;
   cout << "\nCitac<char>\n";
   cout << zcitac.hodnota() << endl;
   zcitac.zmensit();
   cout << zcitac.hodnota() << endl;
   //system("PAUSE");
   return 0;
}
